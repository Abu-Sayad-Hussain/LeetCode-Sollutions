/**
 * @param {Function[]} functions
 * @param {number} n
 * @return {Function}
 */
 var promisePool = async function(functions, n) {
    async function next(){
        if(functions.length === 0)return;
        fn = functions.shift();
        await fn();
        await next();
    }
    const np = Array(n).fill().map(next);

    return Promise.all(np);
};

/**
 * const sleep = (t) => new Promise(res => setTimeout(res, t));
 * promisePool([() => sleep(500), () => sleep(400)], 1)
 *   .then(console.log) // After 900ms
 */
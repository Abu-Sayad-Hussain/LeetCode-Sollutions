/**
 * @param {Function} fn
 * @return {Function}
 */
 var once = function(fn) {
    let i = 0;
    return function(...args){
      if(i < 1){
        const calc = fn(...args);
        i++;
        return calc;
      }
    }
};

/**
 * let fn = (a,b,c) => (a + b + c)
 * let onceFn = once(fn)
 *
 * onceFn(1,2,3); // 6
 * onceFn(2,3,6); // returns undefined without calling fn
 */
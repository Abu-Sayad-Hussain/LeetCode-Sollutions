/**
 * @param {Function[]} functions
 * @return {Function}
 if(functions.length === 0){
            return x;
        }
        if(functions.length === 1){
            return functions[0];
        }else{
            return functions.reduce((f,g) => {
                f(g(x));
            })
        }
 */
        var compose = function(functions) {
            return function(x) {
                return functions.reduceRight((acc, fn) => fn(acc), x);
            }
        };
        
        /**
         * const fn = compose([x => x + 1, x => 2 * x])
         * fn(4) // 9
         */
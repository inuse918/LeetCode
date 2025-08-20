/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let value = init;
    const ori = init;
    return {
        // increment() {
        //     return ++value;
        // } ,
        // decrement() {
        //     return --value;
        // } ,
        // reset() {
        //     value = ori
        //     return  value ;
        // }
        
        // using arrow function
        increment:()=> ++value,
        decrement:()=> --value,
        reset:()=> value = ori,
        
    };
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
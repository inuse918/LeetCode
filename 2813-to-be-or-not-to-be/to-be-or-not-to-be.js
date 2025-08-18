/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    return { // 객체 리턴 
        toBe: function (otherVal){
            if (val === otherVal) return true;
            else throw new Error("Not Equal");
        } , 
        notToBe: function (otherVal){
            if (val !== otherVal) return true;
            else throw new Error("Equal");
        }

    }
};
/**
    만약 expec(5)를 실행했다면.. 결과는 다음과 같음...
    두 개의 함수를 담은 객체를 반환한다.
    {
        toBe: ƒ,        // 함수
        notToBe: ƒ      // 함수
    } 

 */
/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */
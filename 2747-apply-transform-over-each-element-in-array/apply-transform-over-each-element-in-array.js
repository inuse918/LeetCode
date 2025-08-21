/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    const newArr = [];

    // 파라미터의 arr의 원소, idx를 꺼내서 forEach
    arr.forEach((element, index) => {
        newArr[index] = fn(element, index);
        //fn함수 호출해서 arr의 내용 전달 -> 결과 newArr에 받음
    });
    return newArr;
};
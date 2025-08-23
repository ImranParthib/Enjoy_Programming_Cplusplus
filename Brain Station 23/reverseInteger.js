/**
 * @param {number} x
 * @return {number}
 */
var reverse = function (x) {
    let str = x.toString();
    let reNum = [];
    for (let n of str) {
        reNum.push(n);
    }
    reNum.reverse();
    return Number(reNum.join(""));
};

let n = 123;
const result = reverse(n);
console.log(result); // 321

/**
 * @param {number} x
 * @return {number}
 */
var reverse = function (x) {
    const INT_MAX = 2 ** 31 - 1;
    const INT_MIN = -(2 ** 31);

    let str = Math.abs(x).toString();        // work with absolute value
    let reNum = str.split("").reverse().join("");
    let num = Number(reNum);

    if (num < INT_MIN || num > INT_MAX) {
        return 0; // overflow
    }

    return x < 0 ? -num : num; // put sign back
};

console.log(reverse(123));        // 321
console.log(reverse(-123));       // -321
console.log(reverse(120));        // 21
console.log(reverse(1534236469)); // 0

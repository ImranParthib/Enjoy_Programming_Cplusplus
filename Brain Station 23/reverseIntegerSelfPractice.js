/**
 * @param {number} x
 * @return {number}
 */
var reverse = function (x) {
    // example number 123
    // step 1: reserve the negative number or oldnum
    let oldnum;
    if (x < 0) {
        oldnum = x;
    }

    x = Math.abs(x);

    let reverseNum = 0; // step2: store the revese Number
    while (x > 0) {
        let lastNum = x % 10; //123 % 10 == 3
        reverseNum = lastNum + reverseNum * 10;
        x = Math.floor(x / 10)
    }


    if (oldnum < 0) {
        reverseNum = -reverseNum;
    }

    const initMax = Math.pow(2, 31) - 1;
    const initMin = -Math.pow(2, 31);

    if (reverseNum < initMin || reverseNum > initMax) {
        return 0
    }

    return reverseNum;


};
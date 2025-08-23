/**
 * @param {number} x
 * @return {number}
 */
var reverse = function (x) {
    let OldVal;                      // Store original value to remember if it's negative
    if (x < 0) OldVal = x;           // If input is negative, save it

    x = Math.abs(x);                 // Work with positive value for easier reversal

    let s = 0;                        // This will hold the reversed number

    while (x > 0) {                   // Loop until all digits are processed
        let r = x % 10;               // Get the last digit  e.g 321
        s = r + s * 10;               // Shift previous digits left and append the new one e.g 
                                      // e.g 1, 2nd loop, 2+3*10 = 32
        x = Math.floor(x / 10);       // Remove last digit from x
    }

    if (OldVal < 0) s = -s;           // Restore negative sign if original number was negative

    // Define 32-bit signed integer limits
    const initMin = -Math.pow(2, 31); // -2147483648
    const initMax = Math.pow(2, 31) - 1; // 2147483647

    // Check overflow: if reversed number exceeds 32-bit range, return 0
    if (s < initMin || s > initMax) return 0;

    return s;                         // Return the reversed integer
};

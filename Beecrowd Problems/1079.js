/*
Author: Imran Parthib
Date: 14.07.2025 Time: 11:49
*/
const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let inputLines = [];
let testCaseCount = 0;

rl.on('line', (line) => {
    inputLines.push(line.trim());
    if (inputLines.length === 1) {
        testCaseCount = parseInt(inputLines[0]);
    } else if (inputLines.length === testCaseCount + 1) {
        rl.close(); // Stop reading input when all test cases are in
    }
});

rl.on('close', () => {
    for (let i = 1; i <= testCaseCount; i++) {
        const [a, b, c] = inputLines[i].split(' ').map(Number);
        const weightedAvg = (a * 2 + b * 3 + c * 5) / 10;
        console.log(weightedAvg.toFixed(1));
    }
});

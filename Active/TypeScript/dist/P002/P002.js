"use strict";
// Project Euler                                       
// Problem 2: The sum of even Fibonacci number under 4000000
Object.defineProperty(exports, "__esModule", { value: true });
exports.compute002 = void 0;
function compute002(limit) {
    let sum = 0;
    let x = 1; // first digit of Fibonacci
    let y = 1; // second digit of Fibonacci
    let temp = 0; // temp variable to store value
    while (y < limit) {
        if (y % 2 == 0) {
            sum += y;
        }
        temp = x; // store the first digit in temp
        x = y; // store the second digit in x
        y = temp + x; // derivate the third digit by adding temp and x
    }
    return sum;
}
exports.compute002 = compute002;
function run002() {
    const limit = 4000000;
    console.log(compute002(limit).toString());
}
run002();

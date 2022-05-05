"use strict";
// Project Euler                                      
// Problem 1: The sum of multiple of 3 or 5 below 1000
Object.defineProperty(exports, "__esModule", { value: true });
exports.compute001 = void 0;
function compute001(limit) {
    let sum = 0;
    for (let i = 0; i < limit; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}
exports.compute001 = compute001;
function run001() {
    const limit = 1000;
    console.log(compute001(limit).toString());
}
// run001();

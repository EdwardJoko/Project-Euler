"use strict";
// Project Euler
// Problem 3: The largest prime factor of 600851475143
Object.defineProperty(exports, "__esModule", { value: true });
exports.compute003 = void 0;
// we divide the argument with every factor it has starting with 2,
// then it will leaves two biggest factors that the number has
function compute003(limit) {
    let i = 2;
    let factor = i;
    while (i * i <= limit) {
        if (limit % i != 0) {
            i += 1;
            continue;
        }
        while (limit % i == 0) {
            limit /= i;
        }
        factor = i;
    }
    if (factor > limit) {
        return factor;
    }
    return limit;
}
exports.compute003 = compute003;
function run003() {
    const limit = 600851475143;
    console.log(compute003(limit).toString());
}
// run003();

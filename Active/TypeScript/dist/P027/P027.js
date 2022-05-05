"use strict";
// Project Euler
// With the form of n^2 + an + b, where |a| < 1000 and |b| <= 1000
// Find the product of the coefficients, a and b, for the quadratic
// expression above that produces the maximum number of primes for
// consecutive values of n, starting with n = 0.
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
exports.compute027 = void 0;
const eratosthenesSieve_1 = __importDefault(require("../lib/eratosthenesSieve"));
const primeChecker_1 = __importDefault(require("../lib/primeChecker"));
function compute027(limit) {
    // with the form of n^2 + an + b, and n should start from 0,
    // then b should be a prime and also positive
    const candidateB = (0, eratosthenesSieve_1.default)(limit);
    const bLength = candidateB.length;
    let biggestN = 0;
    let answer = { a: 0, b: 0 };
    for (let i = 0; i < bLength; i++) {
        // iterate over all possibilities of a
        for (let j = 1 - limit; j < limit; j++) {
            let n = 1;
            let product = (n * n) + (n * j) + candidateB[i];
            while ((0, primeChecker_1.default)(product)) {
                n += 1;
                product = (n * n) + (n * j) + candidateB[i];
            }
            if (n > biggestN) {
                biggestN = n;
                answer.a = j;
                answer.b = candidateB[i];
            }
        }
    }
    return answer.a * answer.b;
}
exports.compute027 = compute027;
function run027() {
    const limit = 1000;
    console.log(compute027(limit).toString());
}
// run027();

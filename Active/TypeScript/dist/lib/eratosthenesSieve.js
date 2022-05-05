"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
// return an array consists of prime numbers from 2 to limit
function primeGenerator(limit) {
    // generate an array with element from 0 to limit
    const nums = [];
    for (let i = 0; i <= limit; i++) {
        nums.push(i);
    }
    // 1 is not prime
    nums[1] = 0;
    // eliminate non-prime numbers from the array with Eratosthenes's
    // sieve
    const biggestNum = nums[nums.length - 1];
    for (let i = 0; i * i <= biggestNum; i++) {
        const divider = nums[i];
        // skip already eliminated numbers
        if (divider === 0) {
            continue;
        }
        for (let j = i * 2; j <= biggestNum; j += i) {
            nums[j] = 0;
        }
    }
    // create new element that just include non-zero number from the
    // nums array, or just only the primes
    const primes = [];
    for (let i = 0; i <= limit; i++) {
        if (nums[i] !== 0) {
            primes.push(nums[i]);
        }
    }
    return primes;
}
exports.default = primeGenerator;

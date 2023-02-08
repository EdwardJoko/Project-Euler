// return an array consists of prime numbers from 2 to limit
function primeGenerator(limit: number): number[] {
    if (limit <= 1) return [];

    // generate an array with element from 0 to limit
    const nums: number[] = [];
    for (let i = 0; i <= limit; i++) {
        nums.push(i);
    }

    // 1 is not prime
    nums[1] = 0;

    // eliminate non-prime numbers from the array with Eratosthenes' sieve
    for (let i = 0; i * i <= limit; i++) {
        // skip already eliminated numbers
        if (nums[i] === 0) continue;

        for (let j = i * 2; j <= limit; j += i) {
            nums[j] = 0;
        }
    }

    // create new element that just include non-zero number from the
    // nums array, or just only the primes
    const primes: number[] = [];
    for (let i = 0; i <= limit; i++) {
        if (nums[i] !== 0) {
            primes.push(nums[i]);
        }
    }

    return primes;
}

export default primeGenerator;

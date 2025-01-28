# return an array of primes under the (limit+1)
def eratosthenes_sieve(limit: int):
    # create an array with element from 0 to limit
    nums = [i for i in range(0, limit + 1)]
    # 1 is not prime
    nums[1] = 0

    for i in nums:
        if i == 0:
            continue

        iterator = i * 2
        while iterator <= limit:
            nums[iterator] = 0
            iterator += i

    primes = [i for i in nums if i != 0]

    return primes

# Find the sum of all prime numbers below 2000000

from eratosthenes_sieve import eratosthenes_sieve 

def compute(limit: int) -> str:
    primes = eratosthenes_sieve(limit) 
    sum_of_primes = sum(i for i in primes)
    return str(sum_of_primes)

if __name__ == "__main__":
    limit: int = 2000000
    print(compute(limit))

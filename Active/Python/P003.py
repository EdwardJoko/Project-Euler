# Find the largest prime factor of the number 600851475143

def compute(limit: int) -> str:
    assert n >= 2

    largest_prime: int = 2;

    # i as iterator variable
    i: int = 2
    while limit > (i ** 2):
        # if limit is divisible by i, then keep divide with it
        while limit % i == 0:
            limit //= i

        i += 1

    if (limit > i):
        return str(limit)
    return str(i)

if __name__ ==  "__main__":
    limit: int = 600851475143
    print(compute(limit))

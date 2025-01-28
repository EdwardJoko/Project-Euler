# Find the largest prime factor of the number 600851475143

def compute(limit: int) -> str:
    assert limit >= 2

    # i as iterator variable
    i: int = 2
    while limit > (i * i):
        # if limit is divisible by 'i', then keep divide 'limit' with it
        while limit % i == 0:
            limit //= i

        i += 1

    return str(limit) if (limit > i) else str(i)


if __name__ == "__main__":
    limit: int = 600851475143
    print(compute(limit))

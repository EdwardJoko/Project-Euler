# Find the sum of the even-valued of Fibonacci sequence
# whose values do not exceed four million

def compute(limit: int) -> str:
    assert limit >= 2

    # fib_m == fib_(n-1)
    fib_m: int = 1
    fib_n: int = 2

    even_sum: int = 0

    while fib_n < limit:
        if fib_n % 2 == 0:
            even_sum += fib_n

        fib_m, fib_n = fib_n, (fib_m + fib_n)

    return str(even_sum)

if __name__ ==  "__main__":
    limit: int = 4000000  # 4_000_000
    print(compute(limit))

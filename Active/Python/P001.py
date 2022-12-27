# Find the sum of all the multiples of 3 or 5 below 1000

def compute(limit: int) -> str:
    ans = sum(x for x in range(limit) if (x % 3 == 0 or x % 5 == 0))
    return str(ans)

if __name__ ==  "__main__":
    limit: int = 1000
    print(compute(limit))

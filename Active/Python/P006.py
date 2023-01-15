# Find the difference between the sum of the squares of the
# first one hundred natural limitbers and the square of the sum

def compute(limit: int) -> str:
    sum_of_squares = sum(i * i for i in range(1, limit + 1))

    sum_of_n_integer = sum(i for i in range(1, limit + 1))
    square_of_sum = sum_of_n_integer ** 2

    return str(square_of_sum - sum_of_squares)

if __name__ ==  "__main__":
    limit: int = 100 # 4_000_000
    print(compute(limit))

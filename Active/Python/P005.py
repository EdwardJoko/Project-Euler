# Find the Smallest positive number that is evenly divisible by
# all of the numbers from 1 to 20

def compute(limit: int) -> str:
    array = [i for i in range(1, limit + 1)]

    # Eliminate factors that have multipliers above itself and within the limit
    i = 0
    while i < limit:
        j = i + 1
        while j < limit:
            if array[j] % array[i] == 0:
                array[i] = 0
                break;
            j += 1
        i += 1

    # Multiplying non-zero numbers in the array
    num: int = 1
    for i in array:
        if i != 0:
            num *= i

    # Brute force
    i = 2
    while i <= limit:
        # the loop is because in case num is divisible by i multiple times
        while num % i == 0:
            identifier = 0
            # num_test is candidate of smallest positive number
            num_test = num // i
            # j is iterator
            j = 2

            while j <= limit:
                if num_test % j == 0:
                    identifier += 1
                    j += 1
                else: break

            if identifier == (limit - 1):
                num = num_test
            else: break
        i += 1

    return str(num)


if __name__ == "__main__":
    limit: int = 20
    print(compute(limit))


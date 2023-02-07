# Find the product of a Pythagorean triplet that the sum is 1000 

def compute(sum_of_pythagorean: int) -> str:
    a: int = sum_of_pythagorean - 2
    while a > 1:
        b: int = 1
        while b <= (sum_of_pythagorean - a) // 2:
            c: int = sum_of_pythagorean - a - b

            if (a * a) == (b * b) + (c * c):
                return str(a * b * c)

            b += 1
        a -= 1

if __name__ == "__main__":
    sum: int = 1000
    print(compute(sum))

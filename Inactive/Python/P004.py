# Find the largest palindrome made from the product of two 3-digit numbers

def isPalindrome(num: int) -> bool:
    num_str = str(num)
    num_len = len(num_str)

    # i as iterator variable
    i: int = 0
    while (i < num_len//2):
        if num_str[i] != num_str[-(1 + i)]:
            return False
        i += 1
    return True


def max_num_gen(digit: int) -> int:
    """ return the biggest number of n-digit numbers """
    return int("9" * digit)


def min_num_gen(digit: int) -> int:
    """ return the smallest number of n-digit numbers """
    return int("9" * (digit - 1)) + 1


def compute(digit: int) -> str:
    max_num: int = max_num_gen(digit)
    max_product: int = max_num * max_num

    while max_product > 0:
        if isPalindrome(max_product):
            divider = max_num
            bottom_limit = min_num_gen(digit)

            while divider >= bottom_limit:
                if max_product % divider == 0 and max_product/divider <= max_num:
                    print(f"{divider}  {int(max_product/divider)}")
                    return str(max_product)
                divider -= 1

        max_product -= 1

    return "Couldn't find the answer."


if __name__ == "__main__":
    digit: int = 3
    print(compute(digit))

# Find the 10001st prime number

from is_prime import is_prime 

def compute(nth: int) -> str:
    prime_th: int = 0
    # iterator variable
    i: int = 1

    while prime_th != nth:
        i += 1

        if is_prime(i):
            prime_th += 1

    return i

if __name__ ==  "__main__":
    nth: int = 10001
    print(compute(nth))

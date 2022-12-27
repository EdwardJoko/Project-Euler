import isPrime from "./isPrime";

test("Test if a number is prime", () => {
    expect(isPrime(1)).toEqual(false);
    expect(isPrime(2)).toEqual(true);
    expect(isPrime(3)).toEqual(true);
    expect(isPrime(5)).toEqual(true);
    expect(isPrime(21)).toEqual(false);
    expect(isPrime(25)).toEqual(false);
    expect(isPrime(100)).toEqual(false);
    expect(isPrime(151)).toEqual(true);
    expect(isPrime(-1)).toEqual(false);
});

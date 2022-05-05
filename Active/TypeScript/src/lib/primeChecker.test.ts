import primeChecker from "./primeChecker";

test("Test if a number is prime", () => {
    expect(primeChecker(1)).toEqual(false);
    expect(primeChecker(2)).toEqual(true);
    expect(primeChecker(3)).toEqual(true);
    expect(primeChecker(5)).toEqual(true);
    expect(primeChecker(21)).toEqual(false);
    expect(primeChecker(100)).toEqual(false);
    expect(primeChecker(151)).toEqual(true);
    expect(primeChecker(-1)).toEqual(false);
});

import primeGenerator from "./eratosthenesSieve";

test("Prime generator", () => {
    expect(primeGenerator(2)).toEqual([2]);
    expect(primeGenerator(3)).toEqual([2, 3]);
    expect(primeGenerator(10)).toEqual([2, 3, 5, 7]);
    expect(primeGenerator(11)).toEqual([2, 3, 5, 7, 11]);
    let array_1 = [2,  3,  5,  7, 11, 13, 17, 19, 23, 29]
    expect(primeGenerator(30)).toEqual(array_1);
});

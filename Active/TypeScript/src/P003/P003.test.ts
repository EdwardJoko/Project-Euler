import { compute003 } from "./P003";

test("The largest prime factor of 600851475143", () => {
    expect(compute003(2)).toEqual(2);
    expect(compute003(4)).toEqual(2);
    expect(compute003(10)).toEqual(5);
    expect(compute003(600851475143)).toEqual(6857);
});

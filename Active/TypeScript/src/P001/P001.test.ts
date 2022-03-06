import { compute001 } from "./P001";

test("Sum of multiple of 3 or 5 below 1000", () => {
    expect(compute001(3)).toEqual(0);
    expect(compute001(5)).toEqual(3);
    expect(compute001(10)).toEqual(23);
    expect(compute001(1000)).toEqual(233168);
});

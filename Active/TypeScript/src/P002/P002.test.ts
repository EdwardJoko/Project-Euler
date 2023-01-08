import { compute002 } from "./P002";

test("Sum of even Fibonacci number under 4000000", () => {
    expect(compute002(2)).toEqual(0);
    expect(compute002(3)).toEqual(2);
    expect(compute002(10)).toEqual(10);
    expect(compute002(4000000)).toEqual(4613732);
});

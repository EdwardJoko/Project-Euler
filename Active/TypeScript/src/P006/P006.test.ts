
import { compute006 } from "./P006";

test("The difference between sum of the squares and the square of the sum from 1 to n", () => {
    expect( compute006(0)   ).toEqual(0);
    expect( compute006(1)   ).toEqual(0);
    expect( compute006(2)   ).toEqual(4);
    expect( compute006(3)   ).toEqual(22);
    expect( compute006(10)  ).toEqual(2640);
    expect( compute006(100) ).toEqual(25164150);
});

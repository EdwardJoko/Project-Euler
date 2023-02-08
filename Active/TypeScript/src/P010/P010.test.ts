import { compute010 } from "./P010";

test("Sum of all prime numbers below 2000000", () => {
    expect( compute010(2)       ).toEqual(0);
    expect( compute010(3)       ).toEqual(2);
    expect( compute010(10)      ).toEqual(17);
    expect( compute010(2000000) ).toEqual(142913828922);
});

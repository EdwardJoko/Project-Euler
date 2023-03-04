import { compute011 } from "./P011";

test("Greatest product of four adjacent numbers", () => {
    expect( compute011(0) ).toEqual(1); // because tempProduct init value is 1, not 0
    expect( compute011(1) ).toEqual(99);
    expect( compute011(4) ).toEqual(70600674);
});

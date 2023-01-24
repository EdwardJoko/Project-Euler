import { compute007 } from "./P007";

test("The n-th prime", () => {
    expect( compute007(1)    ).toEqual(2);
    expect( compute007(2)     ).toEqual(3);
    expect( compute007(3)     ).toEqual(5);
    expect( compute007(4)     ).toEqual(7);
    expect( compute007(5)     ).toEqual(11);
    expect( compute007(6)     ).toEqual(13);
    expect( compute007(10001) ).toEqual(104743);
});

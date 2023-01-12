import { compute005 } from "./P005";

test("Smallest positive number evenly divisible by 1 to n", () => {
    expect( compute005(10) ).toEqual(2520);
    expect( compute005(20) ).toEqual(232792560);
});

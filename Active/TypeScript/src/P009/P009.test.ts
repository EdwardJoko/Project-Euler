import { compute009 } from "./P009";

test("Find the product of a Pythagorean triplet", () => {
    expect( compute009(1000) ).toEqual(31875000);
    expect( compute009(12)   ).toEqual(60);
});

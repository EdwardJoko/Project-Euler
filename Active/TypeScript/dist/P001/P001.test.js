"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const P001_1 = require("./P001");
test("Sum of multiple of 3 or 5 below 1000", () => {
    expect((0, P001_1.compute001)(3)).toEqual(0);
    expect((0, P001_1.compute001)(5)).toEqual(3);
    expect((0, P001_1.compute001)(10)).toEqual(23);
    expect((0, P001_1.compute001)(1000)).toEqual(233168);
});

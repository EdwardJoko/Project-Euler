"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const P002_1 = require("./P002");
test("Sum of even Fibonacci number under 4000000", () => {
    expect((0, P002_1.compute002)(2)).toEqual(0);
    expect((0, P002_1.compute002)(10)).toEqual(10);
    expect((0, P002_1.compute002)(4000000)).toEqual(4613732);
});

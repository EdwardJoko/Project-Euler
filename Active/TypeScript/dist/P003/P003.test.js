"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const P003_1 = require("./P003");
test("The largest prime factor of 600851475143", () => {
    expect((0, P003_1.compute003)(2)).toEqual(2);
    expect((0, P003_1.compute003)(4)).toEqual(2);
    expect((0, P003_1.compute003)(10)).toEqual(5);
    expect((0, P003_1.compute003)(600851475143)).toEqual(6857);
});

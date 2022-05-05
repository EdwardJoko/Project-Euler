"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const primeChecker_1 = __importDefault(require("./primeChecker"));
test("Test if a number is prime", () => {
    expect((0, primeChecker_1.default)(1)).toEqual(false);
    expect((0, primeChecker_1.default)(2)).toEqual(true);
    expect((0, primeChecker_1.default)(3)).toEqual(true);
    expect((0, primeChecker_1.default)(5)).toEqual(true);
    expect((0, primeChecker_1.default)(21)).toEqual(false);
    expect((0, primeChecker_1.default)(100)).toEqual(false);
    expect((0, primeChecker_1.default)(151)).toEqual(true);
    expect((0, primeChecker_1.default)(-1)).toEqual(false);
});

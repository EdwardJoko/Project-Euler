"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const eratosthenesSieve_1 = __importDefault(require("./eratosthenesSieve"));
test("Prime generator", () => {
    expect((0, eratosthenesSieve_1.default)(2)).toEqual([2]);
    expect((0, eratosthenesSieve_1.default)(3)).toEqual([2, 3]);
    expect((0, eratosthenesSieve_1.default)(10)).toEqual([2, 3, 5, 7]);
    expect((0, eratosthenesSieve_1.default)(11)).toEqual([2, 3, 5, 7, 11]);
    let array_1 = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29];
    expect((0, eratosthenesSieve_1.default)(30)).toEqual(array_1);
});

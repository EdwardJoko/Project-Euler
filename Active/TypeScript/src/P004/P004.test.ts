
import { compute004, isPalindrome } from "./P004";

test("Palindrome of the product of two n-digit numbers", () => {
    expect(compute004(2)).toEqual(9009);
    expect(compute004(3)).toEqual(906609);
});

test("isPalindrome function", () => {
    expect(isPalindrome(101)      ).toBe(true);
    expect(isPalindrome(1001)     ).toBe(true);
    expect(isPalindrome(102)      ).toBe(false);
    expect(isPalindrome(3033)     ).toBe(false);
    expect(isPalindrome(10001)    ).toBe(true);
    expect(isPalindrome(1005001)  ).toBe(true);
    expect(isPalindrome(10054001) ).toBe(false);
    expect(isPalindrome(10055001) ).toBe(true);
});

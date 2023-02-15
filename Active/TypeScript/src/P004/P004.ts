// Project Euler
// Problem 4: The largest palindrome made from the product of two 3-digit numbers

export function isPalindrome(num: number): boolean {
    const numStr: string = String(num);
    const numLen: number = numStr.length;

    let i = 0;
    while (i < Math.floor(numLen / 2)) {
        if (numStr[i] !== numStr[numLen - 1 -i]) {
            return false;
        }
        i += 1;
    }

    return true;
}

// generate the maximum number of n digit. if digit is 3, than the maxNum is 999
function maxNumGenerator(digit: number): number {
    let maxNum: string = "";
    for (let i = 0; i < digit; i++) maxNum += "9";
    return Number(maxNum);
}

// generate the minimum number of n digit. if digit is 3, than the maxNum is 100
function minNumGenerator(digit: number): number {
    let minNum: string = "";
    for (let i = 0; i < (digit - 1); i++) minNum += "9";
    return Number(minNum) + 1;
}

export function compute004(digit: number): number {
    const maxNum: number = maxNumGenerator(digit);
    let maxProduct: number = maxNum * maxNum;

    while (maxProduct > 0) {
        if (isPalindrome(maxProduct)) {
            let divider: number = maxNum;
            let minNum: number = minNumGenerator(digit);

            while (divider >= minNum) {
                if (maxProduct % divider === 0 && maxProduct/divider <= maxNum) {
                    return maxProduct;
                }
                divider -= 1;
            }
        }
        maxProduct -= 1;
    }
    return -1;
}

function run004(): void {
    const digit: number = 3;
    console.log(compute004(digit).toString());
}

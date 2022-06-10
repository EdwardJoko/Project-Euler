// Project Euler
// Problem 3: The largest prime factor of 600851475143

// we divide (or limit) the argument with every factor it has star-
// ting with 2, then it will leaves two biggest factors that the
// number has
export function compute003(limit: number): number {
    let i: number = 2;
    let factor: number = i;

    while (i * i <= limit) {
        if (limit % i != 0) {
            i += 1;
            continue;
        }

        while (limit % i == 0) {
            limit /= i;
        }

        factor = i;
    }

    if (factor > limit) {
        return factor;
    }
    return limit;
}

function run003(): void {
    const limit: number = 600851475143;
    console.log(compute003(limit).toString());
}

// run003();

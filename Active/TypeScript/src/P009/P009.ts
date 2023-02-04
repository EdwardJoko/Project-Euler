// Project Euler
// Problem 9: a, b, c, are a Pythagorean triplet. If a + b + c = 100
//            Find the product of abc

export function compute009(sum: number): number {
    for (let a = sum - 2; a > 1; a--) {
        for (let b = 1; b <= (sum - a)/2; b++) {
            let c: number = sum - a - b;

            if ((a * a) === (b * b) + (c * c)) {
                return a * b * c;
            }
        }
    }

    return 0;
}

function run009(): void {
    const sum: number = 1000;
    console.log(compute009(sum).toString());
}

// run009();

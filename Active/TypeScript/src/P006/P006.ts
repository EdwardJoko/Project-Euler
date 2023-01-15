// Project Euler
// Problem 6: The difference between the sum of the squares of the
//            first one hundred natural limitbers and the square of the sum

export function compute006(limit: number): number {
    let sumOfSquares: number = 0;

    for (let i = 1; i <= limit; i++) {
        sumOfSquares += (i * i);
    }

    let sumOfNInteger: number = 0;

    for (let i = 1; i <= limit; i++) {
        sumOfNInteger += i;
    }

    let squareOfSum: number = sumOfNInteger * sumOfNInteger;


    return (squareOfSum - sumOfSquares);
}

function run006(): void {
    const limit: number = 100;
    console.log(compute006(limit));
}

// run006();

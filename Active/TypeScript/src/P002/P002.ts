// Project Euler                                       
// Problem 2: The sum of even Fibonacci number under 4000000

export function compute002(limit: number): number {
    let sum: number = 0;

    let x: number = 1; // first digit of Fibonacci
    let y: number = 1; // second digit of Fibonacci
    let temp: number = 0; // temp variable to store value

    while (y < limit) {
        if (y % 2 == 0) {
            sum += y;
        }

        temp = x;       // store the first digit in temp
        x = y;          // store the second digit in x
        y = temp + x;   // derivate the third digit by adding temp and x
    }

    return sum;
}

function run002(): void {
    const limit: number = 4000000;
    console.log(compute002(limit).toString());
}

run002();

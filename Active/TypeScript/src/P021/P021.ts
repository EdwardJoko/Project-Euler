// Project Euler
// Problem 21: The sum of all the amicable numbers under 10000

interface factorsSum {
    [num: string]: number;
}

function sumOfFactors(limit: number): factorsSum {
    const allFactors: factorsSum = {};

    for (let i = 2; i < limit; i++) {
        let sum: number = 1; // because we start the factor from 2

        for (let factor = 2; factor*factor <= i; factor++) {
            if (i % factor === 0) {
                sum += factor;
                // in case i is quadratic number, so that i and i/factor
                // are the same number. so we don't add it twice
                sum += factor !== i/factor ? i/factor : 0;
            }
        }

        allFactors[i] = sum;
    }

    return allFactors;
}

export function compute021(limit: number): number {
    let sumOfAmicable: number = 0

    const allFactors: factorsSum = sumOfFactors(limit);

    for (let i in allFactors) {
        const sumOfFactors = allFactors[i];

        if (
            allFactors[sumOfFactors] &&
            allFactors[sumOfFactors] === Number(i) &&
            // because there are numbers that the sum of the factors
            // are equal with the number itself, i.e. 6 = [1,2,3]
            sumOfFactors !== Number(i)
        ) {
            sumOfAmicable += Number(i) + sumOfFactors; 
            // change it to 0 so we don't use it again in the next iteration 
            allFactors[sumOfFactors] = 0;
        }
    }

    return sumOfAmicable;
}

function run021(): void {
    const limit: number = 10000;
    console.log(compute021(limit).toString());
}

run021();

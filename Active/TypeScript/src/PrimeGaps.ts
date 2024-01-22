import primeGenerator from "./lib/eratosthenesSieve";

function main() {
    const primes = primeGenerator(100);
    let diff: number[] = [];

    const length = primes.length;
    for (let i = 0; i < length - 1; i++) {
        diff.push(primes[i + 1] - primes[i]);
    }

    let sum = 0;
    for (let i = 0; i < length - 1; i++) sum += diff[i];

    const avg = sum / (length - 1);
    console.log({ avg });
}

main();

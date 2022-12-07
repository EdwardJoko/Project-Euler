function primeChecker(num: number): boolean {
    if (num === 1 || num <= 0) {
        return false;
    }

    for (let i = 2; (i * i) <= num; i++) {
        if (num % i === 0) {
            return false;
        }
    }

    return true;
}

export default primeChecker;

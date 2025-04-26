function solveRiverCrossing(n, m, d, platforms) {
    let totalPlatformLength = platforms.reduce((sum, length) => sum + length, 0);
    let remainingSpace = n - totalPlatformLength;

    let result = Array(n).fill(0);
    let currentPosition = 0;

    for (let i = 0; i < m; i++) {
        let maxJump = Math.min(remainingSpace, d - 1);
        currentPosition += maxJump;
        remainingSpace -= maxJump;

        for (let j = 0; j < platforms[i]; j++) {
            result[currentPosition] = i + 1;
            currentPosition++;
        }
    }

    if (currentPosition + d - 1 < n) {
        console.log("NO");
    } else {
        console.log("YES");
        console.log(result.join(" "));
    }
}

// Example usage:
const input1 = {
    n: 7,
    m: 3,
    d: 2,
    platforms: [1, 2, 1]
};
solveRiverCrossing(input1.n, input1.m, input1.d, input1.platforms);

const input2 = {
    n: 10,
    m: 1,
    d: 11,
    platforms: [1]
};
solveRiverCrossing(input2.n, input2.m, input2.d, input2.platforms);

const input3 = {
    n: 10,
    m: 1,
    d: 5,
    platforms: [2]
};
solveRiverCrossing(input3.n, input3.m, input3.d, input3.platforms);
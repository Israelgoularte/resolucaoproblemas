function lexicographicallyMinimumStrings(testCases) {
    let results = [];

    for (let t = 0; t < testCases.length; t++) {
        let { n, k, binaryString } = testCases[t];
        let arr = binaryString.split('');
        let moves = k;

        for (let i = 0; i < n && moves > 0; i++) {
            if (arr[i] === '0') {
                let j = i;
                while (j > 0 && arr[j - 1] === '1' && moves > 0) {
                    [arr[j], arr[j - 1]] = [arr[j - 1], arr[j]];
                    j--;
                    moves--;
                }
            }
        }

        results.push(arr.join(''));
    }

    return results;
}

// Input parsing and execution
function main(input) {
    const lines = input.trim().split('\n');
    const q = parseInt(lines[0], 10);
    let testCases = [];
    let index = 1;

    for (let i = 0; i < q; i++) {
        const [n, k] = lines[index].split(' ').map(Number);
        const binaryString = lines[index + 1];
        testCases.push({ n, k, binaryString });
        index += 2;
    }

    const results = lexicographicallyMinimumStrings(testCases);
    console.log(results.join('\n'));
}

// Example usage
const input = `3
8 5
11011010
7 9
1111100
7 11
1111100`;

main(input);
const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

const input = [];
rl.on('line', (line) => {
    input.push(line.trim());
}).on('close', () => {
    const n = parseInt(input[0], 10);
    const results = [];

    for (let i = 1; i <= n; i++) {
        const [l, r] = input[i].split(' ').map(BigInt);
        let maxBits = -1;
        let result = l;

        for (let x = l; x <= r; x++) {
            const bits = x.toString(2).split('1').length - 1;
            if (bits > maxBits) {
                maxBits = bits;
                result = x;
            }
            if (bits === maxBits && x < result) {
                result = x;
            }
        }

        results.push(result.toString());
    }

    console.log(results.join('\n'));
});
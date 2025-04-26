const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let input = [];
rl.on('line', (line) => {
    input.push(line);
}).on('close', () => {
    const t = parseInt(input[0]); // Number of test cases
    let results = [];
    
    for (let testCase = 0; testCase < t; testCase++) {
        let balance = 1; // Initial balance
        let low = 0, high = 10 ** 14, M = 0;

        while (low <= high) {
            let mid = Math.floor((low + high) / 2);
            console.log(`? ${mid}`);
            process.stdout.flush();

            const response = input.shift(); // Read the response
            if (response === "Lucky!") {
                balance += mid;
                M = mid;
                low = mid + 1;
            } else if (response === "Fraudster!") {
                balance -= mid;
                high = mid - 1;
            } else if (response === "Fired!") {
                process.exit(0); // Terminate immediately
            }
        }

        results.push(`! ${M}`);
    }

    results.forEach(result => {
        console.log(result);
        process.stdout.flush();
    });
});
function solve() {
    const input = require('fs').readFileSync('/dev/stdin', 'utf8').trim().split(/\s+/);
    let t = parseInt(input[0]);
    let idx = 1;
    const output = [];

    for (let _ = 0; _ < t; _++) {
        let n = parseInt(input[idx]);
        let a = input.slice(idx + 1, idx + 1 + n).map(Number);
        idx += n + 1;

        a.reverse();
        const stack = [];

        for (let x of a) {
            stack.push(x);
            while (stack.length >= 2 && stack[stack.length - 1] === stack[stack.length - 2]) {
                let last = stack.pop();
                stack.pop();
                stack.push(last - 1);
            }
        }

        if (stack.length === 1 && stack[0] === 0) {
            output.push("YES");
        } else {
            output.push("NO");
        }
    }

    console.log(output.join('\n'));
}

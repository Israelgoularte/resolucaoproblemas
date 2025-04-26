<?php
function solve() {
    $input = fopen("php://stdin", "r");
    $q = intval(fgets($input)); // Number of test cases
    $results = [];

    while ($q--) {
        list($n, $k) = array_map('intval', explode(' ', fgets($input)));
        $s = trim(fgets($input));
        $s = str_split($s);

        $zero_positions = [];
        for ($i = 0; $i < $n; $i++) {
            if ($s[$i] === '0') {
                $zero_positions[] = $i;
            }
        }

        $current_k = $k;
        $current_index = 0;

        foreach ($zero_positions as $zero_pos) {
            $distance = $zero_pos - $current_index;
            if ($distance <= $current_k) {
                $current_k -= $distance;
                array_splice($s, $zero_pos, 1);
                array_splice($s, $current_index, 0, '0');
                $current_index++;
            } else {
                array_splice($s, $zero_pos, 1);
                array_splice($s, $zero_pos - $current_k, 0, '0');
                break;
            }
        }

        $results[] = implode('', $s);
    }

    fclose($input);
    echo implode("\n", $results) . "\n";
}

solve();
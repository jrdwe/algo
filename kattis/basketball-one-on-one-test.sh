#!/bin/bash

run_test() {
    local input=$1
    local expected_output=$2

    local output=$(echo -n "$input" | ./basketball-one-on-one.out)

    if [[ "$output" == "$expected_output" ]]; then
        echo "PASS: $input"
    else
        echo "FAIL: $input (expected '$expected_output', got '$output')"
    fi
}

g++ -std=c++17 -O2 -Wall basketball-one-on-one.cpp -o basketball-one-on-one.out

run_test "A1A2A2A2A2A2" "A"
run_test "B1B2B2B2B2B2" "B"
run_test "A2A2A2A2A2B2B2B2B2B2A2" "A"
run_test "A2A2A2A2A2B2B2B2B2B2B2" "B"
run_test "A2A2A2A2A2B2B2B2B2B2A1B2B1" "B"
run_test "A2A2A2A2A2B2B2B2B2B2B1A2A1" "A"
run_test "A2A2A2A2A1B2B2B2B2B2B2" "B"

rm ./basketball-one-on-one.out
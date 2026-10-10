#!/usr/bin/env bash
set -eu
mkdir -p build
g++ -std=c++17 -Wall -Wextra -pedantic src/main.cpp -o build/app
for input in tests/input*.txt; do
    n="${input#tests/input}"; n="${n%.txt}"
    ./build/app < "tests/input${n}.txt" > "build/actual${n}.txt"
    diff -u "tests/expected${n}.txt" "build/actual${n}.txt"
    echo "Test ${n} passed"
done
echo "All acceptance tests passed"

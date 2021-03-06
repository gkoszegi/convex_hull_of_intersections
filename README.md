# Convex Hull of Intersections

  Description of inputs/outputs, technical requirements can be found in the [Problem statement](doc/problem_statement.pdf).

  The implented algorithm for the convex hull computation is a [Graham scan](https://en.wikipedia.org/wiki/Graham_scan).

## Requirements
  - C++14 compatible compiler
  - cmake >= 3.1 and ctest
  - for script/show.py python 2.7 with matplotlib

## Compilation
```
mkdir build
cd build
cmake ..
make
```

## Use cases
  - The main binary can be found at `build/ConvexHullOfIntersections`, takes input from stdin, writes output to stdout
    and some diagnostic info to stderr.
  - Comparing the expected results on the sample input:
    Run `script/compare.sh` to plot the inputs, expected outputs (in red) and the actual outputs (in black).
  - Executing the unit tests:
    Run `build/unit_test` to get a detailed log of executed test cases and assertions.
  - Executing the performance tests:
    Run `build/performance_test` to get a detailed log of executed test cases and timing.
    - Intersection computation of 1000-3000 random lines and circles.
    - Convex hull computation of 1000-100000 random points.
    - Covex polygon area computation on 1000-100000 random points.
    - Runtime limit of 3 seconds from the Technical requirements is also checked on each test cases.
  - Executing all tests:
    Run `make test` to show only a Passed/Failed status.

## Project directories
  - `doc/`: Problem description and sample inputs.
  - `bin/`: Source of the main binary.
  - `include/`: Include files used by the binary and the unit tests.
  - `lib/`: Sources common to the binary and the unit tests.
  - `script/`: Scripts for running the binary and comparing the results with the expected output.
  - `test/`: Sources of the unit tests. No frameworks needed (was part of the Technical requirements in the Problem statement).
    `test/unit_test.{h,cpp}` contains all the common code the unit tests depend on.

# C++ Vector Off-by-One Error

This repository demonstrates a common off-by-one error in C++ when iterating through a `std::vector`.  The error arises from incorrectly handling the loop condition, leading to accessing an element beyond the vector's bounds. This can cause segmentation faults or other undefined behavior.

The `bug.cpp` file shows the erroneous code, while `bugSolution.cpp` provides the corrected version.

## How to reproduce

1. Clone the repository.
2. Compile `bug.cpp` using a C++ compiler (like g++).
3. Run the executable. Observe the error (segmentation fault).
4. Compile and run `bugSolution.cpp`. Observe the correct behavior.

## Solution
The solution involves carefully adjusting the loop condition to ensure that the index never exceeds the valid range of the vector.
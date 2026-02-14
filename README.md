
<div align="center">

<img src="https://skillicons.dev/icons?i=c&theme=dark&perline=1" alt="C" />

**Built with C**
# CSES

</div>

This repo contains personal validated answers to the CSES online platform questions about competitive programming.

## Overview

CSES is a collection of solutions to competitive programming problems from the CSES Problem Set (cses.fi). Each file contains a validated, accepted solution to a specific problem, demonstrating efficient algorithms and problem-solving techniques in C.

## How It Works

The repository contains individual C files, each solving a distinct CSES problem:

**weirdAlgorithm.c**: Solution to the Weird Algorithm problem
```c
// Implements the Collatz conjecture sequence
```

**missing.c**: Solution to the Missing Number problem
```c
// Finds the missing number in a sequence from 1 to n
```

**moves.c**: Solution to a moves-based problem
```c
// Calculates optimal moves or sequences
```

**dna.c**: Solution to a DNA sequence problem
```c
// Processes and analyzes DNA string patterns
```

### Core Functionality

1. **Competitive Programming Solutions**: Each file solves a specific algorithmic challenge
2. **Optimized Code**: Solutions are written to pass CSES time and memory constraints
3. **Standard Input/Output**: Programs read from stdin and write to stdout as per CSES format
4. **Validated Answers**: All solutions have been accepted by the CSES platform

### Problem-Solving Approach

When tackling a CSES problem:
1. Understand the problem constraints and requirements
2. Design an efficient algorithm (often O(n) or O(n log n))
3. Implement the solution in C with careful memory management
4. Test with sample inputs and edge cases
5. Submit to CSES and validate acceptance

### Key Concepts Demonstrated

- **Algorithm Design**: Efficient solutions to classic competitive programming problems
- **C Programming**: Low-level control, pointers, and memory management
- **Time Complexity**: Optimizing for speed to meet strict time limits
- **Standard I/O**: Fast input/output handling for large datasets
- **Problem Decomposition**: Breaking complex problems into manageable steps

## Installation

1. Clone the repository:
```bash
git clone https://github.com/achille010/cses.git
cd cses
```

2. Compile a solution:
```bash
gcc -o weirdAlgorithm weirdAlgorithm.c
```

3. Run the executable:
```bash
./weirdAlgorithm
```

4. Or compile with optimization flags:
```bash
gcc -O2 -o weirdAlgorithm weirdAlgorithm.c
```

## Usage Examples

### Weird Algorithm
```bash
# Input: 3
# Output: 3 10 5 16 8 4 2 1
```

### Missing Number
```bash
# Input: n=5, numbers: 1 2 4 5
# Output: 3
```

## Limitations

- Solutions are problem-specific and not generalized
- No test cases included in the repository
- Assumes familiarity with CSES problem statements
- Code is optimized for correctness and speed, not necessarily readability

This is intentionally focused on competitive programming solutions for the CSES platform.

## Requirements

- C compiler (gcc, clang, or similar)
- Basic understanding of algorithms and data structures
- Access to CSES problem set for problem statements

## Contributing

Contributions are welcome! Feel free to fork this repository and submit pull requests for improvements.

## License

MIT License - Read details from the LICENSE file

---

*Built as a collection of validated CSES competitive programming solutions*

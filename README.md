# C Array Sorting Algorithms

A modular C programming project for managing integer arrays with input validation and classical sorting algorithms.

## Features
- **Input Validation**: Ensures the array size is within a valid range (`1` to `100`).
- **Array Display**: Prints the current elements of the array clearly.
- **Bubble Sort (`Tri à bulles`)**: Sorts the array in ascending order.
- **Selection Sort (`Tri par sélection`)**: Sorts the array in ascending order.
- **Interactive Menu**: Loop-based console menu for easy testing and execution.

## Project Structure
- `tableau.h` (or header definitions): Function prototypes and declarations.
- `functions.c` / `function.c`: Implementation of input, display, and sorting functions.
- `main.c` / `body.c`: Program entry point and interactive menu.

## Compilation & Execution
Using `gcc` in a terminal:

```bash
gcc *.c -o sorting_app
./sorting_app

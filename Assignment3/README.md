# Assignment 3: Trigonometric Functions Library

---

## Overview

The project includes the following components:

- `trigonometric_functions.h`: Header file for function declarations.
- `trigonometric_functions.c`: Source file with function definitions.
- `main.c`: A test file that uses the trigonometric functions.
- `Makefile`: Used to compile the program.

## File Descriptions

### trigonometric_functions.h

The header file contains declarations for trigonometric functions that take angles in degrees and radians. It also provides a prototype for the `degree_to_radian` function after being refactored from a static to an externally linkable function.

### trigonometric_functions.c

This source file implements the functions declared in the header. It includes the `degree_to_radian` function which is used internally by the functions that take degrees as input.

### main.c

This file includes `trigonometric_functions.h` and uses its functions to calculate and display trigonometric values. It's a demonstration of how the library can be used in a program.

### Manual Compilation

to compile the program manually, you can use the following commands:

```bash
gcc -c trigonometric_functions.c -o trigonometric_functions.o
gcc Question.c trigonometric_functions.o -o Question -lm
./Question
```
This will compile `trigonometric_functions.c` into an object file, then compile main.c with the `trigonometric_functions.o` object file to create the executable main,
linking the math library with `-lm`.
Finally, running `./main` will execute the program and display the results of the trigonometric functions.

### Makefile

The `Makefile` contains rules for compiling the source files and linking them to create the final executable. It also includes a `clean` rule to remove the generated files.

## Compilation with Makefile

To compile the program, the `make` command is used:
```bash
make all
```

And to clean up the build files, you can use:

```
make clean
```

## Usage Example

After compilation, you can run the generated executable to see the trigonometric functions in action.

## Important Notes

- This code is for educational purposes.
- Understanding the code before using it is crucial.
- Copying code without learning from it is not the right approach to developing programming skills.

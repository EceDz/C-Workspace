# C Workspace

A collection of standalone C programming exercises covering strings, function decomposition, conditional dosage/geometry calculators, ASCII pattern printing, sorting, pointer arithmetic, and bitwise operations. Each numbered file (`1.c`–`10.c`) is a self-contained program with its own `main()`.

## Programs

| File | Topic | Description |
|---|---|---|
| [`1.c`](1.c) | Strings | Checks whether a string is a palindrome and trims asterisk characters from a string |
| [`2.c`](2.c) | Conditionals & functions | A tiered medication dosage calculator: computes Drug A, B, and C amounts based on patient age and gender, with each function building on the previous one's result |
| [`3.c`](3.c) | Conditionals & functions | Computes the area of a circle, rectangle, or triangle based on a user-selected shape character, with input validation via a `while` loop |
| [`4.c`](4.c) | Loops & patterns | Prints a solid square, right triangle, or numeric pyramid pattern of `*`/digits based on user choice |
| [`5.c`](5.c) | Sorting | Bubble-sorts an integer array and finds the second-largest element |
| [`6.c`](6.c) | Pointers | Demonstrates: printing size/value/address of 5 data types, swapping variable values, swapping pointer addresses (vs. swapping the pointed-to values), and traversing an array via pointer arithmetic instead of indexing |
| [`7.c`](7.c) | Loops & parity | Given two integers `a < b`, prints all values from `a` to `b` in steps of 2 if both are even; if both are odd, prints from `b` down to `a` in steps of 2; otherwise prompts the user to make both the same parity |
| [`8.c`](8.c) | Pointer arithmetic | Given an array with a run of zeros in the middle, finds the boundaries via pointer walking and prints the two non-zero segments in reverse order |
| [`9.c`](9.c) | Pointers | Same pointer demonstrations as `6.c`: sizes/addresses of data types, value swapping, pointer swapping, and array traversal via pointer arithmetic |
| [`10.c`](10.c) | Bitwise operations | Implements AND/OR/XOR/NOT, left/right shift, counting set bits, an odd/even check via bit-shifting, and a "reverse last byte" bit-shuffle, each demoed in `main` |

## Requirements

- GCC (or any standard C compiler)

## Building & Running

Each file is independent:

```bash
gcc -o program N.c
./program
```

## License

This project is licensed under the MIT License. See [LICENSE](LICENSE) for details.

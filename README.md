*This project has been created as part of the 42 curriculum by <ktaher>.*

## Description
ft_printf is a custom implementation of the standard C printf function. The primary goal of this project is to gain a deep understanding of variadic functions, format specifier parsing, and low level output management. This implementation supports a core set of conversions, ensuring robust handling of data types and consistent return values compared to the standard library.

## Supported Conversions
- %c: Prints a single character.
- %s: Prints a string.
- %p: Prints a pointer address in hexadecimal format.
- %d / %i: Prints a signed decimal integer.
- %u: Prints an unsigned decimal integer.
- %x / %X: Prints a hexadecimal number (lowercase/uppercase).
- %%: Prints a percent sign.

## Instructions
### Compilation
To compile the library, navigate to the project root and run:
    make
This will generate the static library file libftprintf.a.

### Usage
To use ft_printf in your own projects, include the header file and link the library during compilation:
    cc main.c -L. -lftprintf -o your_program

## Technical Choices
- Recursion for Integer Conversion: I utilized a recursive helper function for ft_putnbr and ft_putnbr_base. This approach simplifies the handling of integer limits, particularly INT_MIN, by converting the input to a (long long) on 32-bit based machines and (long) for unix 64-bit based machines to prevent overflow during sign inversion.
- uintptr_t for Pointers: I used uintptr_t for the %p specifier. This ensures that memory addresses are handled with the correct unsigned integer width, guaranteeing portability across different architectures.
- Modularity: The project logic is separated into helper functions (ft_putchar, ft_putstr, etc.) to adhere a clean, readable codebase.

## Resources
- GNU C Library Variadic Functions Documentation
- Man page for printf(3)
- AI Usage: (Gemini Pro) was utilized during this project as a conceptual collaborator to troubleshoot edge case formatting, explain the behavior of va_arg macro expansion, and provide guidance on resolving environment specific compiler discrepancies.
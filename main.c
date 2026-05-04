#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
int main(void)
{
    // %c: Character
    ft_printf("--- Testing %%c ---\n");
    ft_printf("Char: %c\n", 'A');

    // %s: String
    ft_printf("\n--- Testing %%s ---\n");
    ft_printf("String: %s\n", "Hello, 42!");
    ft_printf("Empty: %s\n", "");

    // %p: Pointer
    ft_printf("\n--- Testing %%p ---\n");
    int n = 42;
    ft_printf("Pointer: %p\n", &n);
    ft_printf("NULL Pointer: %p\n", (void *)0);

    // %d: Signed decimal integer
    ft_printf("\n--- Testing %%d ---\n");
    ft_printf("Positive: %d\n", 12345);
    ft_printf("Negative: %d\n", -12345);
    ft_printf("Max Int: %d\n", 2147483647);
    ft_printf("Min Int: %d\n", -2147483648);

    // %i: Integer (same as %d)
    ft_printf("\n--- Testing %%i ---\n");
    ft_printf("Integer: %i\n", 42);

    // %u: Unsigned decimal
    ft_printf("\n--- Testing %%u ---\n");
    ft_printf("Unsigned: %u\n", 4294967295U);
    ft_printf("Unsigned 0: %u\n", 0);

    // %x: Hexadecimal (lowercase)
    ft_printf("\n--- Testing %%x ---\n");
    ft_printf("Hex low: %x\n", 255);
    ft_printf("Zero hex: %x\n", 0);

    // %X: Hexadecimal (uppercase)
    ft_printf("\n--- Testing %%X ---\n");
    ft_printf("Hex high: %X\n", 255);

    // %%: Percent sign
    ft_printf("\n--- Testing %%%% ---\n");
    ft_printf("Percent: %%\n");
    ft_printf("Mixed: 100%% complete\n");

	ft_printf("Multiple: %d %s %x\n", 10, "42", 255);

    return (0);
}
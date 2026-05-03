#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
int main(void)
{
	int ret1;
	int ret2;
	int x = 42;
	char c = 'A';
	char *str = "Hello";
	char *empty = "";
	char *nullstr = NULL;
	unsigned int umax = UINT_MAX;

	printf("========== TEST 1 : SIMPLE STRING ==========\n");
	ret1 = printf("printf   : Hello World\n");
	ret2 = ft_printf("ft_printf: Hello World\n");
	printf("RET printf=%d | ft_printf=%d\n\n", ret1, ret2);

	printf("========== TEST 2 : CHAR ==========\n");
	ret1 = printf("printf   : %c %c %c\n", 'a', 'Z', 48);
	ret2 = ft_printf("ft_printf: %c %c %c\n", 'a', 'Z', 48);
	printf("RET printf=%d | ft_printf=%d\n\n", ret1, ret2);

	printf("========== TEST 3 : STRING ==========\n");
	ret1 = printf("printf   : %s %s %s\n", str, empty, "42");
	ret2 = ft_printf("ft_printf: %s %s %s\n", str, empty, "42");
	printf("RET printf=%d | ft_printf=%d\n\n", ret1, ret2);

	printf("========== TEST 4 : NULL STRING ==========\n");
	ret1 = printf("printf   : %s\n", nullstr);
	ret2 = ft_printf("ft_printf: %s\n", nullstr);
	printf("RET printf=%d | ft_printf=%d\n\n", ret1, ret2);

	printf("========== TEST 5 : SIGNED INT ==========\n");
	ret1 = printf("printf   : %d %d %d %d %d\n", 0, 1, -1, INT_MAX, INT_MIN);
	ret2 = ft_printf("ft_printf: %d %d %d %d %d\n", 0, 1, -1, INT_MAX, INT_MIN);
	printf("RET printf=%d | ft_printf=%d\n\n", ret1, ret2);

	printf("========== TEST 6 : %%i ==========\n");
	ret1 = printf("printf   : %i %i %i\n", -42, 42, INT_MIN);
	ret2 = ft_printf("ft_printf: %i %i %i\n", -42, 42, INT_MIN);
	printf("RET printf=%d | ft_printf=%d\n\n", ret1, ret2);

	printf("========== TEST 7 : UNSIGNED ==========\n");
	ret1 = printf("printf   : %u %u %u\n", 0, 42, umax);
	ret2 = ft_printf("ft_printf: %u %u %u\n", 0, 42, umax);
	printf("RET printf=%d | ft_printf=%d\n\n", ret1, ret2);

	printf("========== TEST 8 : HEX LOWER ==========\n");
	ret1 = printf("printf   : %x %x %x\n", 0, 255, umax);
	ret2 = ft_printf("ft_printf: %x %x %x\n", 0, 255, umax);
	printf("RET printf=%d | ft_printf=%d\n\n", ret1, ret2);

	printf("========== TEST 9 : HEX UPPER ==========\n");
	ret1 = printf("printf   : %X %X %X\n", 0, 255, umax);
	ret2 = ft_printf("ft_printf: %X %X %X\n", 0, 255, umax);
	printf("RET printf=%d | ft_printf=%d\n\n", ret1, ret2);

	printf("========== TEST 10 : POINTER ==========\n");
	ret1 = printf("printf   : %p %p %p\n", &x, str, NULL);
	ret2 = ft_printf("ft_printf: %p %p %p\n", &x, str, NULL);
	printf("RET printf=%d | ft_printf=%d\n\n", ret1, ret2);

	printf("========== TEST 11 : MIXED ==========\n");
	ret1 = printf("printf   : %c %s %d %u %x %X %p %%\n",
		c, str, -42, 42, 255, 255, &x);
	ret2 = ft_printf("ft_printf: %c %s %d %u %x %X %p %%\n",
		c, str, -42, 42, 255, 255, &x);
	printf("RET printf=%d | ft_printf=%d\n\n", ret1, ret2);

	printf("========== TEST 12 : MANY %% ==========\n");
	ret1 = printf("printf   : %%%%%%%%\n");
	ret2 = ft_printf("ft_printf: %%%%%%%%\n");
	printf("RET printf=%d | ft_printf=%d\n\n", ret1, ret2);

	printf("========== TEST 14 : ONLY %% ==========\n");
	ret2 = ft_printf("%");
	printf("\nRET ft_printf=%d (undefined test)\n\n", ret2);

	printf("========== TEST 15 : STRESS ==========\n");
	ret2 = ft_printf("%d%d%d%d%d%d%d%d%d%d\n",
		1,2,3,4,5,6,7,8,9,10);
	printf("RET ft_printf=%d\n\n", ret2);
    // 1. Double % inside a string: "%%%d"
// printf should print "%123"
ft_printf("Should be %%123: %%%d\n", 123);

// 2. Trailing % at the end of the string
// This is undefined behavior, but it's good to ensure it doesn't SEGFAULT
ft_printf("Testing trailing %%: %");

// 3. Very long strings
// Make sure your ft_putstr handles strings much larger than the buffer size
char long_str[1000];
for(int i = 0; i < 999; i++) long_str[i] = 'a';
long_str[999] = '\0';
ft_printf("Testing long string: %s\n", long_str);

// 4. Multiple empty specifiers (if your logic allows)
ft_printf("Testing empty specifiers: %d%s%c\n", 0, "", ' ');

	return 0;
}
#include <limits.h>

void    test(int a, int b)
{
    if (a != b)
        exit(1);
}

int main(void)
{
	int r1;
    int r2;

	printf("===== TESTING %%c =====\n");
	r1 =    printf("printf: [%c]\n", 'A');
	r2 = ft_printf("printf: [%c]\n", 'A');
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	r1 =    printf("printf: [%c %c %c]\n", '0', '\0', 'Z');
	r2 = ft_printf("printf: [%c %c %c]\n", '0', '\0', 'Z');
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== TESTING %%s =====\n");
	r1 =    printf("printf: [%s]\n", "Hello world!");
	r2 = ft_printf("printf: [%s]\n", "Hello world!");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	r1 =    printf("printf: [%s]\n", "");
	r2 = ft_printf("printf: [%s]\n", "");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	r1 =    printf("printf: [%s]\n", (char *)0);
	r2 = ft_printf("printf: [%s]\n", (char *)0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== TESTING %%i / %%d =====\n");
	int	i578 = 26525424;
	r1 =    printf("printf: [%i]\n", i578);
	r2 = ft_printf("printf: [%i]\n", i578);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== TESTING %%i / %%d =====\n");
	i578 = 0;
	r1 =    printf("printf: [%i]\n", i578);
	r2 = ft_printf("printf: [%i]\n", i578);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);


	printf("===== TESTING %%x / %%X =====\n");
	i578 = 0;
	r1 =    printf("printf: [%x]\n", i578);
	r2 = ft_printf("printf: [%x]\n", i578);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== TESTING %%x / %%X =====\n");
	i578 = 0;
	r1 =    printf("printf: [%X]\n", i578);
	r2 = ft_printf("printf: [%X]\n", i578);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== TESTING %%x / %%X =====\n");
	i578 = -255;
	r1 =    printf("printf: [%X]\n", i578);
	r2 = ft_printf("printf: [%X]\n", i578);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);


	printf("===== TESTING %%p =====\n");
	void *ptr = &r1;
	r1 =    printf("printf: [%p]\n", ptr);
	r2 = ft_printf("printf: [%p]\n", ptr);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	ptr = 0;
	r1 =    printf("printf: [%p]\n", ptr);
	r2 = ft_printf("printf: [%p]\n", ptr);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== TESTING %%d / %%i =====\n");
	r1 =    printf("printf: [%d]\n", 42);
	r2 = ft_printf("printf: [%d]\n", 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	r1 =    printf("printf: [%i]\n", -42);
	r2 = ft_printf("printf: [%i]\n", -42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	r1 =    printf("printf: [%d]\n", INT_MAX);
	r2 = ft_printf("printf: [%d]\n", INT_MAX);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	r1 =    printf("printf: [%d]\n", INT_MIN);
	r2 = ft_printf("printf: [%d]\n", INT_MIN);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== TESTING %%u =====\n");
	r1 =    printf("printf: [%u]\n", 0);
	r2 = ft_printf("printf: [%u]\n", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	r1 =    printf("printf: [%u]\n", UINT_MAX);
	r2 = ft_printf("printf: [%u]\n", UINT_MAX);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== TESTING %%x / %%X =====\n");
	r1 =    printf("printf: [%x]\n", 3735928559u);
	r2 = ft_printf("printf: [%x]\n", 3735928559u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	r1 =    printf("printf: [%X]\n", 3735928559u);
	r2 = ft_printf("printf: [%X]\n", 3735928559u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	r1 =    printf("printf: [%x]\n", 0);
	r2 = ft_printf("printf: [%x]\n", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== TESTING %%%% =====\n");
	r1 =    printf("printf: [%%]\n");
	r2 = ft_printf("printf: [%%]\n");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== COMBINED TESTS =====\n");
	r1 =    printf("printf: Char:%c | Str:%s | Ptr:%p | Int:%d | Unsigned:%u | Hex:%x | HEX:%X | %%\n",
				   'A', "42", &r1, -42, 42u, 255, 255);
	r2 = ft_printf("printf: Char:%c | Str:%s | Ptr:%p | Int:%d | Unsigned:%u | Hex:%x | HEX:%X | %%\n",
				   'A', "42", &r1, -42, 42u, 255, 255);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== CUSTOM TESTS =====\n");
	r1 =    printf("%x %X negative\n", -1 -5945415416);
	r2 = ft_printf("%x %X negative\n", -1 -5945415416);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== NEGATIVE TESTS =====\n");
	r1 =    printf("all %c %p %d %i %u %%\n", -254, -254, -254, -254, -254);
	r2 = ft_printf("all %c %p %d %i %u %%\n", -254, -254, -254, -254, -254);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== NULL TESTS =====\n");
	r1 =    printf("hex %x %X\n", 0, 0);
	r2 = ft_printf("hex %x %X\n", 0, 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	r1 =    printf("int %i %d\n", 0, 0);
	r2 = ft_printf("int %i %d\n", 0, 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	r1 =    printf("all %c %s %p %d %i %u %%\n", 0, 0, 0, 0, 0);
	r2 = ft_printf("all %c %s %p %d %i %u %%\n", 0, 0, 0, 0, 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== STRESS TEST =====\n");
	r1 =    printf("printf: %d %d %d %d %d %d %d %d\n", INT_MIN, -1000, -1, 0, 1, 1000, INT_MAX, 42);
	r2 = ft_printf("printf: %d %d %d %d %d %d %d %d\n", INT_MIN, -1000, -1, 0, 1, 1000, INT_MAX, 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== TESTING %%i / %%d =====\n");
    i578 = 26525424;
    r1 =    printf("printf: [%i]\n", i578);
    r2 = ft_printf("printf: [%i]\n", i578);
    printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

    printf("===== TESTING WIDTH / PRECISION =====\n");
    r1 =    printf("printf: [%10.5d]\n", 42);
    r2 = ft_printf("printf: [%10.5d]\n", 42);
    printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

    printf("===== TESTING FLAGS '-' AND '0' =====\n");
    r1 =    printf("printf: [%-08d]\n", 123);
    r2 = ft_printf("printf: [%-08d]\n", 123);
    printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

    printf("===== TESTING '+' AND ' ' FLAGS =====\n");
    r1 =    printf("printf: [%+d] [% d]\n", 42, 42);
    r2 = ft_printf("printf: [%+d] [% d]\n", 42, 42);
    printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

    printf("===== TESTING '#' FLAG =====\n");
    r1 =    printf("printf: [%#x] [%#X] [%#o]\n", 255, 255, 255);
    r2 = ft_printf("printf: [%#x] [%#X] [%#o]\n", 255, 255, 255);
    printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

    printf("===== TESTING STRINGS =====\n");
    r1 =    printf("printf: [%10s]\n", "Hello");
    r2 = ft_printf("printf: [%10s]\n", "Hello");
    printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

    printf("===== TESTING PRECISION ON STRINGS =====\n");
    r1 =    printf("printf: [%.3s]\n", "Testing");
    r2 = ft_printf("printf: [%.3s]\n", "Testing");
    printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

    printf("===== TESTING HEX LOWER/UPPER =====\n");
    r1 =    printf("printf: [%x] [%X]\n", 3735928559u, 3735928559u);
    r2 = ft_printf("printf: [%x] [%X]\n", 3735928559u, 3735928559u);
    printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

    printf("===== TESTING POINTERS =====\n");
    int a = 42;
    r1 =    printf("printf: [%p]\n", &a);
    r2 = ft_printf("printf: [%p]\n", &a);
    printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

    printf("===== TESTING MIXED CONVERSIONS =====\n");
    r1 =    printf("printf: [%10d | %-8s | %#x | %p]\n", 42, "hi", 255, &a);
    r2 = ft_printf("printf: [%10d | %-8s | %#x | %p]\n", 42, "hi", 255, &a);
    printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);


	printf("\e[32mSUCCESSFULLY PASSED ALL TESTS\e[0m\n");
	return 0;
}

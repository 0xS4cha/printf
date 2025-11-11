/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:15:36 by julcleme          #+#    #+#             */
/*   Updated: 2025/11/11 15:04:34 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

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

	r1 =    printf("printf: [%s]\n", NULL);
	r2 = ft_printf("printf: [%s]\n", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== TESTING %%p =====\n");
	void *ptr = &r1;
	r1 =    printf("printf: [%p]\n", ptr);
	r2 = ft_printf("printf: [%p]\n", ptr);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	ptr = NULL;
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
	r1 = printf("printf: Char:%c | Str:%s | Ptr:%p | Int:%d | Unsigned:%u | Hex:%x | HEX:%X | %%\n",
				 'A', "42", &r1, -42, 42u, 255, 255);
	r2 = ft_printf("printf: Char:%c | Str:%s | Ptr:%p | Int:%d | Unsigned:%u | Hex:%x | HEX:%X | %%\n",
				   'A', "42", &r1, -42, 42u, 255, 255);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== STRESS TEST =====\n");
	r1 = printf("printf: %d %d %d %d %d %d %d %d\n", INT_MIN, -1000, -1, 0, 1, 1000, INT_MAX, 42);
	r2 = ft_printf("printf: %d %d %d %d %d %d %d %d\n", INT_MIN, -1000, -1, 0, 1, 1000, INT_MAX, 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);
	return 0;
}

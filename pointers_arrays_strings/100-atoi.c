#include "main.h"

/**
 *
 *
 *
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 *
 *
 *
 */

int idx_num_starts(char *s)
{
	int a;

	for (a = 0; a < _strlen(s); a++)
	{
		if (s[a] >= '0' && s[a] <= '9')
			return (a);
	}
	return (-1);
}

/**
 *
 *
 *
 */

int find_sign(char *s)
{
	int neg = 0, a = 0, sign = 1;

	while (a < (idx_num_starts(s)))
	{
		if (s[a++] == '-')
			neg++;
	}
	if (neg % 2 != 0)
		sign = -1;

	return (sign);
}

/**
 *
 *
 */

int _atoi(char *s)
{
	int idx_digit_starts = (idx_num_starts(s));
	int sign;
	int digit_to_print = 0;
	int t = 1, a;
	unsigned int num = 0;
	int digit = (idx_num_starts(s));

	if (idx_digit_starts < 0)
		return (0);

	sign = find_sign(s);

	while ((s[idx_digit_starts] >= '0' && s[idx_digit_starts] <= '9') && (idx_digit_starts <= _strlen(s)))
	{
		digit_to_print += 1;
		idx_digit_starts++;
	}

	a = 1;

	while (a < digit_to_print)
	{
		t *= 10;
		a++;
	}

	for (a = digit; a < (digit + digit_to_print); a++)
	{
		num += (s[a] - '0') * t;
		t /=10;
	}

	return (num * sign);
}

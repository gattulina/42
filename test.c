
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	sum;
	int	sign;
	int	found;

	sum = 0;
	sign = 1;
	found = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && found)
	{
		if (*str >= '0' && *str <= '9')
			sum = sum * 10 + *str - '0';
		else
			found = 0;
		str++;
	}
	return (sign * sum);
}

int main(void)
{
	char *s = "#";
	char *t = "has";
	char *f = "123";
	char *y = "-3jf";

	printf("# is %d %d\n", ft_atoi(s), atoi(s));
	printf("has is %d %d\n", ft_atoi(t), atoi(t));
	printf("123 is %d %d\n", ft_atoi(f), atoi(f));
	printf("-3jf is %d %d\n", ft_atoi(y), atoi(y));
	return (0);
}

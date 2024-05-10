#include "libft.h"
#include <stdio.h>

int main(void)
{
	printf("Testing ft_isalnum: \n");
	char c1 = '@';
	printf("Result: %i\n", ft_isalnum(c1));

	printf("Testing ft_isalpha: \n");
	char c2 = '@';
	printf("Result: %i\n", ft_isalpha(c2));

	return (0);
}
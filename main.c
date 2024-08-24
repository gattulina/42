#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("Testing ft_isalnum: \n");
	char c1 = '@';
	printf("Result: %i\n", ft_isalnum(c1));

	printf("Testing ft_isalpha: \n");
	char c2 = '@';
	printf("Result: %i\n", ft_isalpha(c2));

	/*memcpy vs ft_memcpy*/
	const char src_memcpy[50] = "Input for test";
	char dst_memcpy[50];
	
	ft_memcpy(dst_memcpy, src_memcpy, strlen(src_memcpy) + 1);
	printf("After ft_memcpy dest = %s\n", dst_memcpy);

	memcpy(dst_memcpy, src_memcpy, strlen(src_memcpy) + 1);
	printf("After memcpy dest = %s\n", dst_memcpy);
	
	/*tolower & to upper*/
	printf("Testing ft_tolower: \n");
	char low = 'H';
	ft_tolower(low);
	printf("%c", low);

	printf("Testing ft_toupper: \n");
	char upp = 'g';
	ft_toupper(upp);
	printf("%c", upp);

	/*memmove vs ft_memmove*/
	printf("Testing ft_memmove: \n");
	const char src_memmove[50] = "Hola me llamo Luciana";
	char dst_memmove[50];
	
	ft_memmove(dst_memmove, src_memmove, -1);
	printf("After ft_memmove dest = %s\n", dst_memmove);

	memmove(dst_memmove, src_memmove, -1);
	printf("After ft_memmove dest = %s\n", dst_memmove);

	/*memcmp vs ft_memcmp*/
	printf("%d\n", ft_memcmp("c", "a", 4));
	printf("%d\n", memcmp("c", "a", 4));

	/*strchr*/
	char *s = "Una.oracion.asi";
	int c = 'r';
	char *ret;
	ret = ft_strchr(s, c);
	printf("my fc: String after %c : is %s", c, ret);
	printf("org fc: String after %c: is %s", c, strchr(s,c));

	/*strrchr vs ft_strrchr*/
	char *s = "Un.string.asi";
	int c = 'n'; 
	char *ret;
	ret = ft_strtchr(s,c);	
	printf("my fc: String after %c: is %s, última aparicion", c, ret);
	printf("strrchr: string after %c is %s", c, strrchr(s,c));

	/*strncmp vs ft_strncmp*/
	char	*str1 = "una oración";
	char	*str2 = "otra oracion";
	printf("my fc: The difference str1&2 is %d", ft_strncmp(str1, str2, 4));
	printf("strncmp: diff is %d", strncmp(str1, str2, 4));

	return (0);
}

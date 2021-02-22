# include <stdio.h>
# include <stddef.h>

size_t	ft_strlen(const char *str){
	
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int main()
{
	char str;
	int len;

	str = "Hello World";
	len = ft_strlen(str);
	printf("%d\n", len);
	
	return (0);
}
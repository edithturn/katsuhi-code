# include <unistd.h>
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
	char *str = "Hola Mundo";
	int len;

	len = ft_strlen(str);
	printf("%d\n", len);
	return (0);
}
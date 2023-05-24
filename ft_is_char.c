#include "../includes/ft_printf.h"

int	ft_is_char(va_list arg)
{
	char	c;

	if (!arg)
		return (0);
	c = va_arg(arg, int);
	ft_putchar_fd(c, 1);
	return (1);
}

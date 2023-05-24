#include "../includes/ft_printf.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
	else
		ft_putchar_fd(nbr + '0', fd);
}

void	ft_putnbr_unsigned_fd(unsigned int n, int fd)
{
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

void	ft_putnbr_hex_fd(const char format, unsigned int n, int fd)
{
	if (n >= 16)
	{
		ft_putnbr_hex_fd(format, n / 16, fd);
		ft_putnbr_hex_fd(format, n % 16, fd);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd(n + '0', fd);
		else
		{
			if (format == 'x')
				ft_putchar_fd(n % 10 + 'a', fd);
			if (format == 'X')
				ft_putchar_fd(n % 10 + 'A', fd);
		}
	}
}

void	ft_putnbr_hex_pointer_fd(unsigned long n, int fd)
{
	if (n >= 16)
	{
		ft_putnbr_hex_pointer_fd(n / 16, fd);
		ft_putnbr_hex_pointer_fd(n % 16, fd);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd(n + '0', fd);
		else
			ft_putchar_fd(n % 10 + 'a', fd);
	}
}

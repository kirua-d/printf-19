#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_is_string(va_list arg);
int		ft_is_char(va_list arg);
int		ft_is_int(va_list arg);
int		ft_is_unsigned(va_list arg);
int		ft_is_hex(const char format, va_list arg);
int		ft_is_percent(va_list arg);
int		ft_is_pointer(va_list arg);
int		ft_count_int(int nb);
int		ft_count_unsigned(unsigned int nb);
int		ft_count_hex(unsigned long nb);
int		ft_search_tc(const char *format, va_list arg);
size_t	ft_strlen(const char *s);
void	ft_putnbr_hex_fd(const char format, unsigned int n, int fd);
void	ft_putnbr_hex_pointer_fd(unsigned long n, int fd);
void	ft_putnbr_unsigned_fd(unsigned int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif

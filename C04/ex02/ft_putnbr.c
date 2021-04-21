#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	if (num < 10 && num >= 0)
	{
		ft_putchar(num + '0');
	}
	else if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putchar(num % 10 + '0');
		if (num < 0)
			ft_putchar('-');
	}
	else if (num == (-2147483648))
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(num * -1);
	}
}
/*
int	main(void)
{
	ft_putnbr(2147483647);
	return (0);
}*/

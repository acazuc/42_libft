#include "libft.h"

void	ft_exit(char *str, int exit_status)
{
	ft_putendl_fd(str, 2);
	exit(exit_status);
}

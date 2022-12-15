#include "minitalk.h"

void	confirm_msg()
{
	ft_printf("Votre message a été reçu.");
	exit(1);
}

int	read_bit(int pid, char c)
{
	int b;

	b = 7;
	while (b >= 0)
	{
		if (c >> b & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		b--;
		usleep(200);
	}
	return (0);
}

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	signal(SIGUSR2, confirm_msg);
	if (argc != 3)
	{
		ft_printf("Erreur avec les arguments");
		return(0);
	}
	while (argv[2][i])
	{
		read_bit(ft_atoi(argv[1]), argv[2][i]);
		i++;
	}
	while (1)
		pause();
	return (0);
}

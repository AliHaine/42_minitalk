#include "minitalk.h"

int	read_bit(int pid, char c)
{
	int b;

	b = 7;
	while (b + 1)
	{
		if (c >> b & 1)
		{
			printf("1");
			kill(pid, SIGUSR1);
		}
		else
		{
			printf("0");
			kill(pid, SIGUSR1);
		}
		b--;
		//pause();
		usleep(200);
	}
	return (0);
}

int main(int argc, char *argv[])
{
	int i = 0;
	if (argc != 3)
	{
		ft_printf("Erreur avec les arguments");
		return(0);
	}
	read_bit(ft_atoi(argv[1]), *argv[2]);
	//kill(ft_atoi(argv[1]), SIGUSR2);

}

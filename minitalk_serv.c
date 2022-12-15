#include "minitalk.h"
/*void action_handler(int signum, siginfo_t *siginfo, void *s)
{
	char	c = 0;
	int	i = 0;
	printf("test");
	//i = 0;
	if (i < 8)
	{
		printf("ttest");
	if (signum == SIGUSR1) {
		//c = ((c << i) == 1) * 2;
	} else {

		//c = ((c << i) == 0) * 2;
	}
	//i++;
	//}

	else
	{
		write(1, &c, 1);
		c = 0;
		i = 0;
	}
	printf("ttest");
}*/


void action_handler(int signum, siginfo_t *siginfo, void *s)
{

	ft_printf("/value %d/", signum);
	if (signum == SIGUSR1)
	{
		ft_printf("su1");
	}
	else
	{
		ft_printf("su2");
	}
}


int main(void)
{
	struct sigaction act;

	act.sa_sigaction = &action_handler;
	act.sa_flags = SA_SIGINFO;
	ft_printf("Server PID : %d\n", getpid());
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	while (1 + 1 == 2)
		pause();

	return (0);
}
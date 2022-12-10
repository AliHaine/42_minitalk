#include "minitalk.h"

void action_handler(int signum, siginfo_t *siginfo, void *s)
{
	if (signum == SIGUSR1)
	{
		ft_printf("su1");
	}
	else if (signum == SIGUSR2)
	{
		ft_printf("su1");
	}
	ft_printf("f");
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
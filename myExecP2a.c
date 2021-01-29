#include <stdio.h>
#include <unistd.h>


int main()
{	
	printf("this is my pid %d\n", getpid());
	printf("this is my ppid %d\n", getppid());
	return 0;

}

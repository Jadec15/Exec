#include <stdio.h>
#include <unistd.h>
#include <string.h>


int main(int argc, char **argv, char **envp){
	
	int fd = atoi(argv[1]);
	char execString[2048];

	sprintf(execString,"[exec] this is my pid %d and this is my ppid %d\n", getpid(), getppid());
	write(fd, execString, strlen(execString));
	close(fd);
	return 0;

}

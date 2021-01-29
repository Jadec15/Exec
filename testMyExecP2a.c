#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>





int main(int argc, char* argv[], char *envp[]){	
	//Part 2a
	printf("this is my pid %d\n", getpid());
	printf("this is my ppid %d\n", getppid());

	execlp("./myExecP2a","./myExecP2a", NULL);
	printf("an error occured\n");
}


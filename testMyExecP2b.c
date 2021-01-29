#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>





int main(int argc, char *argv[], char *envp[])
{
		int fd;
		char pidstring[45];
		char fdstring[10];

		if((fd = open("file1", O_WRONLY|O_CREAT, 0644)) == -1)
			printf("error occured could not create file");
	
		sprintf(pidstring, "my pid is %d and my ppid is %d\n", getpid(), getppid());	
		write(fd, pidstring, strlen(pidstring));
		sprintf(fdstring, "%d", fd); 
		
		execlp("./myExecP2b", "./myExecP2b", fdstring, NULL);
			printf("error occured, execlp failed");
}

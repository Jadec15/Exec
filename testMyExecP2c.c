#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>





int main(int argc, char* argv[], char *envp[]){
//part2c
		envp[1] = "Jade Cabral";
		printf("%s", envp[1]);
		int idx = 0;
		while (envp[idx] != NULL)
		{
			printf("%s\n",envp[idx]);
			idx++; 
		}
		execle("./myExecP2c","./myExecP2c", NULL, envp);
			printf("execle error occured\n");
}

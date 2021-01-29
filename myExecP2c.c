#include <stdio.h>
#include <unistd.h>


int main(int argc, char **argv, char **envp){
	
	int i = 0;
	printf("\n\nexec envp variables");
	while(envp[i] != NULL)
	{
		printf("%s\n", envp[i]);
		i++;
	}	
	return 0;

}

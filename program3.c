#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv){
	int i=0;
	for(i= 0; i<argc; i++)
	{
		printf("argv[%d] = %s\n", i , argv[i]);
	
	}
	
	int pid = fork();
	if(pid > 0){
		wait(NULL);
		printf("My child has died ....\n");
	}else {
		execvp(argv[1], argv+1);
	}
	return 0;
}

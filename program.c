#include <sys/wait.h>
#include <unistd.h>
int main(int argc, char **argv){
	int pid = fork();
	if(pid > 0){
		wait(NULL);
	}else {
		char * program = "ls";
		char * args[] = {program, "-l", NULL};
		execvp("ls", args);
	}
	return 0;
}

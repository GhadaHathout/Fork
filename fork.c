#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
int globe = 10;
int main(){

	int pid = fork();
	if(pid > 0){
		while (1)
		{
			globe +=1;
			printf("Globe from parent(PID=%d):globe= %d\n",(int)getpid(), globe);
			sleep(2);
		}

		}
	else {
		while(1)
		{
			globe -=2;
			printf("Globe from child(PID= %d):globe=%d\n",(int)getpid(), globe);
			sleep(6);
		}

}
return 0;

}

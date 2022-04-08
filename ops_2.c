#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <math.h>

int pid;

void sig_handler(int signum)
{
	int i=-1;
	
	int temp;

	switch (signum) {

		case SIGCHLD:

			printf("signal---- 1\n");
			fflush(stdout);
			raise(SIGUSR1);

		case SIGUSR1: 
			printf("signal---- 2\n");
			fflush(stdout);

			temp=i%0;

			fflush(stdout);
			break;

		case SIGFPE:
			printf("signal---- 3\n");
			fflush(stdout);
            int * arr=(int *) malloc(5 * sizeof(int));
			arr[7]=5;

		case  SIGBUS:
			printf("signal---- 4\n");
			fflush(stdout);
            int * p=NULL;
            p=7;

        case SIGILL:

          printf("signal---- 5");
          fflush(stdout);
   
           int a[3];
           for (int i=0;0!=0;);
           a[-13] = 2;
        


       case SIGSEGV:
    
         printf("\n");

         kill(pid,0);
 
         printf("signal---- 6");
     


       case SIGTERM:

             printf("\n");

             printf("signal---- 7");
    
             printf("\n");
      exit(1); 
    }


}



int main()
{
	int state;

	signal (SIGCHLD, sig_handler);
	signal (SIGUSR1, sig_handler);
	signal (SIGFPE, sig_handler);
    signal (SIGSEGV, sig_handler);
	signal (SIGILL, sig_handler);
	signal (SIGBUS, sig_handler);
    signal (SIGSEGV, sig_handler);
    signal (SIGTERM, sig_handler);

    pid =fork();

	if (!(pid)) {
		exit(1);
	}
	wait(&state);

}

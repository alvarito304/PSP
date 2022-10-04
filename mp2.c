#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

void main() {
/*se definen 2 varianle de tipo pid_t para almacenar los pids de los procesos */
  pid_t pid, pid2;

  pid = fork();

  if (pid==0){
  /*estamos en el proceso hijo*/
  pid2 = fork();
	 if (pid2==0){
  		/*estamos en el proceso hijo*/
		printf("SOY EL P3\n");
		printf("Mi pid es %d\n", getpid());
		printf("El pid de mi padre es %d\n", getppid());

  	}else{
  	/*estamos en el proceso padre*/
  		wait(NULL);
  		printf("SOY EL P2\n");
		printf("Mi pid es %d\n", getpid());
		printf("El pid de mi padre es %d\n", getppid());
	  }

  }else{
  /*estamos en el proceso padre*/
  	pid2 = wait(NULL);
  	printf("SOY EL P1\n");
	printf("Mi pid es %d\n", getpid());
	printf("El pid de mi hijo es %d\n",pid2);
  }
exit(0);
}

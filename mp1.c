#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

void main() {
/*se definen 2 varianle de tipo pid_t para almacenar los pids de los procesos */
  pid_t pid, pid_hijo;

  pid = fork();

  if (pid==0){
  /*estamos en el proceso hijo*/
	printf("Alvaro Herrero Tamayo\n");

  }else{
  /*estamos en el proceso padre*/
  	pid_hijo = wait(NULL);
  	printf("SOY EL PADRE\n");
   	printf("Mi pid es %d\n", getpid());
    printf("El pid de mi hijo es %d\n", pid_hijo);
  }
exit(0);
}

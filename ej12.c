#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main(){
printf("Alvaro 8911\n");
system("ls /home/alumno/Descargas/ -lSa");
printf("\nEl proceso se esta ejecutando en la terminal:\n");
system("tty");
sleep(120);
printf("\ninformacion del proceso\n");
system("ps -ef | grep ej11");
printf("\nFin del programa\n");
exit(0);
}

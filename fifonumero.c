#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int  main()
{
   int  fp;
   char  saludo[]= "01233123\n";
	
    fp = open("FIFO2",1);//abrimos el fifo de escritura por eso el "1"

    printf("Mandando  informacion  al  FIFO...\n"); 
    write(fp,saludo,strlen(saludo));//exribimos en el fifo(archivo)(fpque es el fifo que hemos abierto,var "saludo",strlen(saludo))
   close(fp);
   return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>

int main(void)
{
  int  fp;
  int  p,  bytesleidos;
  char buffer[10];

   p=mkfifo("FIFO2",  S_IFIFO|0666);//permiso  de  lecture y escritura y creamos mkfifo("su nombre",tipo de dato del fifo|los permisos)
	
  while (1)
  {
	fp = open("FIFO2", 0);//abrimos el fifo de escritura por eso el 0
	bytesleidos=read(fp,buffer,1) ; //almacenamos el primer caracter de fp lo mandamos al buffer solo 1 caracter
	printf("OBTENIENDO  Informacion...");
	
	if (isdigit(buffer[0])){	
	printf("SOY UN NUMERO\n");
	while 	(bytesleidos!=0)//creamos un bucle para leer el archivo
	{
	   printf("%c",buffer[0]); //printeamos el buffer [0]
	   bytesleidos=read(fp,buffer,1)	;//leo  otro  byte
	}
	close(fp); 
	}else {
	printf("SOY UNA LETRA\n");
	while 	(bytesleidos!=0)//creamos un bucle para leer el archivo
	{
	   printf("%c",buffer[0]); //printeamos el buffer [0]
	   bytesleidos=read(fp,buffer,1)	;//leo  otro  byte
	}
	close(fp);
	}
  }  
return(0); 
}
	
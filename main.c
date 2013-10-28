/*
 *	Compiladores y Lenguajes de Bajo de Nivel
 *	Tarea 2
 *	
 *  Daniel Spiridonoff
 *
 *  Implementacón de un analizador sintáctico (descendente recursivo o LL(1))
 *  para reconocer un fuente en un lenguaje matemático.
 *
 */ 

#include "anlexico.h"
#include "ansintactico.h"



int main(int argc,char* args[])
{
	// inicializar analizador lexico

	initTabla();
	initTablaSimbolos();

	if(argc > 1)
	{
		if (!(archivo=fopen(args[1],"rt")))
		{
			printf("Archivo no encontrado.");
			exit(1);
		}
		//Funcion parse
		parse();
		if(HayError==FALSE){
			printf("\nNo se encontraron errores\n");
		}
		fclose(archivo);
		//system("pause");
		return 0;
	}else{
		printf("Debe pasar como parametro el path al archivo fuente.");
		exit(1);
	}
}

#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
	int opc = 0;
	while (opc != 7){
	printf("----------------------------------------\n");
	printf("\tBIENVENIDO AL MENÚ\n");
	printf("1.- Mostrar todos los contactos\n");
	printf("2.- Buscar un registro");//Crear sub menú, 1 para que el parametro sea el nombre y el otro para que sea la clave
	printf("3.- Ordenar alfabeticamente por clave, nombre o salario\n");
	printf("4.- Insertar nuevos registros\n");
	printf("5.- Eliminar un registro\n");//Crear submenu por clave o nombre
	printf("6.- Modifica la clave\n"); //crear un submenu, 1 para nombre, 1 para salario y uno por clave
	printf("7.- Salir\n");
	printf("----------------------------------------\n");
	scanf("%d", &opc);
		if (opc == 1){
			printf("Mostrar todos los contactos");
			break;
		}
		if (opc == 2){
            system("cls");
		    int opc2 = 0;
		    while (opc2 != 3){
		    printf("Seleccione una opcion: \n");
		    printf("1.- Buscar un registro por nombre\n");
		    printf("2.- Buscar un registro por clave\n");
		    printf("3.- Salir\n");
            scanf("%d", &opc2);

		    if(opc2 == 1){
		        system("cls");
		    }
		    }
		}
		}
	
	
	
	
	return 0;
}

#include <stdio.h>
//#include <windows.h>
#include <string.h>
#include <locale.h>
void menu(int opc){
    	while (opc != 7){
	printf("----------------------------------------\n");
	printf("\tBIENVENIDO AL MENÚ\n");
	printf("1.- Mostrar todos los contactos\n");
	printf("2.- Buscar un registro\n");//Crear sub menú, 1 para que el parametro sea el nombre y el otro para que sea la clave
	printf("3.- Ordenar alfabeticamente por clave, nombre o salario\n");
	printf("4.- Insertar nuevos registros\n");
	printf("5.- Eliminar un registro\n");//Crear submenu por clave o nombre
	printf("6.- Modifica la clave\n"); //crear un submenu, 1 para nombre, 1 para salario y uno por clave
	printf("7.- Salir\n");
	printf("----------------------------------------\n");
	scanf("%d", &opc);
		if (opc == 1){
			printf("Mostrar todos los contactos\n");
			break;
		}
		if (opc == 2){
            //system("cls");
		    int opc2 = 0;
		    while (opc2 != 3){
		    printf("Seleccione una opcion: \n");
		    printf("1.- Buscar un registro por nombre\n");
		    printf("2.- Buscar un registro por clave\n");
		    printf("3.- Salir\n");
            scanf("%d", &opc2);
        
		    if(opc2 == 1){
                int opc3 = 0, cadena = 0;
		        while(opc3 != 2){
 		        //system("cls");
		        printf("\tBuscar un registro por nombre\n");
		        printf("Ingrese el nombre que deseaa buscar: ");	
		        scanf("%d", &cadena);
		        //aqui para poner el scanf y hacer que busca la cadena de caracteres deseada
		            printf("1.- Buscar otro: \n");
		            printf("2.- Salir: \n");
		            scanf("%d", &opc3);
		            if(opc3 == 1){
		                opc2 = 1;
		                break;
		            }
		            if(opc3 == 2){
                        menu(opc);
		            }
		            else if(opc3 != 1 & opc3 != 2){
		                printf("Opcion incorrecta\nIntente nuevamente.\n");
		        }
		        
		    }
		    if(opc2 == 2){
                //system("cls");
                printf("\tBuscar un registro por clave\n");
                printf("Ingrese la clave que desea buscar: \n");
                //aqui para porner el scanf y hacer que busque la cadena deseada
                break;
		    }
		    }
		}
		if(opc == 3){
		    //system("cls");
		    int opc2 = 0;
		    printf("Ordenar alfabeticamente\n");
		    while(opc2 != 4){
		        printf("1.- Ordenar por nombre\n");
		        printf("2.- Ordenar por clave\n");
		        printf("3.- Ordenar por salario\n");
		        scanf("%d", &opc2);
		    }
		}
		else if(opc != 7 & opc != 1 & opc != 2 & opc != 3 & opc != 4 & opc != 5 & opc != 6){
		    printf("Opcion incorrecta\nIntente nuevamente.\n");
		}
		}
	
	
	
	}
}
int main(){
    setlocale(LC_ALL,"");
	int opc = 0;
    menu(opc);
	return 0;
}

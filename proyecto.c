#include <stdio.h>
//#include <windows.h>
#include <string.h>
#include <locale.h>
void cerrarPrograma() {
    printf("Cerrando el programa.\n");
    exit(0);
}
void menu(int opc){
    	while (opc != 7){
		    //system("cls");
			printf("----------------------------------------\n");
			printf("\tBIENVENIDO AL MENÚ\n");
			printf("1.- Mostrar todos los contactos\n");
			printf("2.- Buscar un registro\n");//Crear sub menú, 1 para que el parametro sea el nombre y el otro para que sea la clave
			printf("3.- Ordenar alfabeticamente\n");
			printf("4.- Insertar nuevos registros\n");
			printf("5.- Eliminar un registro\n");//Crear submenu por clave o nombre
			printf("6.- Modifica la clave\n"); //crear un submenu, 1 para nombre, 1 para salario y uno por clave
			printf("7.- Salir\n");
			printf("----------------------------------------\n");
			scanf("%d", &opc);
		if (opc == 1){
			//system("cls");
			printf("----------------------------------------\n");
			printf("Mostrar todos los contactos\n");
			//Aqui haremos para que se muestren todos los contactos
			break;
		}
		if (opc == 2){
            //system("cls");			
            printf("----------------------------------------\n");
		    int opc2 = 0;
		    while (opc2 != 3){
		    printf("Seleccione una opcion: \n");
		    printf("1.- Buscar un registro por nombre\n");
		    printf("2.- Buscar un registro por clave\n");
		    printf("3.- Salir al menu principal\n");
		    printf("4.- Salir del programa\n");
            scanf("%d", &opc2);
		    if(opc2 == 1){
                int opc3 = 0, cadena = 0;
 		        //system("cls");
                printf("----------------------------------------\n");
		        printf("\tBuscar un registro por nombre\n");
		        printf("Ingrese el nombre que deseaa buscar: \n");	
		        scanf("%d", &cadena);
		        //aqui para poner el scanf y hacer que busca la cadena de caracteres deseada
		            //system("cls");
                    while(opc3 != 2){
		            printf("1.- Buscar otro\n");
		            printf("2.- Salir al menú principal\n");
                    printf("3.- Salir del programa\n");

		            scanf("%d", &opc3);
		            if(opc3 == 1){
		            	//system("cls");
		                break;
		            }
		            if(opc3 == 2){
                        menu(opc);
		            }
		            if(opc3 == 3){
		                cerrarPrograma();
		            }
		            else if(opc3 != 1 & opc3 != 2 & opc3 != 3){
            			printf("----------------------------------------\n");
		                printf("Opcion incorrecta\nIntente nuevamente.\n");
		        }
		        
		    }}
		    if(opc2 == 2){
                int opc3 = 0, cadena = 0;
 		        //system("cls");
	            printf("----------------------------------------\n");
		        printf("\tBuscar un registro por clave\n");
		        printf("Ingrese la clave que deseaa buscar: \n");	
		        scanf("%d", &cadena);
		        while(opc3 != 2){
		        //aqui para poner el scanf y hacer que busca la cadena de caracteres deseada
		            //system("cls");
		            printf("1.- Buscar otro: \n");
		            printf("2.- Salir al menu principal\n");
		            printf("3.- Salir del programa\n");
		            scanf("%d", &opc3);
		            if(opc3 == 1){
		            	//system("cls");
		                break;
		            }
		            if(opc3 == 2){
                        menu(opc);
		            }
		            if(opc3 == 3){
		                cerrarPrograma();
		            }
		            else if(opc3 != 1 & opc3 != 2 & opc3 != 3){
			            printf("----------------------------------------\n");
		                printf("Opcion incorrecta\nIntente nuevamente.\n");
		        }
		        
		    }
		    }
		    if(opc2 == 4){
		        cerrarPrograma();
		    }
                else if(opc2 != 1 & opc2 != 2 & opc2 != 3 & opc2 != 4){
            			printf("----------------------------------------\n");
		                printf("Opcion incorrecta\nIntente nuevamente.\n");
		        }
		        
		    }
		    
		}
		if(opc == 3){
		    //system("cls");
		    int opc2 = 0;
		    printf("\tOrdenar alfabeticamente\n");
		    while(opc2 != 4){
		        printf("1.- Ordenar por nombre\n");
		        printf("2.- Ordenar por clave\n");
		        printf("3.- Ordenar por salario\n");
		        printf("4.- Salir al menu principal\n");
    		    printf("5.- Salir del programa\n");

		        scanf("%d", &opc2);
		        if(opc2 == 1){
		            int ejemplo, opc3 = 0;
		            //system("cls");
		            printf("\tOrdenar por nombre\n");
		            //aqui pondremos para ordenar alfabeticamente por nombre
		            scanf("ingresa un numero: \n"); //este es solo ejemplo, quitar
		            scanf("%d", &ejemplo);
		            while(opc3 != 2){
		                //system("cls");
		            printf("1.- Buscar otro\n");
		            printf("2.- Salir al menu principal\n");
        		    printf("3.- Salir del programa\n");
		            scanf("%d", &opc3);
		            if(opc3 == 1){
					//system("cls");
		                break;
		            }
		            if(opc3 == 2){
		                menu(opc);
		            }
		            if(opc3 == 3){
		                cerrarPrograma();
		            }
		            else if(opc3 != 1 & opc3 != 2 & opc3 != 3){
		                printf("----------------------------------------\n");
		                printf("Opcion incorrecta\nIntente nuevamente.\n");
		        }
		        }
		        }
		        if(opc2 == 2){
		            int ejemplo, opc3 = 0;
		            //system("cls");
		            printf("\tOrdenar por clave\n");
		            //aqui pondremos para ordenar alfabeticamente poor clave	
		            scanf("ingresa un numero: \n"); //este es solo ejemplo, quitar
		            scanf("%d", &ejemplo);
		            while(opc3 != 2){
		            //system("cls");
		            printf("1.- Buscar otro\n");
		            printf("2.- Salir al menu principal\n");
        		    printf("3.- Salir del programa\n");
		            scanf("%d", &opc3);
		            if(opc3 == 1){
		            	//system("cls");
		                break;
		            }
		            if(opc3 == 2){
		                menu(opc);
		            }
		            if(opc3 == 3){
		                cerrarPrograma();
		            }
		            else if(opc3 != 1 & opc3 != 2 & opc3 != 3){
            			printf("----------------------------------------\n");
		                printf("Opcion incorrecta\nIntente nuevamente.\n");
		        }
		        }
		        }
		        if(opc2 == 3){
		            int ejemplo, opc3 = 0;
		            //system("cls");
		            printf("\tOrdenar por salario\n");
		            //Aqui pondremos para ordenar alfabeticamente por salario
		            scanf("ingresa un numero: \n"); //este es solo ejemplo, quitar
		            scanf("%d", &ejemplo);
		            while(opc3 != 2){
		                //system("cls");
		                printf("1.- Buscar otro\n");
		                printf("2.- Salir al menu principal\n");
		                printf("3.- Salir del programa\n");
		                scanf("%d", &opc3);
		                if(opc3 == 1){
		                	//system("cls");
		                    break;
		                }
		                if(opc3 == 2){
		                    menu(opc);
		                }
		                if(opc3 == 3){
		                    cerrarPrograma();
		                }
		                else if(opc3 != 1 & opc3 != 2 & opc3 != 3){
                			printf("----------------------------------------\n");
		                    printf("Opcion incorrecta\nIntente nuevamente.\n");
		                    }
		            }
		        }
		        if(opc2 == 5){
		            cerrarPrograma();
		        }
		            else if(opc2 != 1 & opc2 != 2 & opc2 != 3 & opc2 != 4 & opc2 != 5){
            			printf("----------------------------------------\n");
		                printf("Opcion incorrecta\nIntente nuevamente.\n");
		        }
		    }
		}
		if(opc == 4){
			int opc2 = 0;
			//system("cls");
			while(opc2 != 2 & opc2 != 3){
			printf("\tIngresar nuevos registros\n");
			printf("1.- Ingresas un nuevo registro\n");
			printf("2.- Salir al menu principal\n");
		    printf("3.- Salir del programa\n");
			scanf("%d", &opc2);
			if(opc2 == 1){
				int opc3 = 0;
				while(opc3 != 2){
				//system("cls");
				char nombre[80];
				int clave, salario;
				printf("Ingrese el nombre del registro: \n");
				scanf("%s", nombre);
				printf("Ingrese la clave de %s\n", nombre);
				scanf("%d", &clave);
				printf("Ingrese el salario de %s\n", nombre);
				scanf("%d", &salario);
				printf("Se registró a %s con la clave %d y su salario es $%d\n", nombre, clave, salario);	
				//system("pause");
				//system("cls");
				while(opc3 != 2 & opc3 != 3){
				printf("1.- Registrar otro\n");
				printf("2.- Salir al menu principal\n");
				printf("3.- Salir del programa\n");
				scanf("%d", &opc3);
				if(opc3 == 1){
                    break;
        				}
				if(opc3 == 2){
					menu(opc);
				}
				if(opc3 == 3){
				    cerrarPrograma();
				}
		        else if(opc3 != 1 & opc3 != 2 & opc3 != 3){
        			printf("----------------------------------------\n");
		            printf("Opcion incorrecta\nIntente nuevamente.\n");
		        }
				}}
			
			}
			if(opc2 == 2){
				menu(opc);
			}
			if(opc2 == 3){
			    cerrarPrograma();
			}
			else if(opc2 != 1 & opc2 != 2 & opc2 != 3){
			    printf("----------------------------------------\n");
			    printf("Opcion incorrecta\nIntente nuevamente\n");
			}
		}}
		if(opc == 5){
		    int opc2 = 0, opc3 = 0;
		    char ejemplo[80];
		    while(opc3 != 3 & opc3 != 4){
		    //system("cls");
		    printf("\tBorrar registro\n");
		    printf("1.- Borrar un registro por nombre\n");
		    printf("2.- Borrar un registro por clave\n");
		    printf("3.- Salir al menu principal\n");
		    printf("4.- Salir del programa\n");
		    scanf("%d", &opc3);
		        if(opc3 == 1){
		            printf("\tBorrar registro por nombre\n");
		            printf("Ingrese el nombre\n");
		            scanf("%s", ejemplo);
		            //system("cls");
        		    while(opc2 != 2){
                    printf("1.- Borrar otro registro\n");
                    printf("2.- Salir al menu principal\n");
        		    printf("3.- Salir del programa\n");
                    scanf("%d", &opc2);
                    if(opc2 == 1){
                        break;
                    }
                    if(opc2 == 2){
                        menu(opc);
                    }
                    if(opc2 == 3){
                        cerrarPrograma();
                    }
                    else{
                        printf("Opcion incorrecta\nIntente nuevamente\n");
                    }
		        }
		    }
		        if(opc3 == 2){
		            printf("\tBorrar registro por clave\n");
		            printf("Ingrese la clave\n");
		            scanf("%s", ejemplo);
		            //system("cls");
        		    while(opc2 != 2){
                    printf("1.- Borrar otro registro\n");
                    printf("2.- Salir al menu principal\n");		    
                    printf("3.- Salir del programa\n");
                    scanf("%d", &opc2);
                    if(opc2 == 1){
                        break;
                    }
                    if(opc2 == 2){
                        menu(opc);
                    }
                    if(opc2 == 3){
                        cerrarPrograma();
                    }
                    else{
                        printf("Opcion incorrecta\nIntente nuevamente\n");
                    }
		        }
		    }
		    if(opc3 == 4){
		        cerrarPrograma();
		    }

		    }
		}
		if(opc == 6){
		    //system("cls");
		    printf("----------------------------------------\n");
		    printf("\tModifica la clave\n");
		    int opc2 = 0, ejemplo = 0;
            while(opc2 != 4){
		    printf("1.- Modificar un registro por nombre\n");
		    printf("2.- Modificar un registro por salario\n");
		    printf("3.- Modificar un registro por clave\n");
		    printf("4.- Salir al menu principal\n");
		    printf("5.- Salir del programa\n");
		    scanf("%d", &opc2);
		        if(opc2 == 1){
		            int opc3 = 0;
		            printf("\tBorrar un registro por nombre\n");
		            printf("Ingrese el nombre que desea borrar\n");
		            scanf("%d", &ejemplo);
		            //system("cls");
		            while(opc3 != 2){
                        printf("1.- Borrar otro registro\n");
		                printf("2.- Salir al menu principal\n");		    
		                printf("3.- Salir del programa\n");
		                scanf("%d", &opc3);
		                if(opc3 == 1){
		                    break;
		                }
		                if(opc3 == 2){
		                    menu(opc);
		                }
		                if(opc3 == 3){
		                    cerrarPrograma();
		                }
		                if(opc3 != 1 & opc3  != 2 & opc3 != 3){
		                    printf("Opcion incorrecta\nIntente nuevamente\n");
		                }
		            }

		            
		        }
		        if(opc2 == 2){
		            int opc3 = 0;
                    printf("\tBorrar un registro por salario\n");
		            printf("Ingrese el salario que desea borrar\n");
		            scanf("%d", &ejemplo);
		            //system("cls");
		            while(opc3 != 2){
                        printf("1.- Borrar otro registro\n");
		                printf("2.- Salir al menu principal\n");
		                printf("3.- Salir del programa\n");
		                scanf("%d", &opc3);
		                if(opc3 == 1){
		                    break;
		                }
		                if(opc3 == 2){
		                    menu(opc);
		                }
		                if(opc3 == 3){
		                    cerrarPrograma();
		                }
		                if(opc3 != 1 & opc3  != 2 & opc3 != 3){
		                    printf("Opcion incorrecta\nIntente nuevamente\n");
		                }
		            }

		            
		        }
		        if(opc2 == 3){
		            int opc3 = 0;
                    printf("\tBorrar un registro por clave\n");
		            printf("Ingrese la clave que desea borrar\n");
		            scanf("%d", &ejemplo);
		            //system("cls");
		            while(opc3 != 2){
                        printf("1.- Borrar otro registro\n");
		                printf("2.- Salir al menu principal\n");
            		    printf("3.- Salir del programa\n");
		                scanf("%d", &opc3);
		                if(opc3 == 1){
		                    break;
		                }
		                if(opc3 == 2){
		                    menu(opc);
		                }
		                if(opc3 == 3){
		                    cerrarPrograma();
		                }
		                if(opc3 != 1 & opc3  != 2 & opc3 != 3){
		                    printf("Opcion incorrecta\nIntente nuevamente\n");
		                }
		            }

		            
		        }
		        if(opc2 == 5){
		            cerrarPrograma();
		        }
		        else if(opc2 != 1 & opc2 != 2 & opc2 != 3 & opc2 != 4 & opc2 != 5){
		            printf("Opcion incorrecta\nIntente nuevamente.\n");
		        }

		    }

		}
		if(opc == 7){
		    cerrarPrograma();
		}
		else if(opc != 7 & opc != 1 & opc != 2 & opc != 3 & opc != 4 & opc != 5 & opc != 6){
			printf("----------------------------------------\n");
		    printf("Opcion incorrecta\nIntente nuevamente.\n");
		}
		}
	
	
	
	}

int main(){
    setlocale(LC_ALL,"");
	int opc = 0;
    menu(opc);
	return 0;
}

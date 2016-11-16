    // Funcion para escoger una modalidad de juego
//Cambie esta función de "if" a una función "switch" para que tener mejor orden.

void modalidad_de_juego ()
{
    printf("Ajedrez.\n");
    printf("Escoge una opción.\n");
    printf("1.Soliario.\n 2.Multijugador.\n 3.Tutorial \n 4.Salir");
    
    switch(opcion){
        case 1:
        printf("\n");
        jugar_vs_ia(); //Enviar a la función
        return 0;
        break;
            
            case 2:
            printf("\n");
            jugar_vs_persona(); //Enviar a la función
            return 0;
            break;
            
                case 3:
                printf("\n");
                instrucciones();
                return 0;
                break;
                
                    case 4
                    return 0;
                    break;
            
        default: //Otra opción.
           printf("Opción inválida.\n");
           printf("Intenta otra vez.\n");
           return 0; 

    }
}

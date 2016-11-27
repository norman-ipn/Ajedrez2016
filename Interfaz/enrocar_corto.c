void enrocar_corto(char tablero[8][8])
{
    
   /* Recomiendo que hay que hacer una funcion para piezas blancas y otra para piezas negras*/
    int posicion_rey;
    int posicion_torre;
    int resultado=0;
   resultado = verificar_movimiento(tablero);
    /*
    0 = hacer enroque
    1= no se puede hacer el enroque
    */
    if (resultado==0)
    {
      
    }
    if (resultado==1)
    {
        printf (" \n No se puede realizar el movimeinto");
    }
    
 
    return 0;
}

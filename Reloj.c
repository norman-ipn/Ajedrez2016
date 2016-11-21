#include <stdio.h>
#include <stdlib.h>

void Reloj(int hr, min, seg)
{
      int hr=0;
      int min=0;
      int seg=o;
      
      printf("Reloj\n");
      /*bucle para controlar los segundos*/

      for(seg = 0; seg <= 86400; seg= seg+1)
      {
            if(seg == 60)
                  /*si los segundos llegan a 60*/
                  {
                        min= min+1;
                         /*minutos aumentan a 1*/
                        seg=0;
                        /*segundos se reinicia a 0*/
                  }
            
            if(min == 60)
                  /*si los minutos llegan a 60*/
                  {
                        hr++;
                        /*horas aumentan a 1*/
                        min=0;
                        /*minutos se reinicia a 0*/
                  }

            if(hr==24)
            {
                  seg=0;
                  /*segundos se reinicia a 0*/
                  min=0;
                  /*minutos se reinicia a 0*/
                  hr=0;
                  /*horas se reinicia a 0*/
            }
                  printf("%d %d %d\n",hr,min,seg);
      }
}

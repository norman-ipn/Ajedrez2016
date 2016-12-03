#include "red.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <linux/if_packet.h>
#include <net/ethernet.h>

/* 
  importante, los socket siempre deben correrse en modo root, para estar
  para estar en modo root simplemente escribe:
          $sudo su
   ;)
*/   

int 
main (void)
{ 
        int packet_socket;
        
        packet_socket  = socket (AF_PACKET, SOCK_RAW, htons(ETH_P_ALL));
        
        if (packet_socket == -1)
          {
                perror ("Error al abrir el socket");
                return -10;
          }
        else
          {
                perror ("Exito al abrir el socket");
          }
        
        close (packet_socket);
}
        
        
        

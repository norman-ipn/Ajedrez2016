#include "red.h"

/* 
  importante, los socket siempre deben correrse en modo root, para estar
  para estar en modo root simplemente escribe:
          $sudo su
   ;)
*/


/*Para hacer una conexión entre las dos computadoras es necesario hacer tener un cliente y un servidor*/
/*Aparte de que esten en la misma RED ya que se hara en LAN*/


void *
atender_cliente (void *arg)	/* metodo para aceptar al jugador */
{
  int cl = 0;
  cl = (long) arg;
  write (cl, "hola!\r\n", 7);
  close (cl);
  return NULL;
}

/*Creación del cliente (Jugador que busca partida) (Llamar esta función cuando para conectarse a un anfitrion)*/
void
conectarse_a_anfitrion (void)
{
  struct addrinfo hints;
  struct addrinfo *res = 0;	/*Struct para leer dirección */
  int rc = 0;
  int s = 0;
  char buf[8192];		/*Buffer */
  ssize_t n = 0;

  memset (&hints, 0, sizeof (hints));
  hints.ai_socktype = SOCK_STREAM;

  rc = getaddrinfo ("Nombre de servidor", "Contraseña", &hints, &res);	/*Este nombre y contraseña lo ponen los jugadores anfitriones */
  if (rc)
    {
      fprintf (stderr, "%s: %s", argv[0], gai_strerror (rc));
      return EXIT_FAILURE;
    }

  rc = connect (s, res->ai_addr, res->ai_addrlen);
  if (rc < 0)
    {
      perror ("connect");
      return EXIT_FAILURE;
    }

  /* Liberamos "res", ya no lo necesitamos */
  freeaddrinfo (res);
}

int
main_temporal (void)
{
  int packet_socket = 0;

  /*Conectarse a anfitrion */
  conectarse_a_anfitrion ();

  packet_socket = socket (AF_PACKET, SOCK_RAW, htons (ETH_P_ALL));

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

  printf ("\n");
  return 0;
}

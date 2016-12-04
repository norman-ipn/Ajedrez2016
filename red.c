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


/* ---------------POSIBLE SERVIDOR ------------------------*/
#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
main ()
{
  int server_sockfd, client_sockfd;	/* descriptores de sockets */
  int server_len, client_len;	/*tamaños de las estructuras */
  struct sockaddr_in server_address;	/*declaracion de estructuras */
  struct sockaddr_in client_address;
  char c[1024];			/*cadena del cliente */
  char ch[1024];		/*cadena del servidor */
  int inicio = 0;		/*determina el inicio de sesion */
  char cs[1024];		/*cadena del servidor */
  int bufs;			/*almacenamiento del tamanio cadena server */
  int ciclo = 1;		/*variable para ciclo de lectura escritura */
  int puerto;			/*variable para el puerto */
  system ("clear");
  printf ("La direccion del servidor es 127.0.0.1\n\n");
  printf ("Por favor introduzca el puerto de escucha: \n\n");
  scanf ("%d", &puerto);
  server_sockfd = socket (AF_INET, SOCK_STREAM, 0);
/* se llena la estructura para el servidor con los datos necesarios*/
  server_address.sin_family = AF_INET;
  server_address.sin_addr.s_addr = inet_addr ("127.0.0.1");
  server_address.sin_port = puerto;
  server_len = sizeof (server_address);
/*avisamos al sistema operativo la creacion del socket*/
  bind (server_sockfd, (struct sockaddr *) &server_address, server_len);
/*decimos al server que quede escuchando*/
  listen (server_sockfd, 5);
  printf ("SERVIDOR EN ESPERA...\n");
  while (ciclo)
    {
/*acepta la conexion con el cliente actual*/
      client_sockfd =
	accept (server_sockfd, (struct sockaddr *) &client_address,
		&client_len);
      if (inicio == 0)
	{
	  printf ("------SESION INICIADA------\n");
	  printf ("CLIENTE CONECTADO\n");
	  strcpy (ch, "SERVIDOR CONECTADO...");
	  send (client_sockfd, ch, 1024, 0);
	  inicio = 1;
	}
      recv (client_sockfd, cs, 1024, 0);
      printf ("El cliente dijo: %s\n", cs);
      printf ("ingrese una cadena: \n");
      scanf ("%*c%[^\n]", c);
      send (client_sockfd, c, 1024, 0);
      close (client_sockfd);
    }
  close (server_sockfd);
}

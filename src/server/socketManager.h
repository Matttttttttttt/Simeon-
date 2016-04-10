#include<sys/socket.h>
#include<arpa/inet.h> 

/* represent an incoming client*/
struct client
{
	int id;
	char *name;

};
typedef struct client Client;




/*configure an ip_address*/
void createAddr(struct sockaddr_in *server, int port);

struct sockaddr_in *addSockaddr_in();

/*Create a passive socket*/
int createPassiveSocket(int port);


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h> 

int sockfd;
char buffer[3];

void error(const char *msg) {
	perror(msg);
	exit(0);
}

int client_init(int portno, char *server_string) {
	struct sockaddr_in serv_addr;
	struct hostent *server;

	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if (sockfd < 0)
		error("ERROR opening socket");
	server = gethostbyname(server_string);
	if (server == NULL) {
		fprintf(stderr, "ERROR, no such host\n");
		return -1;
	}
	bzero((char *) &serv_addr, sizeof(serv_addr));
	serv_addr.sin_family = AF_INET;
	bcopy((char *) server->h_addr, (char *) &serv_addr.sin_addr.s_addr,
			server->h_length);
	serv_addr.sin_port = htons(portno);
	if (connect(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
		error("ERROR connecting");
		return -2;
	}
	fprintf(stdout, "Connection established");
	return 0;
}

int client_send_EOC(void) {

	int n;

	buffer[0] = 'e';
	buffer[1] = 'o';
	buffer[2] = 'c';
	n = write(sockfd, buffer, 3);
	if (n < 0) {
		error("ERROR writing to socket");
	}

	return 0;
}
int client_send(char xD, char yD) {

	int n;
	buffer[0] = xD;
	buffer[1] = yD;
	buffer[2] = ';';
	n = write(sockfd, buffer, 3);
	if (n < 0) {
		error("ERROR writing to socket");
	}
	return 0;

}

void client_close(void) {

	fprintf(stdout, "closing socket");
	close(sockfd);
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h> 
#include <fcntl.h>

//int sockfd;
//char buffer[3];

void error(const char *msg) {
	perror(msg);
	exit(0);
}

int client_init(int portno, char *server_string) {
	struct sockaddr_in serv_addr;
	struct hostent *server;

	int sockfd = socket(AF_INET, SOCK_STREAM, 0);
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
	fprintf(stdout, "Connection established\n");
	return sockfd;
}

int client_send(int sockfd, char buff[]) {

	int n;

	n = write(sockfd, buff, 3);
	if (n != 3) {
		error("ERROR writing to socket");
	}
	return 0;

}

int client_read(int sockfd, char buff[]) {
	int nwrite;
	nwrite = read(sockfd, buff, 1);
	if (nwrite < 0)
//		error("read failed");
	return nwrite;

}

void client_close(int sockfd) {

	fprintf(stdout, "closing socket");
	close(sockfd);
}

int setNonblocking(int fd) {
	int flags;

	/* If they have O_NONBLOCK, use the Posix way to do it */
#if defined(O_NONBLOCK)
	/* Fixme: O_NONBLOCK is defined but broken on SunOS 4.1.x and AIX 3.2.5. */
	if (-1 == (flags = fcntl(fd, F_GETFL, 0)))
		flags = 0;
	return fcntl(fd, F_SETFL, flags | O_NONBLOCK);
#else
	/* Otherwise, use the old way of doing it */
	flags = 1;
	return ioctl(fd, FIOBIO, &flags);
#endif
}

//int non_blocking_connect(char *address, int port)
//{
//int x,s;
//struct sockaddr_in sin;
//
//  s=socket(AF_INET, SOCK_STREAM, 0);
//  x=fcntl(s,F_GETFL,0);              // Get socket flags
//  fcntl(s,F_SETFL,x | O_NONBLOCK);   // Add non-blocking flag
//  memset(&sin, 0, sizeof(struct sockaddr_in));
//	sin.sin_family = AF_INET;
//	sin.sin_port = htons(port);
//	sin.sin_addr.s_addr = name_resolve(address);
//	if (sin.sin_addr.s_addr == NULL){
//		return (-1);
//	}
//	printf("ip: %s\n", inet_ntoa(sin.sin_addr));
//	x = connect(s, (struct sockaddr *) &sin, sizeof(sin));
//	if (x < 0)
//		return (-1);
//	return (s);
//}

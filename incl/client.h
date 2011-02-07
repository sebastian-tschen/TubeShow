/*
 * client.h
 *
 *  Created on: Jan 29, 2011
 *      Author: sebastian
 */

#ifndef CLIENT_H_
#define CLIENT_H_


#endif /* CLIENT_H_ */


int client_send_EOC(void);

int client_send(int sockfd,char buff[]);
int client_init(int portno, char *server_string);
void client_close(int sockfd);


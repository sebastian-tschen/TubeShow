
#include <myp18f4520.h>
#include <stdio.h>
#include <client.h>

int displaySocket;
int delaySocket;
int controlSocket;
int commandSocket;
void pcInit(void) {

	PORTC = 0b00010000;
	PORTB = 0b00000000;

	displaySocket = client_init(12345, "localhost");
	commandSocket = client_init(12346, "localhost");
	setNonblocking(commandSocket);
//	printf("%d\n", displaySocket);
//	fflush(stdout);

}

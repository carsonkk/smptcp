#ifndef THREADS_H
#define THREADS_H

/*includes*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <inttypes.h>
#include <getopt.h>
#include <errno.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <pthread.h>
#include "mptcp.h"

/*structs*/
typedef struct arg_t
{
	int32_t port;
	char *filename;
	struct sockaddr_in serv_addr;
	struct sockaddr_in clnt_addr;
	socklen_t serv_addr_len;
	socklen_t clnt_addr_len;
}arg_t;
typedef struct ret_t
{
	int32_t bytes_sent;
	int32_t bytes_dropped;
	int32_t bytes_resent;
	int32_t ret;
}ret_t;

/*variables*/
char *err_m;

/*functions*/
void *mptcp_thread(void *arg);

#endif

/*	fprintf(stdout, "n_val: %d\n", num_interfaces);
	fprintf(stdout, "h_val: %s\n", hostname);
	fprintf(stdout, "p_val: %d\n", port);
	fprintf(stdout, "f_val: %s\n", filename);
*/
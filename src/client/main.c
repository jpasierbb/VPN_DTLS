#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <netdb.h>
#include <fcntl.h>
#include <signal.h>
#include <linux/if.h>
#include <linux/if_tun.h>
#include <arpa/inet.h>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include <openssl/conf.h>


#define SERVER_HOST "192.168.56.125"
#define PORT 54345
#define MTU 1400
#define BIND_HOST "0.0.0.0"

int main(int argc, char **argv) {

    return 0;
}

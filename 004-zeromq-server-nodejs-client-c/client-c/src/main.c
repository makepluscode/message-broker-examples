#include <zmq.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
  void *context = zmq_ctx_new();
  void *requester = zmq_socket(context, ZMQ_REQ);

  zmq_connect(requester, "tcp://localhost:3000");

  int request_nbr;

  char buffer[10];

  zmq_send(requester, "hello", 5, 0);

  memset(buffer, 0x00, sizeof(buffer));
  zmq_recv(requester, buffer, sizeof(buffer), 0);
  printf("client received %s\n", buffer);

  zmq_close(requester);
  zmq_ctx_destroy(context);
  return 0;
}
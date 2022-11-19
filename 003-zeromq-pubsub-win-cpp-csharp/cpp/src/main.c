#include <zmq.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>

int main(void)
{
  void *context = zmq_ctx_new();
  void *responder = zmq_socket(context, ZMQ_REP);
  int rc = zmq_bind(responder, "tcp://*:5555");
  assert(rc == 0);

  while (1)
  {
    char buffer[16];
    zmq_recv(responder, buffer, 8, 0);
    sleep(1);
    zmq_send(responder, "World", 5, 0);
  }
  return 0;
}
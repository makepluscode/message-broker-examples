var zmq = require('zeromq')
  , sock = zmq.socket('pub');

sock.bindSync('tcp://127.0.0.1:4242');
console.log('Publisher bound to port 4242');

setInterval(function(){
  console.log('sending a multipart message envelope');
  sock.send(['kitty cats', 'meow!']);
}, 500);
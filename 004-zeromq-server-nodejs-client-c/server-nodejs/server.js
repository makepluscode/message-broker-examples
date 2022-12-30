const zmq = require("zeromq")

function process(msg, callback) {
  console.log("server starts to process msg : " + msg)

  setTimeout(function() {
    // do process here
    callback(true)
  }, 1000);
}

async function run() {
  const socket = new zmq.Reply

  await socket.bind("tcp://*:3000")

  for await (const [msg] of socket) {
    process(msg, function(result){
      socket.send("ok")
    });
  }
}

run()
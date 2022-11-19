using System;

using NetMQ;
using NetMQ.Sockets;

public class Program
{
    static void Main(string[] args)
    {
        byte[] msg = System.Text.Encoding.UTF8.GetBytes("Hello");

        using (var client = new RequestSocket())
        {
            client.Connect("tcp://127.0.0.1:5555");
            client.SendFrame(msg);

            String feedback = client.ReceiveFrameString();
            Console.WriteLine(feedback);
        }

    }
}

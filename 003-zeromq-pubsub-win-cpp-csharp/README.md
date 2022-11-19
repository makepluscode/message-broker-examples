# ZeroMQ publish and subscribe c++ example

This code is an example to publish and subscribe message using zeromq written in C++ and C# on Windows10.

https://gist.github.com/hmartiro/df1eb214f77f549b3691

<hr/>

### Environment
- Windows10, MSYS2 MINGW64, gcc (Rev6, Built by MSYS2 project) 12.2.0

### How to - C# client
How to get NetMQ by using NuGet

```
PM> NuGet\Install-Package NetMQ -Version 4.0.1.10
```

https://www.nuget.org/packages/NetMQ/

### How to - C++ server
How to get NetMQ by using pacman on MSYS2+MINGW64

```
$ pacman -S mingw-w64-x86_64-zeromq
```
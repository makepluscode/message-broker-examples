# ZeroMQ publish and subscribe c++ example

This code is an example to publish and subscribe message using zeromq written in C++ and C# on Windows10.

https://gist.github.com/hmartiro/df1eb214f77f549b3691

<hr/>

### Environment
- Windows10, MSYS2 MINGW64, gcc (Rev6, Built by MSYS2 project) 12.2.0

### How to

This is how to build and run.

```
$ mkdir build && cd build
$ cmake ..
$ make ..
```

On terminal 1
```
$ ./pub
```

On terminal 2
```
$ ./sub
```

https://packages.msys2.org/package/mingw-w64-x86_64-zeromq

# opencv C snap example

This is an example regarding Opencv and C implementation. 
The main.cpp is contained inside the **src** folder. it is 
compiled while building the snap.

The Opencv library could be obtained from ubuntu store or it is possible to compile 
an arbitrary library version while building (this part is commented on the snapcraft.yaml)


## Building the snap
launching the command below the app is being build for your PC architecture.
amd64 on a common PC and arm64 in case we're using a raspberry PI or similar.
```bash
$ snapcraft
```

## Building for arm64 on amd64
it is possible to build for different architectures using the remote-build option.
```bash
$ snapcraft remote-build --build-on=amd64,arm64

```


## Manual Installation
```bash
$ cmake .
$ make
```

# opencv C snap example

This is an example regarding Opencv and C implementation. 
The main.cpp is contained inside the **src** folder. it is 
compiled while building the snap.

The Opencv library could be obtained from ubuntu store or it is possible to compile 
an arbitrary library version while building (this part is commented on the snapcraft.yaml)

## Manual Installation
```bash
$ cmake .
$ make
```

## Installing as a snap
```bash
$ snapcraft
$ sudo snap install snapname_0.1_*.snap --dangerous --devmode # we're not signed
```


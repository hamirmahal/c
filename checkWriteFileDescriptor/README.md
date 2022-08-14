Change to this directory with

```sh
cd checkWriteFileDescriptor
```

if you're not in it already, and run

```sh
cc -Wall -std=gnu11 -o ./checkWriteFileDescriptor checkWriteFileDescriptor.c
```

to compile the C source file.

```sh
strace ./checkWriteFileDescriptor 2>&1 | tee output.txt
```

shows you the system calls this program makes, and writes that output to a text file.

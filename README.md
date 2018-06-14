# hello_mod
An introduction to hello world kernel module.

How to compile

1. Compile it on X86
make; make install

2. Compile it for ARM64
make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- KERNEL_SRC=/your_kernel_path

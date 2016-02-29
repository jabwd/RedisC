# RedisC
A hiredis wrapper for Swift PM
This package is intended to make it easy for any user to include Redis support to their Swift project
by opening up the `hiredis` library to the Swift runtime.

Notice: libhiredis needs to be installed on your system before this actually does anyhting.
For ease of use it has been included as a submodule.

# Error while loading libhiredis.so: File not found
It seems common that after installing libhiredis in either /usr/lib/ or /usr/local/lib the linker can still not find the binary. I case it happens simply run:
`$ sudo ldconfig`

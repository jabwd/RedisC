clang -c redis_wrapper.c -o redis_wrapper.o
ar rcs libswiftredis.a redis_wrapper.o

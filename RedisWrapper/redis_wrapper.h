#ifndef __REDIS_WRAPPER_H
#define __REDIS_WRAPPER_H

#include <hiredis/hiredis.h>

redisReply *redisCmd(redisContext *ctx, const char *cmd);
redisReply *setCmd(redisContext *ctx, const char *value, const char *key, size_t len);

#endif

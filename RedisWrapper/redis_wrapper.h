#ifndef __REDIS_WRAPPER_H
#define __REDIS_WRAPPER_H

#include <hiredis/hiredis.h>

redisReply *redisCmd(redisContext *ctx, const char *cmd);


#endif

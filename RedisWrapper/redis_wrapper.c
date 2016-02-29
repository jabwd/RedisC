#include "redis_wrapper.h"

redisReply *redisCmd(redisContext *ctx, const char *cmd)
{
	return redisCommand(ctx, cmd);
}

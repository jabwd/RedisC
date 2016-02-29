#include "redis_wrapper.h"

redisReply *redisCmd(redisContext *ctx, const char *cmd)
{
	return redisCommand(ctx, cmd);
}

redisReply *setCmd(redisContext *ctx, const char *value, const char *key, size_t len)
{
	return redisCommand(ctx, "SET %s %b", key, value, len);
}

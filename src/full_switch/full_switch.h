#include "../md5/md5.h"

uint8_t get_hash_sum(char *);

#define sswitch(X) switch(get_hash_sum(X))
#define scase(Y) case get_hash_sum(Y)

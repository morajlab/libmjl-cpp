#include <stdlib.h>
#define prepare_chain(T) \
              struct Chain {\
                  T value;\
                  struct Chain *next;\
              };\
              static struct Chain *HEAD = NULL;\
              struct Chain *insert_chain(T value) {\
                  struct Chain *ptr = (struct Chain *) malloc(sizeof(struct Chain));\
                  ptr->value = value;\
                  ptr->next = HEAD;\
                  HEAD = ptr;\
                  return HEAD;\
              }

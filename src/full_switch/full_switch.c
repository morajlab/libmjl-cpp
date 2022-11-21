#include "full_switch.h"

uint8_t get_hash_sum(char *content) {
  uint8_t sum = 0;
  uint8_t *ptr = md5String(content);

  for(unsigned int i = 0; i < 16; ++i){
		sum += ptr[i];
	}

  return sum;
}

int main() {
  char *value = "SomeValue";

  sswitch(value) {
    scase("new"):
      puts("NEW");
      break;
    scase("apple"):
      puts("APPLE");
      break;
    default:
      puts("DEFAULT");
      break;
  }

  return 0;
}

#include <stdio.h>

#define function void
#define console_log(x) puts(x)

function sayHello() {
  console_log("Hello, World !");
}

int main() {
  sayHello();

  return 0;
}

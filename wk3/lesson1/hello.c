#include "mythread.h"

void Thello(int id) {
  while (1) {
    // printf("%c", "_ABCDEFGHIJKLMNOPQRSTUVWXYZ"[id]);
  }
}

int main() {
  for (int i = 0; i < 6; i++) {
    create(Thello);
  }
  pid_t pid = getpid();
  printf("Main Process ID is: %d\n", pid);
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[argc + 1]) {

 if (argc < 2) {
  printf("wgrep: searchitem [file..]\n");
  exit(1);
 }

 return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[argc + 1]) {

 if (argc < 2) {
  printf("wgrep: searchterm [file ...]\n");
  exit(1);
 }

 char* const pattern = argv[1]; // search item

 char* line = NULL;
 size_t linecap = 0;
 ssize_t linelen; 
 

 if (argc == 2) {
  while((linelen = getline(&line, &linecap, stdin)) > 0) {
   if (strstr(line, pattern)) {
    fputs(line, stdout);
   }
  }
  free(line);
  exit(0);
 }

 
 return 0;
}

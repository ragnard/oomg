#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
 
int main(int argc, char *argv[]) {
  int szalloc = 65536, nallocs = INT_MAX;
  if (argc >= 2) {
    szalloc = atoi(argv[1]);
  }
  if (argc == 3) {
    nallocs = atoi(argv[2]);
  }  
  
  for (int i = 0; i < nallocs; i++) {
    void *ret = calloc(szalloc, sizeof(int8_t));
    if (ret == NULL) {
      printf("malloc failed after %d iterations\n", i);
      return -1;
    }
    
  }
  
  return 0;
}

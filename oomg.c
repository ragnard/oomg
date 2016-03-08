#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
 
int main(int argc, char *argv[]) {
  int szalloc = 65536, nallocs = INT_MAX;
  if (argc >= 1) {
    szalloc = atoi(argv[0]);
  }
  if (argc == 2) {
    nallocs = atoi(argv[1]);
  }  
  
  for (int i = 0; i < nallocs; i++) {
    void *ret = malloc(szalloc);
    if (ret == NULL) {
      printf("malloc failed after %d iterations\n", i);
      return -1;
    }
    
  }
  
  return 0;
}

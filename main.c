#include <stdio.h>
#include <string.h>
#include "vault.h"
#include "storage.h"
#include "crypto.h"

int main(int argc, char* argv[]) {
  if(argc<2) {
    printf("usage: add/list/delete\n");
    return 1;
  }

  load_records();

  if(strcmp(argv[1], "add")==0) {
    add_record(argv[2], argv[3], argv[4]);
    save_records();
  }
  else if(strcmp(argv[1], "list") ==0) {
    list_records();
  }
  printf("done\n");
  return 0;
}


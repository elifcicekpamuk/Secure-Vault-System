#include "vault.h"
#include <stdio.h>
#include <string.h>

void add_record(const char* service, const char* user, const char* pass) {
  FILE* f = fopen("data/vault.txt", "a");
  fprintf(f, "%s|%s|%s\n", service, user, pass);
  fclose(f);
}

void list_records() {
  FILE* f = fopen("data/vault.txt", "r");
  char line[256];

  while(fgets(line, sizeof(line), f)) {
    printf("%s", line);
  }
  fclose(f);
}


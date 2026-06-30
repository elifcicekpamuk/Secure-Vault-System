#include "crypto.h"
#include <stdlib.h>
#include <stdio.h>

#define VAULT_FILE "data/vault.gpg"
#define TEMP_FILE "data/vault.txt"

void decrypt_vault() {
  char cmd[256];
  snprintf(cmd, sizeof(cmd),  "gpg -d %s > %s", VAULT_FILE, TEMP_FILE);
  system(cmd);
}

void encrypt_vault() {
  char cmd[256];
  snprintf(cmd, sizeof(cmd), "gpg -c --yes data/vault.txt");
  system(cmd);
}

int vault_exists() {
  FILE* f = fopen(VAULT_FILE, "r");
  if(f==NULL) {
    return 0;
  }
  fclose(f);
  return 1;
}


#include "storage.h"
#include "crypto.h"
#include <stdio.h>
#include <stdlib.h>

#define TEMP_FILE "data/vault.txt"

void load_records() {
  decrypt_vault();
}

void save_records() {
  encrypt_vault();
  remove(TEMP_FILE);
}

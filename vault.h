#ifndef VAULT_H
#define VAULT_H

#define MAX_LEN 100

typedef struct {
  char service[MAX_LEN];
  char username[MAX_LEN];
  char password[MAX_LEN];
} Record;

void add_record(const char* service, const char* user, const  char* pass);
void list_record();
void delete_record(const char* service);
Record* find_record(const char* service);

#endif

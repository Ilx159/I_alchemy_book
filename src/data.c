#include <sqlite3.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "I_alch_types.h"

typedef struct{
  
  

} DB_struct;

int8_t open_database(char *name, sqlite3 *db);
int8_t create_database(char *name);
int8_t create_table(const char *Table);
int8_t create_ingredient(Ingredient *Ing);
int8_t create_potion(Potion *Pot);


int8_t open_database(char *name, sqlite3 *db){
    if(sqlite3_open(name, &db) != SQLITE_OK){
      fprintf(stderr, "Error trying to open DataBase: %s\n", sqlite3_errmsg(db)); 
      sqlite3_close(db);
      return 1;
    }
  return 0;
}

int8_t create_database(char *name){
  if(!system("touch %s")) return 1;
  return 0;
}

int8_t create_table(const char *Table){
  if(sqlite3_exec(db, Table, NULL, NULL, NULL) != SQLITE_OK){
    fprintf(stderr, "Error trying to create the table: %s\n", sqlite3_errmsg(db));
    return 1;
  }
  return 0;
}

int8_t create_ingredient(){
}

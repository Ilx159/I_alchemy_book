#define I_ALCH_TYPES_H
#ifdef I_ALCH_TYPES_H

#define MAX_LENGTH_NAME 256
#define MAX_LENGTH_TAG 256
#define MAX_LENGTH_INFO 4096
#define MAX_TAGS 16

typedef struct{

  char name[MAX_LENGTH_NAME];
  char tag[MAX_TAGS][MAX_LENGTH_TAG];
  char info[MAX_LENGTH_INFO];

} Ingredient;

typedef struct{

  char name[MAX_LENGTH_NAME];
  char tag[MAX_TAGS][MAX_LENGTH_TAG];
  char info[MAX_LENGTH_INFO];

} Potion;

#endif
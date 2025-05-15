typedef struct CharList {
  char arr[30];
} CharList;
void CharList_toString (CharList * this, FILE * file) {
  fprintf (file , "inside string interface %.*s", 30, (this ->arr ));
}


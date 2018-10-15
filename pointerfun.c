#include "pointerfun.h"

int main(int argc, char const *argv[]) {
  int value = 39585;
  int* pointer = &value;

  print_integers(value, pointer);
  change_integers(value, pointer);
  print_integers(value, pointer);
  return 0;
}

void print_integers(int value, int* pointer){
  printf("Got an integer value %d and an address to an integer with value %ls \n",value,pointer );
}

void change_integers(int value, int* pointer){
  value = 200000;
  *pointer = int_value;
}

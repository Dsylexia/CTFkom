#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void easy();
int check_number();

int main() {
  
  printf("Welcome!\n");
  printf("What is ur favorit number? ");
  
  int number_input;
  scanf("%i", &number_input);

  printf("\nHmmmmmmmm\n");
  sleep(2);

  if (number_input == check_number()) {
    easy();
  } else {
    printf("\nI dislike that number\n");
  }

  return 0;
}

void easy() {
  system("cat flag.txt");
}

int check_number(){
  return 1337;
}
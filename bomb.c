#include <stdio.h>
#include "support.c"
#include "phases.c"

int main(void) {
  char* input;

  printf("Welcome to my fiendish little bomb. You have 2 phases with\n");
  printf("which to blow yourself up. Have a nice day!\n");

  input = read_line();
  phase_1(input);
  printf("Phase 1 defused. How about the next one?\n");

  input = read_line();
  phase_2(input);
  printf("Congratulations! You've defused the bomb!\n");

  return 0;
}

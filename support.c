#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

/*
 * BOOM!!!
 * The bomb has blown up.
 *
 * (failure)
 */
int explode_bomb() {
  FILE* fs;
  fs = fopen("nuke.txt", "r");

  while (feof(fs) == 0) {
    char str[100];
    fgets(str, 100, fs);
    printf("%s", str);
  }
  printf("The bomb has blown up.\n");
  exit(1);
}

/*
 * Ctrl-C detect.
 */
void INThandler(int sig) {
  char c;

  signal(sig, SIG_IGN);

  printf("\nWell, Ctrl-C won't work for my bomb.\n");
  sleep(2);
  printf("...\n");
  sleep(2);
  printf("...Just kidding :)\n");
  sleep(1);
  exit(0);
}

/*
 * gets input to string.
 */
char* read_line() {
  char* buffer = (char*)malloc(sizeof(char) * 50);
  int i = 0;
  char c;
  signal(SIGINT, INThandler);

  while ((c = getchar()) != '\n') {
    buffer[i++] = c;
  }

  buffer[i] = '\0';
  return buffer;
}

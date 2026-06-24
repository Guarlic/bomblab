#include <stdio.h>
#include <string.h>

/*
 * function to read for phase_1
 * if input equals to phase, returns 1, else 0
 */
int func1(char* input, char* phrase) {
  int size = strlen(phrase);

  for (int i = 0; i <= size; i++) {
    if (i == size && input[i] == '\0') return 0;
    if (input[i] != phrase[i]) return 1;
  }

  return 0;
}

/*
 * function to read for phase_2
 * if arr 0~5 --> fibonacci, returns 1, else 0
 */
int func2(int* arr) {
  for (int i = 0; i < 6; i++) {
    if (i < 2) {
      if (arr[i] == 1) continue;
      return 1;
    }

    if (arr[i] == arr[i-1] + arr[i-2]) continue;
    return 1;
  }

  return 0;
}

/*
 * phase_1 function.
 * gets input, and run func1 with input and phrase; "SEHWA white coding :D".
 */
void phase_1(char* input) {
  char* phrase = "SEHWA white coding :D";
  if (func1(input, phrase)) explode_bomb();
}

/*
 * phase_2 function.
 * gets input, and get six numbers with sscanf.
 * then run func2 with arr.
 */
void phase_2(char* input) {
  int arr[6];

  sscanf(
    input,
    "%d %d %d %d %d %d",
    arr, arr + 1, arr + 2, arr + 3, arr + 4, arr + 5
  );
  
  if (func2(arr)) explode_bomb();
}

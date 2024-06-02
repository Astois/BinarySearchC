#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int numlist[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int num2find = 30;

  int size = sizeof(numlist) / sizeof(numlist[0]);
  int low = 0;
  int high = size - 1;

  bool isnumfound = false;

  while (isnumfound == false) {
    int midnum = (low + high) / 2;

    if (numlist[midnum] == num2find) {
      printf("Number: %d\n", num2find);
      printf("Is at position: %d\n", midnum + 1);
      isnumfound = true;
    }

    if (num2find < numlist[midnum]) {
      high = midnum - 1;
    }

    if (num2find > numlist[midnum]) {
      low = midnum + 1;
    }
  }
}

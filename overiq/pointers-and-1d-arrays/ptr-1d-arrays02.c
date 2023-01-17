#include <stdio.h>

int main(int argc, char const *argv[]) {
  int my_arr[5] = {1, 2, 3, 4, 5};
  int i;

  for (i = 0; i < (sizeof(my_arr) / sizeof(my_arr[0])); i++)
  {
    printf("Value of a[%d] = %d ", i, *(my_arr + i));
    printf("Address of a[%d] = %u\n", i, my_arr + i);
  }
  return 0;
}

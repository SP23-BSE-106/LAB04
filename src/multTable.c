/**
 * Author: Munazza Javed
 * Date: 21/10/2023
 *
 * This program generates a multiplication table
 * of the size given as a command line argument.
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{

  if(argc != 2) {
    printf("Error: provide an integer\n");
    exit(1);
  }

  int n = atoi(argv[1]);
  if(n <= 0) {
    printf("empty table!\n");
    exit(0);
  }

  //TODO: place your code here

  printf("Multiplication Table for %d:\n", n);
  for(int i = 1; i <= 10; ++i) {
    printf("%d x %d = %d\n", n, i, n * i);
  }
  return 0;


}




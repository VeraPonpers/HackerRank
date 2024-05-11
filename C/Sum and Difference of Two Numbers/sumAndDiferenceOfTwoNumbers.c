#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int intgA = 0, intgB = 0;
  float floA = 0, floB = 0;

  scanf("%d %d", &intgA, &intgB);
  scanf("%f %f", &floA, &floB);

  printf("%d %d\n", (intgA + intgB), (intgA - intgB));
  printf("%.1f %.1f\n", (floA + floB), (floA - floB));

  return 0;
}

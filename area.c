// write a program to calculate area of circle //
#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
  float radius, area;

  printf("Enter the radius of a circle\n");

  scanf("%f", &radius);

  area = PI*radius*radius;

  printf("Area of the circle = %.2f\n", area);
  return 0;
}


#include <stdio.h>

int main()
{
  int number1;
  int number2;
  int number3;
  double average = 0.0;

  printf("Enter number 1:\n");
  scanf("%d", &number1);

  printf("Enter number2:\n");
  scanf("%d", &number2);

  printf("Enter number3:\n");
  scanf("%d", &number3);

  average = (double)(number1 + number2 + number3) / 3;

  printf("The average is %.2f", average);

  return 0;
}
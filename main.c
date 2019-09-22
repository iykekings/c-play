#include <stdio.h>
#include <ctype.h>

int main()
{
  double gpa;
  int gp;
  int units;

  for (int i = 0; i < 10; i++)
  {
    int unit;
    char score;

    printf("Enter Unit Load for Course %d: ", i + 1);
    scanf("%d", &unit);
    units += unit;

    printf("Enter Grade for Course %d: ", i + 1);
    scanf(" %c", &score);

    switch (toupper(score))
    {
    case 'A':
      gp += 5 * unit;
      break;
    case 'B':
      gp += 4 * unit;
      break;
    case 'C':
      gp += 3 * unit;
      break;
    case 'D':
      gp += 2 * unit;
      break;
    case 'E':
      gp += 1 * unit;
      break;
    case 'F':
      gp += 0 * unit;
      break;
    default:
      fprintf(stderr, "%c is not a valid grade. Grade must be a char A-F\n", score);
      return -1;
    }
  }
  printf("Your GPA is: %.2f\n", (double)gp / units);

  return 0;
}
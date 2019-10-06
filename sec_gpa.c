#include <stdio.h>
#include <ctype.h>

// This makes use of pointers

int cgp(double *res, int *un, int count)
{
  int unit;
  char grade;

  printf("\tEnter Unit Load for Course %d: ", count);
  scanf("%d", &unit);
  *un += unit;

  printf("\tEnter Grade for Course %d: ", count);
  scanf(" %c", &grade);

  switch (toupper(grade))
  {
  case 'A':
    *res += (5 * unit);
    break;
  case 'B':
    *res += (4 * unit);
    break;
  case 'C':
    *res += (3 * unit);
    break;
  case 'D':
    *res += (2 * unit);
    break;
  case 'E':
    *res += (1 * unit);
    break;
  case 'F':
    *res += (0 * unit);
    break;
  default:
    fprintf(stderr, "%c is not a valid grade. Grade must be a char A-F\n", grade);
    return -1;
  }
  return 1;
}


int main()
{
  double gradePoint;
  int units;

  for (int i = 0; i < 2; i++)
  {
    printf("\n_____Please Enter Details for semester %d_____ \n\n", i + 1);
    for (int j = 0; j < 2; j++) {
      int err = cgp(&gradePoint, &units, j + 1);
      if(err == -1) {
        return -1;
      }
    }
  }
  printf("\tYour GPA is: %.2f\n\n", gradePoint / units);

  return 0;
}
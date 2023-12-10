#include <stdio.h>
int main()
{
     int marks[3][3];
     int r, c;
     for (r = 0; r < 3; r++)
     {
          for (c = 0; c < 3; c++)
          {
               printf("\nENTER VALUE AT marks[%d][%d] : ", r, c);
               scanf("%d", &marks[r][c]);
          }
     }
     printf("\n2D Array Values are: \n\n");
     for (r = 0; r < 3; r++)
     {
          printf("\nROW %d :  ", r);
          for (c = 0; c < 3; c++)
          {
               printf("%d ", marks[r][c]);
          }
          printf("\n---------------------------");
     }
     return 0;
}
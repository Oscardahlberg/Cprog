#include <stdio.h>

int main ()
{
   int current_time;
   int x, y, z, a;

   printf("What is current time in seconds?\n");
   scanf("%d", &current_time);

   if ( ( current_time / 3600 ) / 60 == 0 )
   {
      x = 0;
      y = 0;
      z == current_time;
      printf("The time is %d:%d:%d\n", &x, &y, &z);
   }
   else if ( current_time / 3600 == 0)
   {
      z == current_time / 60;
      y == current_time - (z * 60);
      x = 0;
      printf("The time is %d:%d:%d\n", &x, &z, &y);
   }
   else if (current_time / 3600 <= 1)
   {
      x = current_time / 3600;
      z == current_time - ( x * 3600);
      y = z / 60;
      a = z - (y * 60);
      printf("The time is %d:%d:%d\n", &x, &y, &a);
   }

   return 0;
}

#include <stdio.h>
int main ()
{
   int c_h, c_m, c_s;
   int a_h, a_m, a_s;

   printf("What is current time?\n");
   scanf("%d:%d:%d", &c_h, c_m, c_s);
   printf("What is time of alarm?\n");
   scanf("%d:%d:%D", &a_h, a_m, a_s);


   while (current_time < alarm_time)
   {

      printf("%d\n", current_time);
      current_time = current_time + 1;
   }

printf("Alarm\n");

   return 0;
}

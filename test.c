#include <stdio.h>

int main ()
{
   int current_time;
   int alarm_time;
   int s = 1;

   printf("What is current time?\n");
   scanf("%d", &current_time);
   printf("What is time of alarm?\n");
   scanf("%d", &alarm_time);


   while (s)
   {

      if (current_time == 240000)
      {
         current_time = 0;
      }

      if (current_time == alarm_time){
         s = 0;
      }
      else
      {
         printf("%d\n", current_time);
      }

      current_time = current_time + 1;
   }


   printf("Alarm\n");

   return 0;
}

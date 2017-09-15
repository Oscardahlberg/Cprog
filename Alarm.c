#include <stdio.h>

int main ()

{

   /* "s" står för seconds, "m" för minutes och "h" för hours, "c" står för current time, "a" står för alarm time */

   int h_c, m_c, s_c;

   int n = 1;

   int h_a, m_a, s_a;

printf("What is the time?(HH:MM:SS)\n");

scanf("%d:%d:%d", &h_c, &m_c, &s_c);

printf("What is the time of alarm?(HH:MM:SS)\n");

scanf("%d:%d:%d", &h_a, &m_a, &s_a);

printf("\n");

/* While loopen kör tills "n" är noll, vilket är när current time samma som är alarm time */

   while (n)

   {

      /* I början av varje loop så läggs en sekund på */

      s_c = s_c + 1;

      /* När seconds är 60 så återställs seconds till noll och minutes får +1 */

      if ( s_c > 59 )

      {

         m_c = m_c + 1;

         s_c = 0;

      }

      /* När minutes är 60 så nollställs den och så får hours +1 */

      if ( m_c > 59 )

      {

         h_c = h_c + 1;

         m_c = 0;

      }

      /* När hours är 24 så återställs hours, minutes och seconds till noll */

      if ( h_c > 23)

      {

         s_c = 0;

         m_c = 0;

         h_c = 0;

      }
      /* När current second, minute och hour är samma som alarm tiden så slutar loopen och "n" blir noll */

      if ( h_c == h_a && m_c == m_a && s_c == s_a )

      {

         n = 0;

         /* Om "n" är noll skrivs "Alarm!" och programmet är klart */

         printf("Alarm!");

      }

      if ( n==1 )
      {
         /* Om tiden inte är samma som alarm tiden så skrivs current time ut och loopen börjar igen */

         printf("%02d:%02d:%02d\n", h_c, m_c, s_c );
      }

   }

   return 0;

}
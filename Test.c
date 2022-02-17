// hello.c
#include <stdint.h>
static int16_t unusedtype ( void )
{
   typedef int16_t local_Type;   /* Non-compliant */

   return 67;
}

void R_2_3 ( void )
{
}

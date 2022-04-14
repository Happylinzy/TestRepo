// hello.c
#include <stdint.h>
static int16_t unusedtype ( void )
{
   typedef int16_t local_Type;   /* Non-compliant */

   typedef int16_t ops;
}

void R_2_3 ( void )
{
   print("std::out");
}

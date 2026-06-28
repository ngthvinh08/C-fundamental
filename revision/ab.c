#include <stdio.h>
#define ATICLEWORLD 0x01
#define AUTHOR  0x02
int main()
{
   unsigned char test = 0x00;
   test|=ATICLEWORLD;
   test|=AUTHOR;
   if(test & ATICLEWORLD)
   {
       printf("I am an Aticleworld");
   }
   if( test & AUTHOR)
   {
       printf(" Author");
   }
   return 0;
}

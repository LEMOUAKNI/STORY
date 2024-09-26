#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   printf("veuillez entrer un nombre : " );
   scanf("%d", &a);

   float y = a%2;

    if(y==0) {
          printf("a est un nombre pair .");
    }


    else if(y!=0) {
          printf("a est un nombre impair .");
    }


    return 0;
}

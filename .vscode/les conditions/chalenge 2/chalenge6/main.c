#include <stdio.h>


int main(){
    int a;
    printf("veuillez entrer un nombre :");
    scanf("%d",&a);

       if( a<0) {
         printf("a est un nombre negatif:");
       }

    else if( a>0){
        printf("a est un nombre positif :");
    }

    else if( a=0) {
         printf("a est nul");
    }

    return 0;
}

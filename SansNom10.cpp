#include<stdio.h>
#include<stdlib.h>
	
	


int main(){
    int n1, n2, a, b, resultat=0;
	
	printf("veuillez entrer deux nombres \n Numero 1: ");
    scanf("%d",&n1);
    printf("veuillez entrer deux nombres \n Numero 2: ");
    scanf("%d",&n2);
    if (n1 > n2){
        a=n1;
        b=n2;
        }
    else{

        a=n2;
        b=n1;

    }
    while (b != 0){
    if (b % 2 == 1){
        b --;
        resultat += a;
        printf("= %d %d %d \n",a ,b ,resultat);
    }
    else {
        a *= 2;
        b /= 2;
        printf("= %d %d %d \n",a ,b ,resultat);
    }





    }
    printf("= %d",resultat);

    return 0;
   
	}

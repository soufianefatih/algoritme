#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float R , S ,P , D ;
	const float pi=3.14 ;
	
	printf("entrer le rayon : \n");
	scanf("%f",&R);

	
	S=pi* pow(R,2);
	D=2*R ;
	P=pi*D;
	
	printf("la surface= %.2f \n le diametre= %.2f \n piremetre= %.2f",S,D,P);
	
	
	
	
	
	
	
	return 0;
}


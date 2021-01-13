#include<stdio.h>
#include<stdio.h>
#include<math.h>

int main (){
	int a, b ,c ;
	float delta , S1 ,S2 , S3 ;
	printf("entrer la valeur de a: \n");
	scanf("%d",&a);
	printf("entrer la valeur de b: \n");
	scanf("%d",&b);
    printf("entrer la valeur de c: \n");
	scanf("%d",&c);
	delta= pow(b,2)-4*a*c ;
	
	if ( a==0 && b==0 && c==0) {
		printf("tous chiffre est solution");
	}
	else if (a==0 && b==0) {
		printf("aucun solution");
	}
	else if (a==0) {
		
		printf("solution 1er degree x= %f",(double)c/b);
	}
	else if (delta>0) {
		
		S1=(-b-sqrt(delta))/2*a ;
		S2=(-b+sqrt(delta))/2*a ;
		printf("2 solutions S1= %f  S2= %f",S1,S2);
			} 
	else if (delta==0) {
		S3=-b/2*a ;
		printf("une seul solution S3 = %f",S3);
		
	} 
	else {
		
		printf("pas de solutions");
	}		
	
	return 0;
	
}

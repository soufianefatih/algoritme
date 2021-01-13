#include<stdio.h>



int main (){
	int a , b , x,y ;
	printf("enter a : \n");
	scanf("%d",&a);
	printf("enter b : \n");
	scanf("%d",&b);
	x=a , y=b ;
	while (y!=x) {
		if(x>y)
		x-=y ;
		else
		y-=x ;
		printf("%d pcgd %d est %d",a,b,x);
		
		
		
		
		
	}
	
	
	return 0;
	
	
	
}

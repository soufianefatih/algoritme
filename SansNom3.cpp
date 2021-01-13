#include<stdio.h>
#include<stdio.h>
int main (){
	int a ,b ;
	char opr ;
	printf("enter la valeur de a :");
	scanf("%d",&a);
	printf("enter la valeur de b :");
	scanf("%d",&b);
	 printf("enter l'operateur");
	 scanf(" %c",&opr);
	 
	 switch (opr){
	 case '+' : printf("a+b = %d",a+b);
	 break;
	 case '-' : printf("a-b = %d",a-b);
	 break;
	 case '*' : printf("a+b = %d",a*b);
	 break;
	 case '/' : if(b!=0){
	              printf("a/b = %d",a/b);
	     }
	         else
	              printf("ereur");
	
	
		break;
	 	
	 case '%' : if(b!=0) {
		break;
	   
	   
	             printf("a%b = %d",a%b);	
	 	}
	 	  else 
	 	  printf("ereur");
	 	  
	break;
	  
	  	
	 	
	 	
	 }
	
	
	
	
	
}

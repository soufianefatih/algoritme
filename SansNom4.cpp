#include<stdio.h>
#include<stdio.h>

int main () {
	
	int n , i ;
	float moyen ;
	
	
	
	while (n!=-1 || n>0) {
	
      	printf("enter le valeur de n : \n");
	    scanf("%d",&n);
	    
	    if (n==-1) {
	        break ;
	    	
	    	
		}i++ ;
	    moyen = moyen +n ;
	    

	
	
	
	}
	
	printf("le moyen est : %.2f",moyen/i);
	
	
	
	return 0 ;
}



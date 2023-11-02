#include <stdio.h>
 
int thuasoNT(int n){
	printf("\nThua so nguyen to cua %d la: ",n);
	
    for(int i = 2; i <= n; i++){
        int dem=0;
        while(n % i == 0){
            ++dem;
            n /= i;
        }
	    if(dem){
	        if(dem>1) 
				printf("%d^%d", i, dem);
	        else 
				printf("%d", i);
	        if(n>i)
	            printf(" * ");
	    }
    }
}

int main(){
    int n, dem;
    do{
    	printf("\nNhap n>1 = ");
    	scanf("%d", &n);
	}while(n<=1);
	thuasoNT(n);
}
   

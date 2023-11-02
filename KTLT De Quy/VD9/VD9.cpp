#include <stdio.h>

//PHEP TOAN XOR, hoan doi 2gt
char a, b;

int main(){
	a = 'm';
	b = 'n';
	printf("Cho: ");
	printf("\na = %c va b = %c", a, b);
	a = a xor b;
	b = a xor b;
	a = a xor b;
	printf("\nSau khi hoan doi:");
	printf("\na = %c va b = %c", a, b);
	return 0;
}

/*CACH 2
int main()
{
	int temp;
	a = 'i';
	b = 'j';
	printf("Cho: ");
	printf("\na = %c va b = %c", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("\nSau khi hoan doi:");
	printf("\na = %c va b = %c", a, b);
	return 0;
}
*/

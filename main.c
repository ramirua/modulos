#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int a,p;
	
	printf("ingrse un numero: ");
	scanf("%d",&a);
	
	p=a%10;
	a=a/10;
	printf("\nel numero es: %d",a);
	printf("\nel numero es: %d",p);

	
	return 0;
}

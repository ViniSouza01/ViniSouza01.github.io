#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int x,y,z;
	printf("Digite dois números para somá-los:\n");
	scanf("%d",&x);
	scanf("%d",&y);
	z = x + y;
	printf("\n\nO resultado é: %d",z);
}

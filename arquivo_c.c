#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int x,y,z;
	printf("Digite dois n�meros para som�-los:\n");
	scanf("%d",&x);
	scanf("%d",&y);
	z = x + y;
	printf("\n\nO resultado �: %d",z);
}

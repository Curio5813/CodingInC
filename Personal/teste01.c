#include <stdio.h>


int num;
float val;
char carac;
char str[50];


void entrada_e_saida(){

	scanf("%d", &num);
	scanf("%f", &val);
	scanf("%c", &carac);
	scanf("%[^\n]", &str);
	printf("%d%.6f%c%s\n", num, val, carac, str);
	printf("%d\t%.6f\t%c\t%s\n", num, val, carac, str);
	printf("%10d%10.6f%10c%10s", num, val, carac, str);


}


int main(){

	entrada_e_saida();

	return 0;

}


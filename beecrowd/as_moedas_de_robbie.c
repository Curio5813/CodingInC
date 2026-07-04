#include <stdio.h>


int main(){

	int m, salto, n;

	while(scanf("%d", &m) != EOF){
		int v[m];
		int v_r[m];
		int soma = 0;
		int moedas = 0;
		for(int i = 0; i < m; i++){
			scanf("%d", &v[i]);
		    soma += v[i];
		}
		int j = 0;
		for(int i = m - 1; i >= 0; i--){
			v_r[j] = v[i];
			j += 1;
		}
		scanf("%d", &salto);
		moedas += v_r[0];
		n = salto;
		while(n < m){
			moedas += v_r[n];
			n += salto;
		}
		if(moedas == 1){
			printf("Bad boy! I’ll hit you.\n");
		}
		else{
			for(int i = 2; i <= moedas; i++){
				if(moedas % i == 0 && i != moedas){
					printf("Bad boy! I’ll hit you.\n");
					break;
				}
				if(moedas % i == 0 && i == moedas){
					printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
					break;
				}
			}
		}

	}

	return 0;
}

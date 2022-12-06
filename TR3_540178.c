#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){

   	//VariÃ¡veis que podem ser usadas
   	unsigned int x[200];
   	int y;
   	int z;
   	int k;
   	int w;
   	int j; //entrada 
   	int i;

   	//#########################

   	for(i = 0; i < 200; i++){
        x[i] = 0;
   	}


   	while(j != -1){
        printf("Digite um número de 0 a 5000 e -1 para finalizar: ");
        scanf("%d", &j);
        k = j/32;
        if(j != -1){
                x[k] = x[k] | (1 << j%32);
        }
   	}

   	for(i = 0; i < 200; i++){
        y = (32*i);
        while(x[i] != 0){
            if(x[i] & 1 == 1){
                printf("%d ", y);
            }

                x[i] = x[i] >> 1;

                y = y + 1;

        }
   	}


   	//#########################

	return 0;
}
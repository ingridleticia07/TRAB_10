#include <stdio.h>
#include <stdlib.h>


int main(){

   	unsigned int vetor[200];
   	int res;	//resultado
   	int pos;    //posicao;
   	int x;      //entrada;
   	int i;


   	for(i = 0; i < 200; i++){		//criando o vetor e fazendo cada posicao receber 0;
        vetor[i] = 0;
   	}

    printf("Digite um numero de 0 a 5000 e -1 para finalizar: ");
   	while(x != -1){					//laço pra percorrer o vetor;
        //printf("Digite um numero de 0 a 5000 e -1 para finalizar: ");
        scanf("%d", &x);
        pos = x/32; 	//achar a posicao no vetor "menor";
        if(x != -1){
            vetor[pos] = vetor[pos] | (1 << x%32);	//comparando pra adicionar no lugar certo no vetor;
        }
   	}

   	for(i = 0; i < 200; i++){	//percorrendo o vetor principal
        res = (32*i);
        while(vetor[i] != 0){	//procurando as posicoes que foram modificadas, ou seja, nao sao 0;
            if(vetor[i] & 1 == 1){		
                printf("%d ", res);
            }

                vetor[i] = vetor[i] >> 1;

                res = res + 1;

        }
   	}



	return 0;
}
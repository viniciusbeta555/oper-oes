// ALUNO: Francisco Vinicius de Freitas Carneiro

#include <stdio.h>

int main (){
    int vet[6];
    int i;
    float soma = 0, media;
    char resp = 'S';

while(resp == 'S' || resp == 's'){  // Condição para repetir o programa

    for(i=0; i<6; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("[");  // Mostar os valores na ordem digitada
    for(i=0; i<6; i++){
        if(i==5){
            printf("%d]\n", vet[i]);
        }else{
           printf("%d,", vet[i]);  
        }
    }

    printf("[");  // Mostrar os valores na ordem inversa
    for(i=5; i>-1; i--){
        if(i==0){
            printf("%d]\n", vet[i]);
        }else{
           printf("%d,", vet[i]);  
        }
    }

    for (i=0; i<6; i++){  // Realiza a soma dos numeros do vetor
        soma = soma+vet[i];
    }

    media = soma/6;

    printf("A soma e: %.0f\n",soma);
    printf("A media e: %.2f\n", media);

    soma = '\0';  // Zera as variaveis caso o usuario queira repetir o processo
    media = '\0';

    printf("[");  // Exibe os numero pares
    for(i=0; i<6; i++){
        if(vet[i]%2 == 0){
            if(i==5){
                printf("%d]\n", vet[i]);
            }else{
                printf("%d-", vet[i]);
            }
        }
    }

    printf("Deseja continuar as operacoes? S/N \n");
    scanf("%s", &resp);
}
    
}
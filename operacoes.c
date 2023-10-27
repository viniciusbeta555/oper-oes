#include <stdio.h>

int main (){
    int vet[6];
    int i;
    float soma = 0, media;
    char resp;

    resp = 'S';

while(resp == 'S' || resp == 's'){

    for(i=0; i<6; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("[");
    for(i=0; i<6; i++){
        if(i==5){
            printf("%d", vet[i]);
        }else{
           printf("%d,", vet[i]);  
        }
    }

    for(i=6; i<0; i--){
        if(i==1){
            printf("%d", vet[i]);
        }else{
           printf("%d,", vet[i]);  
        }
    }

    printf("]\n");

    for (i=0; i<6; i++){
        soma = soma+vet[i];
    }

    media = soma/6;

    printf("A soma e: %.0f\n",soma);
    printf("A media e: %.2f\n", media);

    soma = '\0';
    media = '\0';

    printf("[");
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
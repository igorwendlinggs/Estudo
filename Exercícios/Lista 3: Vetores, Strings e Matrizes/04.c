//Crie um programa em linguagem C que imprima uma mensagem pedindo para o usuário digitar um número inteiro positivo que represente o tamanho de um vetor (N). Após ter recebido o valor de N, o programa deve criar um vetor de números reais com N posições ~u = (u1; u2; u3; . . . ; uN ) . Em seguida o programa deve solicitar que o usuário digite N números reais. O programa deve calcular o módulo do vetor da seguinte forma Ao final, o programa deve imprimir qual é o valor do módulo do vetor recebido |~u|. Inclua a biblioteca math.h e utilize as funções pow e sqrt para calcular respectivamente o ao quadrado e a raiz quadrada.
#include <stdio.h>
#include <math.h>
int main (void){
int i,x;

  printf("Tamanho do vetor(inteiro):\n");
  scanf("%d", &x);

float v[x],modulo;
  
 printf("Coordenadas do vetor(float):\n");
for(i=0;i<x;i++){
 scanf("%f", &v[i]);
}
for(i=0;i<x;i++){
modulo+=pow(v[i], 2);}
modulo+=sqrt(modulo);
printf("%f\n", modulo);

  
  
return 0;
}

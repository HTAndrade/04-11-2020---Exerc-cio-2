#include <stdio.h>

/*Crie a função Armazena para guardar oito numeros quaisquer no
vetorA.Crie a funçao ArmazenaVetorB da mesma dimensão com os
elementos do vetor A multiplicados por 3.Os vetores A e B são globais.
Exiba o conteúdo dos dois vetores na função main.*/

//Declaração da variavel Global
int vetA[8];
int vetB[8];

//Função do vetor A
int ArmazenaVetorA(){
  //Declaração da variavel local
  int x;

  printf("Digite qualquer número para alimentar os elementos do vetor A:\n");

  for(x=0;x<8;x++){
    scanf("%d", &vetA[x]);
  }
  printf("\nOs números selecionados foram:\n\n");
  
  for(x=0;x<8;x++){
    printf("%d ", vetA[x]);
  }
return 0;

}

//Função do Vetor B
int ArmazenaVetorB(){
  //Declaração da variavel local
  int x;

  for(x=0;x<8;x++){
    vetB[x] = vetA[x]*3;
  }
  printf("\n\nMultiplicados por 3:\n\n");

  for(x=0;x<8;x++){
    printf("%d ", vetB[x]);
  }
return 0;  
}

//Função main
int main() {
  
  ArmazenaVetorA();
  ArmazenaVetorB();
  
}

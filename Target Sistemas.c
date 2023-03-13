//1)

#include <stdio.h>

int main()
{
    int indice=13, soma=0, k=0, i=0;
    
    for(i=0 ; i<indice ; i++){
        k = k+1;
        soma = soma + k;
    }
    printf("Soma: %d", soma);
    return 0;
}

// RESPOSTA: 91

//2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

#include<stdio.h>

int main ()
{
    unsigned vet[4];
    unsigned int i;
    vet[0]=0;
    vet[1]=1;
    vet[2]=0;
    vet[3]=0;
 
    printf("Informe o numero a ser comparado: ");
    scanf("%u", &vet[3]);
    
    for (i=0 ; i<vet[3] ; i++)
    {    
        vet[2] = vet[0] + vet[1];
        
        if(vet[2] == vet[3])
        {
            printf("O valor pertence a sequência de Fibonacci.\n");
            return 0;
        }
        vet[0] = vet[1];
        vet[1] = vet[2];
    }
    printf("O valor não pertence a sequencia.\n");
    return 0;
}

// 3)

//a) 1,3,5,7,>9< (somar +2)
//b) 2,4,8,16,32,64,>128< (vezes 2)
//c) 0,1,4,9,16,25,36,>49< (sempre somar com um numero impar em crescente sequencialmente)
//d) 4,16,36,64,>100< (O próximo número é igual a soma do número atual mais a diferença entre o atual e o último somando 8)
//e) 1,1,2,3,5,>8< (A sequência Fibonacci do exercício)
//f) 2,10,12,16,17,18,19,>200< (Todos começam com a Letra D, dois, dez, ...duzentos)

// 4)

//Equação carro: x1 = v1 * t
//Equação caminhão: x2 = 100km - v2 * t // Caminhão partindo do ponto 0 a um ponto com d = 100km

//Tempo da viagem do caminhão sem obstáculos = 100km/80(km/h) = 1,25h - Como o caminhão possuí um acréscimo de 10 min na viagem, 10 min = 0,17h, tempo total da viagem pro caminhão = 1,42h com velocidade média total de 70,6Km/h

//Igualando as equações  horárias temos que:
//x1 = x2 => x/v1 = x -100km/(-v2)
//-v2*x = v1*x - v1*100km
//x = (v1 * 100km) / v1 + v2 = (110(km/h) * 100km)/110(km/h)+70,6(km/h)
//x = 60,9km

// 5) Escreva um programa que inverta os caracteres de um string.

#include <stdio.h>
#include <string.h>

int main(void) {
    char frase[] = "Socorram-me subi no onibus em Marrocos!";
    char tmp;
    int tam = strlen(frase);
    
    for(int i=0; i < tam/2 ; i++) {
       tmp = frase[i];
       frase[i] = frase[tam-i-1];
       frase[tam-i-1] = tmp;
    }
    printf("%s", frase);
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cigana.h"

void limpartela(){
	#ifdef _WIN32
  	  system("cls");
	#else
  	  system("clear");
	#endif
}

void continuar(){
	printf("Pressione enter para continuar...");
	getchar();
}

void leituraDeCartas() {
    // Implemente a função de leitura de cartas de tarô aqui
}

void horoscopoDiario() {
    const char* signos[12] = {
        "Áries", "Touro", "Gêmeos", "Câncer", "Leão", "Virgem",
        "Libra", "Escorpião", "Sagitário", "Capricórnio", "Aquário", "Peixes"
    };
    
    const char* horoscopos[7] = {
        "Hoje é um dia de sorte no trabalho. Aproveite as oportunidades que surgirem.",
        "Seja cuidadoso nas suas decisões financeiras hoje. Evite gastos desnecessários.",
        "Sua energia e criatividade estão em alta. É um bom momento para atividades sociais.",
        "É hora de cuidar da sua saúde. Mantenha uma alimentação equilibrada e pratique exercícios.",
        "Este é um dia favorável para investir em relacionamentos. Mostre seu apoio aos amigos.",
        "Fique atento às oportunidades de aprendizado. Novos conhecimentos estão ao seu alcance.",
        "Hoje é um bom dia para relaxar e cuidar de si mesmo. Tire um tempo para o autocuidado."
    };
    
    int signoIndex = rand() % 12;
    int horoscopoIndex = rand() % 7;

    printf("Horóscopo para %s:\n%s\n", signos[signoIndex], horoscopos[horoscopoIndex]);
}

void sobreSeuSigno() {
    // Implemente a função que fala sobre o signo aqui
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cigana.h"
#include <locale.h>

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
	printf("Bem-vindo à Leitura de Cartas de Tarô!\n");

    const char* cartas[22] = {
        "O Louco", "O Mago", "A Sacerdotisa", "A Imperatriz", "O Imperador", "O Hierofante",
        "Os Amantes", "O Carro", "A Justiça", "O Eremita", "A Roda da Fortuna", "A Força",
        "O Enforcado", "A Morte", "A Temperança", "O Diabo", "A Torre", "A Estrela",
        "A Lua", "O Sol", "O Julgamento", "O Mundo"
    };

    srand(time(NULL));
    int cartaIndex = rand() % 22;

    printf("Você tirou a carta: %s\n", cartas[cartaIndex]);
    if (cartaIndex == 0){
		printf("vai da o cu\n");
	} else if (cartaIndex == 1){
		printf("o cu vc vai dar\n");
	} else if (cartaIndex == 2){
		printf("o cu vc vai dar\n");
	} else if (cartaIndex == 3){
		printf("o cu vc vai dar\n");
	} else if (cartaIndex == 4){
		printf("o cu vc vai dar\n");
	} else if (cartaIndex == 5){
		printf("o cu vc vai dar\n");
	} else if (cartaIndex == 6){
		printf("o cu vc vai dar\n");
	} else if (cartaIndex == 7){
		printf("o cu vc vai dar\n");
	} else if (cartaIndex == 8){
		printf("o cu vc vai dar\n");
	} else if (cartaIndex == 9){
		printf("o cu vc vai dar\n");
	} else if (cartaIndex == 10){
		printf("o cu vc vai dar\n");
	} else if (cartaIndex == 11){
		printf("o cu vc vai dar\n");
	} else if (cartaIndex == 12){
		printf("o cu vc vai dar\n");
	} else if (cartaIndex == 13){
		printf("o cu vc vai dar\n");
	} else if (cartaIndex == 14){
		printf("o cu vc vai dar\n");
	} else if (cartaIndex == 15){
		printf("o cu vc vai dar\n");
	} else if (cartaIndex == 16){
		printf("o cu vc vai dar\n");
	} else if (cartaIndex == 17){
		printf("o cu vc vai dar\n");
	} else if (cartaIndex == 18){
		printf("o cu vc vai dar\n");
	} else if (cartaIndex == 19){
		printf("o cu vc vai dar\n");
	} else if (cartaIndex == 20){
		printf("o cu vc vai dar\n");
	} else if (cartaIndex == 21){
		printf("o cu vc vai dar\n");

}	
}


void horoscopoDiario() {
    const char* signos[12] = {
        "Áries", "Touro", "Gemeos", "Câncer", "Leão", "Virgem",
        "Libra", "Escorpião", "Sagirtário", "Capricórnio", "Aquário", "Peixes"
    };
    
    const char* horoscopos[7] = {
        "Hoje é um dia de sorte no trabalho. Aproveite as oportunidades que surgirem.",
        "Seja cuidadoso nas suas decisões financeiras hoje. Evite gastos desnecessários.",
        "Sua energia e criatividade estão em alta. á um bom momento para atividades sociais.",
        "Ã‰ hora de cuidar da sua saúde. Mantenha uma alimentação equilibrada e pratique exercícios.",
        "Este é um dia favorável para investir em relacionamentos. Mostre seu apoio aos amigos.",
        "Fique atento á s oportunidades de aprendizado. Novos conhecimentos estão ao seu alcance.",
        "Hoje é um bom dia para relaxar e cuidar de si mesmo. Tire um tempo para o autocuidado."
    };
    
    int signoIndex = rand() % 12;
    int horoscopoIndex = rand() % 7;

    printf("Horoscópo para %s:\n%s\n", signos[signoIndex], horoscopos[horoscopoIndex]);
}

void sobreSeuSigno() {
		
		char opcao1;
		limpartela();
		printf("#####################################################\n");
        printf("##     	Quer saber mais osbre seu Signo?           ##\n");
        printf("##       	Selecione o seu Signo            	   ##\n");
        printf("##       A - Áries            					   ##\n");
        printf("##       B - Touro                      		   ##\n");
        printf("##       C - Gemeos                       		   ##\n");
        printf("##       D - Câncer                                ##\n");
        printf("##       E - Leão                                  ##\n");
        printf("##       F - Virgem                                ##\n");
        printf("##       G - Libra                                 ##\n");
        printf("##       H - Escorpião                             ##\n");
        printf("##       I - Sargitário                            ##\n");
        printf("##       J - Capricórnio                           ##\n");
        printf("##       K - Aquário                               ##\n");
        printf("##       L - Peixes                                ##\n");
        printf("##       S - Sair                                  ##\n");
  		printf("#####################################################\n");
  		scanf("%c",opcao1);
  		 switch (opcao1) {
        case 'A':
            printf("Você selecionou Áries. Aqui está uma mensagem para Áries.\n");
            continuar();
            break;
        case '2':
            printf("Você selecionou Touro. Aqui está uma mensagem para Touro.\n");
            break;
		 default:
            printf("Opção inválida. Escolha uma opção válida do menu.\n");
            continuar();
            
}
while (opcao1 !='S'){
	sobreSeuSigno();

}
}



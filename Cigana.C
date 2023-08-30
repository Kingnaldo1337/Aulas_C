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

void menu_principal() {
	setlocale(LC_ALL,"Portuguese_Brazil");
    srand(time(NULL));

    char opcao;
	  do{
    	limpartela();
        printf("#####################################################\n");
        printf("#####################################################\n");
        printf("##                 Sigana Virtual                  ##\n");
        printf("##Desenvolvedor: Reinaldo Alves Pereira Junior     ##\n");
        printf("##Curso: Sistemas de Informação 2o periodo         ##\n");
        printf("##Instagram: @r3inaldo_jr)                         ##\n");
        printf("##Jardim do seridó RN                              ##\n");
        printf("#####################################################\n");
        printf("#####################################################\n");
        printf("##                                                 ##\n");
        printf("##       1 - Leitura de Cartas de Tarô             ##\n");
        printf("##       2 - Horóscopo Diário                      ##\n");
        printf("##       3 - Sobre Seu Signo                       ##\n");
        printf("##       0 - Sair                                  ##\n");
        printf("#####################################################\n");
        printf("#####################################################\n");
        printf("Escolha uma opção:");
        scanf(" %c", &opcao);
        getchar(); // Limpar o caractere de nova linha
        printf("\n");

        switch (opcao) {
            case '1':
                leituraDeCartas();
                continuar();
                break;

            case '2':
                horoscopoDiario();
                continuar();
                break;
            

            case '3':
            	limpartela();
                sobreSeuSigno();
                break;

            case '0':
            	limpartela();
                printf("Saindo do programa...\n");
                break;

            default:
            	limpartela();
                printf("Opção inválida. Escolha uma opção válida do menu.\n");
                break;
        }

    } while (opcao != '0');
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
		printf("Parte positiva:Alegria, coragem, independência, liberdade, livre expressão, viagens. \n");
		printf("parte negativa:Irresponsabilidade, impulsividade, falta de planejamento, falta de compromisso, imprudência. \n");
	} else if (cartaIndex == 1){
		printf("Parte positiva:Investimento, iniciativa, vontade de fazer, vitalidade e foco. \n");
		printf("parte negativa:Imaturidade, inexperiência, falta de persistência, manipulação, trapaça. \n");
	} else if (cartaIndex == 2){
		printf("Parte positiva:Capacidade de amadurecer, reflexão, profundidade, fertilidade, estudos. \n");
		printf("parte negativa:Recolhimento, isolamento, falta de clareza, falsidade, coisas escusas, infidelidade. \n");
	}else if (cartaIndex == 3){
		printf("Parte positiva:Prosperidade, abundância, fertilidade, desenvolvimento, ganhos, comunicação. \n");
		printf("parte negativa:Falta de controle, falta de autonomia, excesso de vaidade. \n");
	}else if (cartaIndex == 4){
		printf("Parte positiva:Poder, autoridade, força, realização, independência, proteção. \n");
		printf("parte negativa:Autoritarismo, inflexibilidade, rigidez. \n");	
	}else if (cartaIndex == 5){
		printf("Parte positiva:Organização, disciplina, lealdade, espiritualidade, fé, união, casamento. \n");
		printf("parte negativa:Dogma, rigidez, falta de abertura, tradicionalismo, obstinação, preconceito, tabus. \n");
	}else if (cartaIndex == 6){
		printf("Parte positiva:Amor, casamento, escolha, compromisso, paixão, positividade, reconciliação. \n");
		printf("parte negativa:Indecisões, ciúme, traição, irresponsabilidade, insegurança, dúvidas. \n");
	}else if (cartaIndex == 7){
		printf("Parte positiva:Dinamismo, ação, velocidade, praticidade, conquista, controle, coragem. \n");
		printf("parte negativa:Obstinação, alienação, imediatismo, recuo. \n");
	}else if (cartaIndex == 8){
		printf("Parte positiva:Equilíbrio, justiça, retidão, racionalidade, imparcialidade. \n");
		printf("parte negativa:Intolerância, frieza, impaciência. \n");
	}else if (cartaIndex == 9){
		printf("Parte positiva: Maturidade, sabedoria, compreensão, resiliência, humildade, prudência, paciência, espiritualidade.\n");
		printf("parte negativa:Lentidão, inflexibilidade, tradicionalismo, resistência à mudanças, inércia, solidão. \n");
	}else if (cartaIndex == 10){
		printf("Parte positiva:Velocidade, movimento, sorte, destino, mudança, viagens, acaso. \n");
		printf("parte negativa:Inconstância, incerteza, imprevisibilidade, vulnerabilidade, volatilidade, oscilação. \n");
	}else if (cartaIndex == 11){
		printf("Parte positiva:Consistência, destreza, independência, coragem, vitalidade, resistência. \n");
		printf("parte negativa:Desconfiança, egoísmo, autossuficiência. \n");
	}else if (cartaIndex == 12){
		printf("Parte positiva:Reflexão, entrega, sensibilidade, resignação, abnegação. \n");
		printf("parte negativa:Estagnação, relutância, prepotência, vícios. \n");
	}else if (cartaIndex == 13){
		printf("Parte positiva:Renovação, transformação, lucidez, consciência, fim de ciclo. \n");
		printf("parte negativa:Morte, destruição, perda. \n");
	}else if (cartaIndex == 14){
		printf("Parte positiva:Equilíbrio, harmonia, moderação, ponderação, comedimento, tranquilidade. \n");
		printf("parte negativa:Comodismo, falta de ambição, medo de exposição, lentidão. \n");
	}else if (cartaIndex == 15){
		printf("Parte positiva:Da com uma mão \n");
		printf("parte negativa:Tira com a outra \n");
	}else if (cartaIndex == 16){
		printf("Parte positiva:Ruptura, transformação, mudança repentina, transmutação. \n");
		printf("parte negativa:Destruição, caos, sofrimento, confusão, decepção, divórcio, morte, perdas. \n");
	}else if (cartaIndex == 17){
		printf("Parte positiva:Esperança, fé, renovação, pureza, inocência, leveza, otimismo, alegria, criatividade. \n");
		printf("parte negativa:Ilusão, ingenuidade, infantilidade. \n");
	}else if (cartaIndex == 18){
		printf("Parte positiva:Intuição, instinto, sensibilidade, emoção, fecundidade, criatividade. \n");
		printf("parte negativa:Medo, receio, ilusão, traição, mentira, infidelidade. \n");
	}else if (cartaIndex == 19){
		printf("Parte positiva:QUENTE \n");
		printf("parte negativa:QUENTE FEITO A PESTE \n");
	}else if (cartaIndex == 20){
		printf("Parte positiva:Superação, espiritualidade, redenção, redescobertas, renascimento. \n");
		printf("parte negativa:Crítica excessiva, perfeccionismo, ciclo vicioso. \n");
	}else if (cartaIndex == 21){
		printf("Parte positiva:ZA WARUDO \n");
		printf("parte negativa: MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA \n");
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
	char opcao1[2];
		while(1){
        limpartela();
		printf("#####################################################\n");
        printf("##     	Quer saber mais osbre seu Signo?           ##\n");
        printf("##       	Selecione o seu Signo              ##\n");
        printf("##       1 - Áries            	                   ##\n");
        printf("##       2 - Touro                                 ##\n");
        printf("##       3 - Gemeos                       	   ##\n");
        printf("##       4 - Câncer                                ##\n");
        printf("##       5 - Leão                                  ##\n");
        printf("##       6 - Virgem                                ##\n");
        printf("##       7 - Libra                                 ##\n");
        printf("##       8 - Escorpião                             ##\n");
        printf("##       9 - Sargitário                            ##\n");
        printf("##       10- Capricórnio                           ##\n");
        printf("##       11 - Aquário                              ##\n");
        printf("##       12 - Peixes                               ##\n");
        printf("##       0 - Sair                                  ##\n");
  		printf("#####################################################\n");
  		fgets(opcao1, sizeof(opcao1), stdin);
  		opcao1[0] = opcao1[0];
			switch (opcao1[0]) {
    		case '1':
    			printf("Você selecionou Áries. Aqui está uma mensagem para Áries.\n");
    			printf("Quem tem sol em Áries costuma viver no agora; além de possuir um grande prazer em existir, ação e decisão também podem ser algumas de suas marcas. A liderança é uma característica forte no signo, que pode ser usada para o empreendedorismo.\n");
    			printf("Planeta: Marte\n");
    			continuar();
 	   	    	break;
	        case '2':		
	            printf("Você selecionou Touro. Aqui está uma mensagem para Touro.\n");
	            printf("Quem tem sol em Touro costuma não abrir mão do que traz conforto e bem-estar, mas pode ter a possessividade em evidência. O signo preza pela beleza física e pela gula. A satisfação de Touro vem do contato com todos os cinco sentidos.\n");
	            printf("Planeta: Vênus\n");
	            continuar();
   				break;
			case '3':		
	            printf("Você selecionou Gêmeos. Aqui está uma mensagem para Gêmeos.\n");
	            printf("Quem tem sol em Gêmeos costuma apreciar novas ideias, novos lugares e novas pessoas. Gêmeos tem carisma de sobra e tende a fazer amigos com muita facilidade. A superficialidade e a inconsequência também podem ser algumas das marcas do signo.\n");
	            printf("Planeta: Mercúrio\n");
	            continuar();
   				break;
			case '4':		
	            printf("Você selecionou Câncer. Aqui está uma mensagem para Câncer.\n");
	            printf("Quem tem sol em Câncer costuma buscar o que lhe traz segurança. O signo é maternal e emotivo e tem uma proximidade com o apego ao passado. Câncer costuma ter a intuição acentuada, sentir as coisas no ar e captar tudo logo no primeiro olhar.\n");
	            printf("Satelite: Lua\n");
	            continuar();
   				break;
			case '5':		
	            printf("Você selecionou Leão. Aqui está uma mensagem para Leão.\n");
	            continuar();
	            printf("Quem tem sol em Leão costuma amar plateias e aplausos. O signo tem a coragem e o humor como marcas registradas, mas também o orgulho e o autoritarismo. Leão geralmente valoriza as oportunidades e aproveita cada momento, sabe amar e ter generosidade.\n");
	            printf("Estrela: Sol\n");
   				break;
			case '6':		
	            printf("Você selecionou Virgem. Aqui está uma mensagem para Virgem.\n");
	            printf("Quem tem sol em Virgem costuma buscar constantemente a perfeição, tudo sempre poderia estar um pouco melhor. Signo observador, que costuma identificar o detalhe que ninguém mais percebe. Virgem tem praticidade e organização, mas também pode ser frio e cético.\n");
	            printf("Planeta: Mercúrio\n");
	            continuar();
   				break;
			case '7':		
	            printf("Você selecionou Libra. Aqui está uma mensagem para Libra.\n");
	            printf("Quem tem sol em Libra costuma buscar sempre o equilíbrio e conviver com a indecisão. Regido por Vênus, o signo tem uma aproximação natural com as artes. Libra costuma ter ética, mas também pode ter vaidade em excesso e comportamentos considerados de “mau gosto”.\n");
	            printf("Planeta: Vênus\n");
	            continuar();
   				break;
			case '8':		
	            printf("Você selecionou Escorpião. Aqui está uma mensagem para Escorpião.\n");
	            printf("Quem tem sol em Escorpião costuma ter muita perspicácia, não é a toa que são naturalmente detetives. O sexto sentido do signo alerta para possíveis “perigos” logo de cara. Escorpião tem uma capacidade de regeneração única, mas também pode ter muitos ciúmes.\n");
	            printf("Planetas: Marte e Plutão\n");
	            continuar();
   				break;
			case '9':		
	            printf("Você selecionou Sargitário. Aqui está uma mensagem para Sagirtário.\n");
	            printf("Quem tem sol em Sagitário costuma ser viajante, sua casa é o mundo inteiro. O signo viaja muito também em sua própria mente. Não tente aprisionar Sagitário de nenhuma forma, ele não aceita limites. Otimista e jovial, pode ter exageros e uma dose de deboche.\n");
	            printf("Planeta: Júpiter\n");
	            continuar();
   				break;
			case '10':		
	            printf("Você selecionou Capricórnio. Aqui está uma mensagem para Capricórnio.\n");
	            printf("Quem tem sol em Capricórnio costuma ter seus propósitos e metas bem definidos. Signo de praticidade que segue as regras do jogo tem total noção dos seus limites. Capricórnio é maduro e bem humorado, mas também pode ser frio nas relações e um tanto pessimista.\n");
	            printf("Planeta: Saturno\n");
	            continuar();
   				break;
			case '11':		
	            printf("Você selecionou Aquário. Aqui está uma mensagem para Aquário.\n");
	            printf("Quem tem sol em Aquário costuma ter a amizade como cartão de visita e ter uma conexão intensa com a liberdade. Signo idealista, tende a dar preferência aos diálogos racionais. Aquário é solidário e humano, também pode ser radical e bem “do contra”.\n");
	            printf("Planeta: Saturno e Urano.\n");
	            continuar();
   				break;
			case '12':		
	            printf("Você selecionou Peixes. Aqui está uma mensagem para Peixes.\n");
	            printf("Quem tem sol em Peixes costuma entender tudo sem precisar de muitas palavras, possuem uma sensibilidade superior. Signo compassivo e inspirador, Peixes tende a ter uma forte conexão com a espiritualidade, mas pode se iludir com certa facilidade.\n");
	            printf("Planeta: Jupiter e Neturno\n");
	            continuar();
   				break;   	   
	        case '0':	
	        	return;	
				default:
	            printf("Opção inválida. Escolha uma opção válida do menu.\n");
	            continuar();
	            break;
            
}
        if (opcao1[0] != '0') {
            printf("Pressione enter para continuar...");
            getchar();
}
}
}



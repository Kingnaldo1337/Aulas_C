#include <time.h>
void leituraDeCartas(void) {
	printf("Bem-vindo a Leitura de Cartas de Taro!\n");

    const char* cartas[22] = {
        "O Louco", "O Mago", "A Sacerdotisa", "A Imperatriz", "O Imperador", "O Hierofante",
        "Os Amantes", "O Carro", "A Justica", "O Eremita", "A Roda da Fortuna", "A Forca",
        "O Enforcado", "A Morte", "A Temperanca", "O Diabo", "A Torre", "A Estrela",
        "A Lua", "O Sol", "O Julgamento", "O Mundo"
    };

    srand(time(NULL));
    int cartaIndex = rand() % 22;

    printf("Voce tirou a carta: %s\n", cartas[cartaIndex]);
    if (cartaIndex == 0){
		printf("Parte positiva:Alegria, coragem, independ�ncia, liberdade, livre expressao, viagens. \n");
		printf("parte negativa:Irresponsabilidade, impulsividade, falta de planejamento, falta de compromisso, imprud�ncia. \n");
	} else if (cartaIndex == 1){
		printf("Parte positiva:Investimento, iniciativa, vontade de fazer, vitalidade e foco. \n");
		printf("parte negativa:Imaturidade, inexperi�ncia, falta de persistencia, manipulacaoo, trapaia. \n");
	} else if (cartaIndex == 2){
		printf("Parte positiva:Capacidade de amadurecer, reflexao, profundidade, fertilidade, estudos. \n");
		printf("parte negativa:Recolhimento, isolamento, falta de clareza, falsidade, coisas escusas, infidelidade. \n");
	}else if (cartaIndex == 3){
		printf("Parte positiva:Prosperidade, abundancia, fertilidade, desenvolvimento, ganhos, comunicacao. \n");
		printf("parte negativa:Falta de controle, falta de autonomia, excesso de vaidade. \n");
	}else if (cartaIndex == 4){
		printf("Parte positiva:Poder, autoridade, forca, realizacao, independ�ncia, protecao. \n");
		printf("parte negativa:Autoritarismo, inflexibilidade, rigidez. \n");	
	}else if (cartaIndex == 5){
		printf("Parte positiva:Organizacao, disciplina, lealdade, espiritualidade, fe, uniao, casamento. \n");
		printf("parte negativa:Dogma, rigidez, falta de abertura, tradicionalismo, obstinacao, preconceito, tabus. \n");
	}else if (cartaIndex == 6){
		printf("Parte positiva:Amor, casamento, escolha, compromisso, paix�o, positividade, reconciliacao. \n");
		printf("parte negativa:Indecisoes, ciume, traicao, irresponsabilidade, inseguranca, duvidas. \n");
	}else if (cartaIndex == 7){
		printf("Parte positiva:Dinamismo, acao, velocidade, praticidade, conquista, controle, coragem. \n");
		printf("parte negativa:Obstinacao, alienacao, imediatismo, recuo. \n");
	}else if (cartaIndex == 8){
		printf("Parte positiva:Equilibrio, justica, retidao, racionalidade, imparcialidade. \n");
		printf("parte negativa:Intoler�ncia, frieza, impaciencia. \n");
	}else if (cartaIndex == 9){
		printf("Parte positiva: Maturidade, sabedoria, compreensao, resiliencia, humildade, prudencia, paciencia, espiritualidade.\n");
		printf("parte negativa:Lentidao, inflexibilidade, tradicionalismo, resistencia e mudancas, inercia, solidao. \n");
	}else if (cartaIndex == 10){
		printf("Parte positiva:Velocidade, movimento, sorte, destino, mudan�a, viagens, acaso. \n");
		printf("parte negativa:Inconstencia, incerteza, imprevisibilidade, vulnerabilidade, volatilidade, oscilacao. \n");
	}else if (cartaIndex == 11){
		printf("Parte positiva:Consistencia, destreza, independencia, coragem, vitalidade, resistencia. \n");
		printf("parte negativa:Desconfianca, egoismo, autossuficiencia. \n");
	}else if (cartaIndex == 12){
		printf("Parte positiva:Reflexao, entrega, sensibilidade, resignacao, abnegacao. \n");
		printf("parte negativa:Estagnacao, relutancia, prepotencia, vicios. \n");
	}else if (cartaIndex == 13){
		printf("Parte positiva:Renovacao, transformacao, lucidez, consciencia, fim de ciclo. \n");
		printf("parte negativa:Morte, destruicao, perda. \n");
	}else if (cartaIndex == 14){
		printf("Parte positiva:Equil�brio, harmonia, moderacao, ponderacao, comedimento, tranquilidade. \n");
		printf("parte negativa:Comodismo, falta de ambicao, medo de exposi��o, lentid�o. \n");
	}else if (cartaIndex == 15){
		printf("Parte positiva:Da com uma mao \n");
		printf("parte negativa:Tira com a outra \n");
	}else if (cartaIndex == 16){
		printf("Parte positiva:Ruptura, transformacao, mudanca repentina, transmutacao. \n");
		printf("parte negativa:Destruicao, caos, sofrimento, confus�o, decep��o, div�rcio, morte, perdas. \n");
	}else if (cartaIndex == 17){
		printf("Parte positiva:Esperanca, fe, renovacao, pureza, inocencia, leveza, otimismo, alegria, criatividade. \n");
		printf("parte negativa:Ilusao, ingenuidade, infantilidade. \n");
	}else if (cartaIndex == 18){
		printf("Parte positiva:Intuicao, instinto, sensibilidade, emocao, fecundidade, criatividade. \n");
		printf("parte negativa:Medo, receio, ilusao, traicao, mentira, infidelidade. \n");
	}else if (cartaIndex == 19){
		printf("Parte positiva:QUENTE \n");
		printf("parte negativa:QUENTE FEITO A PESTE \n");
	}else if (cartaIndex == 20){
		printf("Parte positiva:Superacao, espiritualidade, redencao, redescobertas, renascimento. \n");
		printf("parte negativa:Critica excessiva, perfeccionismo, ciclo vicioso. \n");
	}else if (cartaIndex == 21){
		printf("Parte positiva:ZA WARUDO \n");
		printf("parte negativa: MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA \n");
	}
}	
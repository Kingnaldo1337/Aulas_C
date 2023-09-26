#include <time.h>
void leituraDeCartas(void) {
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
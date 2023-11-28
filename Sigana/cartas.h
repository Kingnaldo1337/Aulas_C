#include <time.h>
void leituraDeCartas(void) {
	printf("Bem-vindo � Leitura de Cartas de Tar�!\n");

    const char* cartas[22] = {
        "O Louco", "O Mago", "A Sacerdotisa", "A Imperatriz", "O Imperador", "O Hierofante",
        "Os Amantes", "O Carro", "A Justi�a", "O Eremita", "A Roda da Fortuna", "A For�a",
        "O Enforcado", "A Morte", "A Temperan�a", "O Diabo", "A Torre", "A Estrela",
        "A Lua", "O Sol", "O Julgamento", "O Mundo"
    };

    srand(time(NULL));
    int cartaIndex = rand() % 22;

    printf("Voc� tirou a carta: %s\n", cartas[cartaIndex]);
    if (cartaIndex == 0){
		printf("Parte positiva:Alegria, coragem, independ�ncia, liberdade, livre express�o, viagens. \n");
		printf("parte negativa:Irresponsabilidade, impulsividade, falta de planejamento, falta de compromisso, imprud�ncia. \n");
	} else if (cartaIndex == 1){
		printf("Parte positiva:Investimento, iniciativa, vontade de fazer, vitalidade e foco. \n");
		printf("parte negativa:Imaturidade, inexperi�ncia, falta de persist�ncia, manipula��o, trapa�a. \n");
	} else if (cartaIndex == 2){
		printf("Parte positiva:Capacidade de amadurecer, reflex�o, profundidade, fertilidade, estudos. \n");
		printf("parte negativa:Recolhimento, isolamento, falta de clareza, falsidade, coisas escusas, infidelidade. \n");
	}else if (cartaIndex == 3){
		printf("Parte positiva:Prosperidade, abund�ncia, fertilidade, desenvolvimento, ganhos, comunica��o. \n");
		printf("parte negativa:Falta de controle, falta de autonomia, excesso de vaidade. \n");
	}else if (cartaIndex == 4){
		printf("Parte positiva:Poder, autoridade, for�a, realiza��o, independ�ncia, prote��o. \n");
		printf("parte negativa:Autoritarismo, inflexibilidade, rigidez. \n");	
	}else if (cartaIndex == 5){
		printf("Parte positiva:Organiza��o, disciplina, lealdade, espiritualidade, f�, uni�o, casamento. \n");
		printf("parte negativa:Dogma, rigidez, falta de abertura, tradicionalismo, obstina��o, preconceito, tabus. \n");
	}else if (cartaIndex == 6){
		printf("Parte positiva:Amor, casamento, escolha, compromisso, paix�o, positividade, reconcilia��o. \n");
		printf("parte negativa:Indecis�es, ci�me, trai��o, irresponsabilidade, inseguran�a, d�vidas. \n");
	}else if (cartaIndex == 7){
		printf("Parte positiva:Dinamismo, a��o, velocidade, praticidade, conquista, controle, coragem. \n");
		printf("parte negativa:Obstina��o, aliena��o, imediatismo, recuo. \n");
	}else if (cartaIndex == 8){
		printf("Parte positiva:Equil�brio, justi�a, retid�o, racionalidade, imparcialidade. \n");
		printf("parte negativa:Intoler�ncia, frieza, impaci�ncia. \n");
	}else if (cartaIndex == 9){
		printf("Parte positiva: Maturidade, sabedoria, compreens�o, resili�ncia, humildade, prud�ncia, paci�ncia, espiritualidade.\n");
		printf("parte negativa:Lentid�o, inflexibilidade, tradicionalismo, resist�ncia � mudan�as, in�rcia, solid�o. \n");
	}else if (cartaIndex == 10){
		printf("Parte positiva:Velocidade, movimento, sorte, destino, mudan�a, viagens, acaso. \n");
		printf("parte negativa:Inconst�ncia, incerteza, imprevisibilidade, vulnerabilidade, volatilidade, oscila��o. \n");
	}else if (cartaIndex == 11){
		printf("Parte positiva:Consist�ncia, destreza, independ�ncia, coragem, vitalidade, resist�ncia. \n");
		printf("parte negativa:Desconfian�a, ego�smo, autossufici�ncia. \n");
	}else if (cartaIndex == 12){
		printf("Parte positiva:Reflex�o, entrega, sensibilidade, resigna��o, abnega��o. \n");
		printf("parte negativa:Estagna��o, relut�ncia, prepot�ncia, v�cios. \n");
	}else if (cartaIndex == 13){
		printf("Parte positiva:Renova��o, transforma��o, lucidez, consci�ncia, fim de ciclo. \n");
		printf("parte negativa:Morte, destrui��o, perda. \n");
	}else if (cartaIndex == 14){
		printf("Parte positiva:Equil�brio, harmonia, modera��o, pondera��o, comedimento, tranquilidade. \n");
		printf("parte negativa:Comodismo, falta de ambi��o, medo de exposi��o, lentid�o. \n");
	}else if (cartaIndex == 15){
		printf("Parte positiva:Da com uma m�o \n");
		printf("parte negativa:Tira com a outra \n");
	}else if (cartaIndex == 16){
		printf("Parte positiva:Ruptura, transforma��o, mudan�a repentina, transmuta��o. \n");
		printf("parte negativa:Destrui��o, caos, sofrimento, confus�o, decep��o, div�rcio, morte, perdas. \n");
	}else if (cartaIndex == 17){
		printf("Parte positiva:Esperan�a, f�, renova��o, pureza, inoc�ncia, leveza, otimismo, alegria, criatividade. \n");
		printf("parte negativa:Ilus�o, ingenuidade, infantilidade. \n");
	}else if (cartaIndex == 18){
		printf("Parte positiva:Intui��o, instinto, sensibilidade, emo��o, fecundidade, criatividade. \n");
		printf("parte negativa:Medo, receio, ilus�o, trai��o, mentira, infidelidade. \n");
	}else if (cartaIndex == 19){
		printf("Parte positiva:QUENTE \n");
		printf("parte negativa:QUENTE FEITO A PESTE \n");
	}else if (cartaIndex == 20){
		printf("Parte positiva:Supera��o, espiritualidade, reden��o, redescobertas, renascimento. \n");
		printf("parte negativa:Cr�tica excessiva, perfeccionismo, ciclo vicioso. \n");
	}else if (cartaIndex == 21){
		printf("Parte positiva:ZA WARUDO \n");
		printf("parte negativa: MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA MUDA \n");
	}
}	
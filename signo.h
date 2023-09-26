void sobreSeuSigno(void) {
	char opcao1[2];
		while(1){
        system("clear");
		printf("#####################################################\n");
        printf("##     	Quer saber mais osbre seu Signo?           ##\n");
        printf("##       	Selecione o seu Signo              ##\n");
        printf("##       1 - �ries            	                   ##\n");
        printf("##       2 - Touro                                 ##\n");
        printf("##       3 - Gemeos                       	   ##\n");
        printf("##       4 - C�ncer                                ##\n");
        printf("##       5 - Le�o                                  ##\n");
        printf("##       6 - Virgem                                ##\n");
        printf("##       7 - Libra                                 ##\n");
        printf("##       8 - Escorpi�o                             ##\n");
        printf("##       9 - Sargit�rio                            ##\n");
        printf("##       10- Capric�rnio                           ##\n");
        printf("##       11 - Aqu�rio                              ##\n");
        printf("##       12 - Peixes                               ##\n");
        printf("##       0 - Sair                                  ##\n");
  		printf("#####################################################\n");
  		fgets(opcao1, sizeof(opcao1), stdin);
  		opcao1[0] = opcao1[0];
			switch (opcao1[0]) {
    		case '1':
    			printf("Voc� selecionou �ries. Aqui est� uma mensagem para �ries.\n");
    			printf("Quem tem sol em �ries costuma viver no agora; al�m de possuir um grande prazer em existir, a��o e decis�o tamb�m podem ser algumas de suas marcas. A lideran�a � uma caracter�stica forte no signo, que pode ser usada para o empreendedorismo.\n");
    			printf("Planeta: Marte\n");
    			printf("Pressione enter para continuar...");
				getchar();
 	   	    	break;
	        case '2':		
	            printf("Voc� selecionou Touro. Aqui est� uma mensagem para Touro.\n");
	            printf("Quem tem sol em Touro costuma n�o abrir m�o do que traz conforto e bem-estar, mas pode ter a possessividade em evid�ncia. O signo preza pela beleza f�sica e pela gula. A satisfa��o de Touro vem do contato com todos os cinco sentidos.\n");
	            printf("Planeta: V�nus\n");
	            printf("Pressione enter para continuar...");
				getchar();
   				break;
			case '3':		
	            printf("Voc� selecionou G�meos. Aqui est� uma mensagem para G�meos.\n");
	            printf("Quem tem sol em G�meos costuma apreciar novas ideias, novos lugares e novas pessoas. G�meos tem carisma de sobra e tende a fazer amigos com muita facilidade. A superficialidade e a inconsequ�ncia tamb�m podem ser algumas das marcas do signo.\n");
	            printf("Planeta: Merc�rio\n");
	            printf("Pressione enter para continuar...");
				getchar();
   				break;
			case '4':		
	            printf("Voc� selecionou C�ncer. Aqui est� uma mensagem para C�ncer.\n");
	            printf("Quem tem sol em C�ncer costuma buscar o que lhe traz seguran�a. O signo � maternal e emotivo e tem uma proximidade com o apego ao passado. C�ncer costuma ter a intui��o acentuada, sentir as coisas no ar e captar tudo logo no primeiro olhar.\n");
	            printf("Satelite: Lua\n");
	            printf("Pressione enter para continuar...");
				getchar();
   				break;
			case '5':		
	            printf("Voc� selecionou Le�o. Aqui est� uma mensagem para Le�o.\n");
	            printf("Quem tem sol em Le�o costuma amar plateias e aplausos. O signo tem a coragem e o humor como marcas registradas, mas tamb�m o orgulho e o autoritarismo. Le�o geralmente valoriza as oportunidades e aproveita cada momento, sabe amar e ter generosidade.\n");
	            printf("Estrela: Sol\n");
	            printf("Pressione enter para continuar...");
				getchar();
   				break;
			case '6':		
	            printf("Voc� selecionou Virgem. Aqui est� uma mensagem para Virgem.\n");
	            printf("Quem tem sol em Virgem costuma buscar constantemente a perfei��o, tudo sempre poderia estar um pouco melhor. Signo observador, que costuma identificar o detalhe que ningu�m mais percebe. Virgem tem praticidade e organiza��o, mas tamb�m pode ser frio e c�tico.\n");
	            printf("Planeta: Merc�rio\n");
	            printf("Pressione enter para continuar...");
				getchar();
   				break;
			case '7':		
	            printf("Voc� selecionou Libra. Aqui est� uma mensagem para Libra.\n");
	            printf("Quem tem sol em Libra costuma buscar sempre o equil�brio e conviver com a indecis�o. Regido por V�nus, o signo tem uma aproxima��o natural com as artes. Libra costuma ter �tica, mas tamb�m pode ter vaidade em excesso e comportamentos considerados de �mau gosto�.\n");
	            printf("Planeta: V�nus\n");
	            printf("Pressione enter para continuar...");
				getchar();
   				break;
			case '8':		
	            printf("Voc� selecionou Escorpi�o. Aqui est� uma mensagem para Escorpi�o.\n");
	            printf("Quem tem sol em Escorpi�o costuma ter muita perspic�cia, n�o � a toa que s�o naturalmente detetives. O sexto sentido do signo alerta para poss�veis �perigos� logo de cara. Escorpi�o tem uma capacidade de regenera��o �nica, mas tamb�m pode ter muitos ci�mes.\n");
	            printf("Planetas: Marte e Plut�o\n");
	            printf("Pressione enter para continuar...");
				getchar();
   				break;
			case '9':		
	            printf("Voc� selecionou Sargit�rio. Aqui est� uma mensagem para Sagirt�rio.\n");
	            printf("Quem tem sol em Sagit�rio costuma ser viajante, sua casa � o mundo inteiro. O signo viaja muito tamb�m em sua pr�pria mente. N�o tente aprisionar Sagit�rio de nenhuma forma, ele n�o aceita limites. Otimista e jovial, pode ter exageros e uma dose de deboche.\n");
	            printf("Planeta: J�piter\n");
	            printf("Pressione enter para continuar...");
				getchar();
   				break;
			case '10':		
	            printf("Voc� selecionou Capric�rnio. Aqui est� uma mensagem para Capric�rnio.\n");
	            printf("Quem tem sol em Capric�rnio costuma ter seus prop�sitos e metas bem definidos. Signo de praticidade que segue as regras do jogo tem total no��o dos seus limites. Capric�rnio � maduro e bem humorado, mas tamb�m pode ser frio nas rela��es e um tanto pessimista.\n");
	            printf("Planeta: Saturno\n");
	            printf("Pressione enter para continuar...");
				getchar();
   				break;
			case '11':		
	            printf("Voc� selecionou Aqu�rio. Aqui est� uma mensagem para Aqu�rio.\n");
	            printf("Quem tem sol em Aqu�rio costuma ter a amizade como cart�o de visita e ter uma conex�o intensa com a liberdade. Signo idealista, tende a dar prefer�ncia aos di�logos racionais. Aqu�rio � solid�rio e humano, tamb�m pode ser radical e bem �do contra�.\n");
	            printf("Planeta: Saturno e Urano.\n");
	            printf("Pressione enter para continuar...");
				getchar();
   				break;
			case '12':		
	            printf("Voc� selecionou Peixes. Aqui est� uma mensagem para Peixes.\n");
	            printf("Quem tem sol em Peixes costuma entender tudo sem precisar de muitas palavras, possuem uma sensibilidade superior. Signo compassivo e inspirador, Peixes tende a ter uma forte conex�o com a espiritualidade, mas pode se iludir com certa facilidade.\n");
	            printf("Planeta: Jupiter e Neturno\n");
	            printf("Pressione enter para continuar...");
				getchar();
   				break;   	   
	        case '0':	
	        	return;	
				default:
	            printf("Op��o inv�lida. Escolha uma op��o v�lida do menu.\n");
	            printf("Pressione enter para continuar...");
				getchar();
	            break;
            
}
        if (opcao1[0] != '0') {
            printf("Pressione enter para continuar...");
            getchar();
}
}
}
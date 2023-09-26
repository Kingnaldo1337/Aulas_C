void sobreSeuSigno(void) {
	char opcao1[2];
		while(1){
        system("clear");
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
    			printf("Pressione enter para continuar...");
				getchar();
 	   	    	break;
	        case '2':		
	            printf("Você selecionou Touro. Aqui está uma mensagem para Touro.\n");
	            printf("Quem tem sol em Touro costuma não abrir mão do que traz conforto e bem-estar, mas pode ter a possessividade em evidência. O signo preza pela beleza física e pela gula. A satisfação de Touro vem do contato com todos os cinco sentidos.\n");
	            printf("Planeta: Vênus\n");
	            printf("Pressione enter para continuar...");
				getchar();
   				break;
			case '3':		
	            printf("Você selecionou Gêmeos. Aqui está uma mensagem para Gêmeos.\n");
	            printf("Quem tem sol em Gêmeos costuma apreciar novas ideias, novos lugares e novas pessoas. Gêmeos tem carisma de sobra e tende a fazer amigos com muita facilidade. A superficialidade e a inconsequência também podem ser algumas das marcas do signo.\n");
	            printf("Planeta: Mercúrio\n");
	            printf("Pressione enter para continuar...");
				getchar();
   				break;
			case '4':		
	            printf("Você selecionou Câncer. Aqui está uma mensagem para Câncer.\n");
	            printf("Quem tem sol em Câncer costuma buscar o que lhe traz segurança. O signo é maternal e emotivo e tem uma proximidade com o apego ao passado. Câncer costuma ter a intuição acentuada, sentir as coisas no ar e captar tudo logo no primeiro olhar.\n");
	            printf("Satelite: Lua\n");
	            printf("Pressione enter para continuar...");
				getchar();
   				break;
			case '5':		
	            printf("Você selecionou Leão. Aqui está uma mensagem para Leão.\n");
	            printf("Quem tem sol em Leão costuma amar plateias e aplausos. O signo tem a coragem e o humor como marcas registradas, mas também o orgulho e o autoritarismo. Leão geralmente valoriza as oportunidades e aproveita cada momento, sabe amar e ter generosidade.\n");
	            printf("Estrela: Sol\n");
	            printf("Pressione enter para continuar...");
				getchar();
   				break;
			case '6':		
	            printf("Você selecionou Virgem. Aqui está uma mensagem para Virgem.\n");
	            printf("Quem tem sol em Virgem costuma buscar constantemente a perfeição, tudo sempre poderia estar um pouco melhor. Signo observador, que costuma identificar o detalhe que ninguém mais percebe. Virgem tem praticidade e organização, mas também pode ser frio e cético.\n");
	            printf("Planeta: Mercúrio\n");
	            printf("Pressione enter para continuar...");
				getchar();
   				break;
			case '7':		
	            printf("Você selecionou Libra. Aqui está uma mensagem para Libra.\n");
	            printf("Quem tem sol em Libra costuma buscar sempre o equilíbrio e conviver com a indecisão. Regido por Vênus, o signo tem uma aproximação natural com as artes. Libra costuma ter ética, mas também pode ter vaidade em excesso e comportamentos considerados de “mau gosto”.\n");
	            printf("Planeta: Vênus\n");
	            printf("Pressione enter para continuar...");
				getchar();
   				break;
			case '8':		
	            printf("Você selecionou Escorpião. Aqui está uma mensagem para Escorpião.\n");
	            printf("Quem tem sol em Escorpião costuma ter muita perspicácia, não é a toa que são naturalmente detetives. O sexto sentido do signo alerta para possíveis “perigos” logo de cara. Escorpião tem uma capacidade de regeneração única, mas também pode ter muitos ciúmes.\n");
	            printf("Planetas: Marte e Plutão\n");
	            printf("Pressione enter para continuar...");
				getchar();
   				break;
			case '9':		
	            printf("Você selecionou Sargitário. Aqui está uma mensagem para Sagirtário.\n");
	            printf("Quem tem sol em Sagitário costuma ser viajante, sua casa é o mundo inteiro. O signo viaja muito também em sua própria mente. Não tente aprisionar Sagitário de nenhuma forma, ele não aceita limites. Otimista e jovial, pode ter exageros e uma dose de deboche.\n");
	            printf("Planeta: Júpiter\n");
	            printf("Pressione enter para continuar...");
				getchar();
   				break;
			case '10':		
	            printf("Você selecionou Capricórnio. Aqui está uma mensagem para Capricórnio.\n");
	            printf("Quem tem sol em Capricórnio costuma ter seus propósitos e metas bem definidos. Signo de praticidade que segue as regras do jogo tem total noção dos seus limites. Capricórnio é maduro e bem humorado, mas também pode ser frio nas relações e um tanto pessimista.\n");
	            printf("Planeta: Saturno\n");
	            printf("Pressione enter para continuar...");
				getchar();
   				break;
			case '11':		
	            printf("Você selecionou Aquário. Aqui está uma mensagem para Aquário.\n");
	            printf("Quem tem sol em Aquário costuma ter a amizade como cartão de visita e ter uma conexão intensa com a liberdade. Signo idealista, tende a dar preferência aos diálogos racionais. Aquário é solidário e humano, também pode ser radical e bem “do contra”.\n");
	            printf("Planeta: Saturno e Urano.\n");
	            printf("Pressione enter para continuar...");
				getchar();
   				break;
			case '12':		
	            printf("Você selecionou Peixes. Aqui está uma mensagem para Peixes.\n");
	            printf("Quem tem sol em Peixes costuma entender tudo sem precisar de muitas palavras, possuem uma sensibilidade superior. Signo compassivo e inspirador, Peixes tende a ter uma forte conexão com a espiritualidade, mas pode se iludir com certa facilidade.\n");
	            printf("Planeta: Jupiter e Neturno\n");
	            printf("Pressione enter para continuar...");
				getchar();
   				break;   	   
	        case '0':	
	        	return;	
				default:
	            printf("Opção inválida. Escolha uma opção válida do menu.\n");
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
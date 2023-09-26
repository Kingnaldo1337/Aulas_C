void horoscopoDiario(void) {
    const char* signos[12] = {
        "�ries", "Touro", "Gemeos", "C�ncer", "Le�o", "Virgem",
        "Libra", "Escorpi�o", "Sagirt�rio", "Capric�rnio", "Aqu�rio", "Peixes"
    };
    
    const char* horoscopos[7] = {
        "Hoje � um dia de sorte no trabalho. Aproveite as oportunidades que surgirem.",
        "Seja cuidadoso nas suas decis�es financeiras hoje. Evite gastos desnecess�rios.",
        "Sua energia e criatividade est�o em alta. � um bom momento para atividades sociais.",
        "É hora de cuidar da sua sa�de. Mantenha uma alimenta��o equilibrada e pratique exerc�cios.",
        "Este � um dia favor�vel para investir em relacionamentos. Mostre seu apoio aos amigos.",
        "Fique atento �s oportunidades de aprendizado. Novos conhecimentos est�o ao seu alcance.",
        "Hoje � um bom dia para relaxar e cuidar de si mesmo. Tire um tempo para o autocuidado."
    };
    
    int signoIndex = rand() % 12;
    int horoscopoIndex = rand() % 7;

    printf("Horosc�po para %s:\n%s\n", signos[signoIndex], horoscopos[horoscopoIndex]);
}
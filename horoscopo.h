void horoscopoDiario(void) {
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
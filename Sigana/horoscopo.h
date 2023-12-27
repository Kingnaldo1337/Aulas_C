void horoscopoDiario(void) {
    const char* signos[12] = {
        "aries", "Touro", "Gemeos", "Cancer", "Leao", "Virgem",
        "Libra", "Escorpiao", "Sagirtario", "Capricornio", "Aquario", "Peixes"
    };
    
    const char* horoscopos[7] = {
        "Hoje e um dia de sorte no trabalho. Aproveite as oportunidades que surgirem.",
        "Seja cuidadoso nas suas decisoes financeiras hoje. Evite gastos desnecess�rios.",
        "Sua energia e criatividade estao em alta. e um bom momento para atividades sociais.",
        "É hora de cuidar da sua saude. Mantenha uma alimentacao equilibrada e pratique exercicios.",
        "Este e um dia favorovel para investir em relacionamentos. Mostre seu apoio aos amigos.",
        "Fique atento as oportunidades de aprendizado. Novos conhecimentos estao ao seu alcance.",
        "Hoje e um bom dia para relaxar e cuidar de si mesmo. Tire um tempo para o autocuidado."
    };
    
    int signoIndex = rand() % 12;
    int horoscopoIndex = rand() % 7;

    printf("Horosc�po para %s:\n%s\n", signos[signoIndex], horoscopos[horoscopoIndex]);
}
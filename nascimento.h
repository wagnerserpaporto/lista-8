#ifndef NASCIMENTO_H
#define NASCIMENTO_H

typedef struct {
    int dia;
    int mes;
    int ano;
} data_t;

int dias_de_vida(data_t nasc) {
    
    time_t agora = time(NULL);
    struct tm *data_atual = localtime(&agora);

    struct tm data_nascimento = {0};
    data_nascimento.tm_year = nasc.ano - 1900; 
    data_nascimento.tm_mon = nasc.mes - 1;  
    data_nascimento.tm_mday = nasc.dia;

    time_t nascimento_time = mktime(&data_nascimento);

    double segundos_de_vida = difftime(agora, nascimento_time);

    int dias_de_vida = segundos_de_vida / (60 * 60 * 24);
    
    return dias_de_vida;

}

#endif
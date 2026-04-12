#include <stdio.h>
#include <string.h>

//? Structs básicos:
void struct_1() {
    
    struct Carro {
        char modelo[50];
        int ano;
        int potencia;
    };

    struct Carro meuVeiculo;

    strcpy(meuVeiculo.modelo, "Onix");
    meuVeiculo.ano = 2025;
    meuVeiculo.potencia = 116;

    printf("Veiculo registrado: %s, ano %d, com %d cavalos de potencia.\n", 
           meuVeiculo.modelo, meuVeiculo.ano, meuVeiculo.potencia);
}


//? Typedef:
void struct_2(){
    // ==================================//
    // CASO 1: TYPEDEF COM TIPO BÁSICO   //
    //===================================//

    /* O que faz: Avisa o sistema que a partir de agora, a palavra "Inteiro"
       siginifica exatamente a mesma coisa que "int" [Cite: 186]          */
       typedef int Inteiro;
    
    // Usando o novo "apelido"
        Inteiro nivelBateria = 85;
        printf("O nivel da bateria está em %d%% \n", nivelBateria);


    //=====================================================//
    // CASO 2: TYPEDEF COM STRUCTS (A VERDADEIRA UTILIDADE)//
    //=====================================================//

    /*O que faz: Cria uma estrutura imediatamente a batiza com o apelido "Sensor"
    Note que não escrevemos struct Sensor ( nós colocamos o nome la no final,
    antes do ponto e virgula)                                                 */

    typedef struct {
        char modelo[50];
        int porta_leitura;
    } Sensor;

    /* Criamos a variavel apenas usando o apeelido dela.
       Veja como fica limpo, não é preciso escrever "struct Sensor meuSensor"*/

        Sensor sensorTemperatura;

        strcpy (sensorTemperatura.modelo, "Termopar Tipo K");
        sensorTemperatura.porta_leitura = 4;

        printf("Equipamento : %s, está medindo: %d", sensorTemperatura.modelo, sensorTemperatura.porta_leitura);
}


//? Subcategorias:
void struct_3(){

    struct Motor{
        int Cilindros;
        int Potencia;
    };

    struct Carro{
        char modelo[50];
        int ano;
        struct Motor propulsor; //Juntando a struct dentro da principal
    };

    struct Carro meuVeiculo;

        strcpy (meuVeiculo.modelo, "Onix");
        meuVeiculo.ano = 2025;
        meuVeiculo.propulsor.Cilindros = 4;
        meuVeiculo.propulsor.Potencia = 153;    

    printf("-Carro: %s\n-Ano: %d \n Expecificações do motor: \n-Cilindros: %d\n-Potencia:%d", meuVeiculo.modelo, meuVeiculo.ano, meuVeiculo.propulsor.Cilindros, meuVeiculo.propulsor.Potencia);

}


//? Vetor de estruturas:
void struct_4(){
    struct Carro {
        char modelo[50];
        int ano;
    };

    struct Carro frota[3]; //Criando um vetor para armazenar 3 carros

    strcpy(frota[0].modelo, "Onix");
    frota[0].ano = 2025;
    strcpy(frota[1].modelo, "Cruze");
    frota[1].ano = 2024;

    printf("Ficha da vaga 0:\n-Carro: %s\n-Ano: %d\n", frota[0].modelo, frota[0].ano);
    printf("Ficha da vaga 1:\n-Carro: %s\n-Ano: %d\n", frota[1].modelo, frota[1].ano);

}


// PAINEL DE CONTROLE
int main() {
    struct_4();
    return 0;
}
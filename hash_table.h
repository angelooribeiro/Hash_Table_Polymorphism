#ifndef HASH_TABLE_H_
#define HASH_TABLE_H_

#include <iostream>
#include <list>
#include "chave.h"
#include "valor.h"

#define SIZE 100

using namespace std;

    struct Estatistica
    {
        int max_colisoes;                          //numero maximo de colisoes
        int num_colisoes;                           //numero de colisoes
        float media_colisoes;                       //media de colisoes, em percentagem
        int num_elementos;                          //elementos inseridos
    };


class hash_table
{
    struct node {
        chave * ch;
        valor * vl;
    };

    list<node> tabela[SIZE];

    int max_colisoes = 0;                          //numero maximo de colisoes
    int num_colisoes = 0;                           //numero de colisoes
    float media_colisoes = 0.00;                       //media de colisoes, em percentagem
    int num_elementos = 0;                          //elementos inseridos

public:
    hash_table();                            //constructor
    void inserir_elemento(node&);         //para inserir um novo elemento
    //void procurar_elemento(node&);       //procura de um elemento
    //bool remover_elemento(int codigo);        //remove um elemento
    void gere_indices(int indice, char a);    //atualiza as estatisticas da tabela
    Estatistica estatisticas();                //retorna uma estrutura com as estatisticas da tabela
    void imprimir_tabela();                   //função que imprime toda a tabela;
    ~hash_table();                            //destructor
};

#endif

#ifndef CHAVE_H_
#define CHAVE_H_

#include"iostream"
using namespace std;

class chave{

    public:
       virtual int hash_function() = 0;
       virtual int compara_valor(chave&) = 0;
       virtual void imprime_chave() = 0;
};
#endif // CHAVE_H_

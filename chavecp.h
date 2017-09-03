#ifndef CHAVECP_H_
#define CHAVECP_H_

#include "chave.h"

class chavecp : public chave
{
//protected:
    int cp;
public:
    //friend chavecp;
    chavecp(int cp = 0);
    int hash_function(int cp);
    int compara_chave(chavecp&);
    void imprime_chave();
    ~chavecp();
};

#include "chavecp.cpp"

#endif // CHAVECP_H_

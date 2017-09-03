#include "chavecp.h"

chavecp::chavecp(int cp)
{
    this->cp  = cp;
}

int chavecp::hash_function(int cp)
{
    return ((cp/4) * 3);
}

//recebe um cp e compara com o atual,
//retorna 1 se diferentes
int chavecp::compara_chave(chavecp& ch)
{
    if ( (this->cp) != (ch.cp))
        return 1;
  //  else
    //    return 0;
}

void chavecp::imprime_chave()
{
    cout << cp << endl;
}

chavecp::~chavecp()
{

}

#ifndef DLLTILITAPAHTUMAT_H
#define DLLTILITAPAHTUMAT_H

#include "dlltilitapahtumat_global.h"
#include "tilitapahtumatmoottori.h"

class DLLTilitapahtumat
{

public:
    DLLTILITAPAHTUMATSHARED_EXPORT DLLTilitapahtumat();

    void DLLTILITAPAHTUMATSHARED_EXPORT DLLTilitapahtumatRajapintaFunktio(int asiakas);

    tilitapahtumatMoottori *olioTilitapahtumatMoottori;

private:

};

#endif // DLLTILITAPAHTUMAT_H

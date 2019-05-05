#ifndef DLLRFLUKIJA_H
#define DLLRFLUKIJA_H

#include "dllrflukija_global.h"
#include "rflukijamoottori.h"

//#include "kirjaudusisaanmoottori.h"

class DLLRFLukija
{

public:
    //DLLRFLukija();
    void DLLRFLUKIJASHARED_EXPORT DLLRFRajapintafunktio();
    QString DLLRFLUKIJASHARED_EXPORT DLLPalauttavaRajapintafunkio();
    RFLukijaMoottori *olioRFLukijaMoottori;
};

#endif // DLLRFLUKIJA_H

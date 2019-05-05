#ifndef DLLKIRJAUDUSISAAN_H
#define DLLKIRJAUDUSISAAN_H

#include "dllkirjaudusisaan_global.h"
#include "kirjaudusisaanmoottori.h"


class DLLKirjauduSisaan
{

public:
    //DLLKirjauduSisaan();
    void DLLKIRJAUDUSISAANSHARED_EXPORT rajapintafunktioDLLKirjauduSisaan();
private:
    KirjauduSisaanMoottori *olioKirjauduSisaanMoottori;

};

#endif // DLLKIRJAUDUSISAAN_H

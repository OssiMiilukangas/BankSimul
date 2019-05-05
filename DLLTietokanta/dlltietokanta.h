#ifndef DLLTIETOKANTA_H
#define DLLTIETOKANTA_H

#include "dlltietokanta_global.h"
#include "tietokantamoottori.h"


class DLLTietokanta
{

public:
    void DLLTIETOKANTASHARED_EXPORT DLLTietokantaRajapintafunktio();

private:
    TietokantaMoottori *olioTietokantaMoottori;
};

#endif // DLLTIETOKANTA_H

#include "dlltietokanta.h"

void DLLTietokanta::DLLTietokantaRajapintafunktio()
{
    olioTietokantaMoottori = new TietokantaMoottori;

    olioTietokantaMoottori->createConnection();
}


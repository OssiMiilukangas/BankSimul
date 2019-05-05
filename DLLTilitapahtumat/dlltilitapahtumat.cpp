#include "dlltilitapahtumat.h"

DLLTilitapahtumat::DLLTilitapahtumat()
{
    olioTilitapahtumatMoottori = new tilitapahtumatMoottori;
    olioTilitapahtumatMoottori->hide();
}

void DLLTilitapahtumat::DLLTilitapahtumatRajapintaFunktio(int asiakas)
{
    olioTilitapahtumatMoottori->palautus(asiakas);
    olioTilitapahtumatMoottori->showFullScreen();
    olioTilitapahtumatMoottori->exec();
    delete olioTilitapahtumatMoottori;
}

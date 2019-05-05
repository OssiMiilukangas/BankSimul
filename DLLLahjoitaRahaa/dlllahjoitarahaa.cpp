#include "dlllahjoitarahaa.h"


DLLLahjoitaRahaa::DLLLahjoitaRahaa()
{
    oliomoottoriDialog = new MoottoriDialog;
    oliomoottoriDialog->hide();
}

void DLLLahjoitaRahaa::rajapintafunktioDLLLahjoita(int asiakas)
{   
    oliomoottoriDialog -> palautus(asiakas);
    oliomoottoriDialog -> showFullScreen();
    oliomoottoriDialog -> exec();
    delete oliomoottoriDialog;
}

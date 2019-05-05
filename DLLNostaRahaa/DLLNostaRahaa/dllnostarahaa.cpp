#include "dllnostarahaa.h"

DLLNostaRahaa::DLLNostaRahaa()
{
    oliomoottoriNostaRahaa = new MoottoriNostaRahaa;
    oliomoottoriNostaRahaa->hide();
}

void DLLNostaRahaa::rajapintafunktioDLLNosta(int asiakas)
{
    oliomoottoriNostaRahaa -> palautus(asiakas);
    oliomoottoriNostaRahaa -> showFullScreen();
    oliomoottoriNostaRahaa -> exec();

    delete oliomoottoriNostaRahaa;
}

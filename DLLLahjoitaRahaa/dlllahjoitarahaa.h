#ifndef DLLLAHJOITARAHAA_H
#define DLLLAHJOITARAHAA_H

#include "dlllahjoitarahaa_global.h"
#include "moottoridialog.h"

class DLLLahjoitaRahaa
{

public:
    DLLLAHJOITARAHAASHARED_EXPORT DLLLahjoitaRahaa();

    void DLLLAHJOITARAHAASHARED_EXPORT rajapintafunktioDLLLahjoita(int asiakas);

    MoottoriDialog *oliomoottoriDialog;

private:


};

#endif // DLLLAHJOITARAHAA_H

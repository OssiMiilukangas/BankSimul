#ifndef DLLNOSTARAHAA_H
#define DLLNOSTARAHAA_H

#include "dllnostarahaa_global.h"
#include "moottorinostarahaa.h"

class DLLNostaRahaa
{

public:
    DLLNOSTARAHAASHARED_EXPORT DLLNostaRahaa();

    void DLLNOSTARAHAASHARED_EXPORT rajapintafunktioDLLNosta(int asiakas);

    MoottoriNostaRahaa *oliomoottoriNostaRahaa;

private:


};

#endif // DLLNOSTARAHAA_H

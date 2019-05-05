#include "dllrflukija.h"


/*DLLRFLukija::DLLRFLukija()
{

}
*/

void DLLRFLukija::DLLRFRajapintafunktio()
{
    olioRFLukijaMoottori = new RFLukijaMoottori;
    olioRFLukijaMoottori->RFLukijaMoottoriPalautus();
}

QString DLLRFLukija::DLLPalauttavaRajapintafunkio()
{
    return olioRFLukijaMoottori->Palauttaja();
}




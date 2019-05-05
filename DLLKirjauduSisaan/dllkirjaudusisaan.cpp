#include "dllkirjaudusisaan.h"


/*DLLKirjauduSisaan::DLLKirjauduSisaan()
{
}
*/
void DLLKirjauduSisaan::rajapintafunktioDLLKirjauduSisaan()
{
    olioKirjauduSisaanMoottori = new KirjauduSisaanMoottori;
    olioKirjauduSisaanMoottori->showFullScreen();
    olioKirjauduSisaanMoottori->exec();
    delete olioKirjauduSisaanMoottori;
}

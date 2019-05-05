#ifndef DLLMAINMENU_H
#define DLLMAINMENU_H

#include "dllmainmenu_global.h"
#include "mainmenumoottori.h"

class DLLMainMenu
{

public:
    //DLLMainMenu();
    void DLLMAINMENUSHARED_EXPORT DLLMainMenuRajapintafunktio(int asiakasPalautus);

private:
    MainMenuMoottori *olioMainMenuMoottori;
};

#endif // DLLMAINMENU_H

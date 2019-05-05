#include "dllmainmenu.h"

void DLLMainMenu::DLLMainMenuRajapintafunktio(int asiakasPalautus)
{
    olioMainMenuMoottori = new MainMenuMoottori;
    olioMainMenuMoottori->asiakasPalautus(asiakasPalautus);
    olioMainMenuMoottori->naytaSaldo();
    olioMainMenuMoottori->showFullScreen();
    olioMainMenuMoottori->exec();
    delete olioMainMenuMoottori;
}


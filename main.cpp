#include <iostream>
#include <conio.h>
#include "character.h"
#include "Warrior.h"
#include "Mage.h"
#include "Archer.h"

int main()
{
    int select = 0;
    int getch();

    // for player
    // character* player = new Warrior(" ");
    Warrior Warrior1("Marek");
    Mage Mage1("Antonio");
    Archer Archer1("HughAnus");

    // for bot
    Warrior Warrior2("Norbert");
    Mage Mage2("Bob");
    Archer Archer2("PabloTheSecond");

    cout << "Choose ur character" << endl;
    cout << "1. Warrior" << endl;
    cout << "2. Archer" << endl;
    cout << "3. Mage" << endl
         << endl;
    select = getch();

    // character selection
    switch (select)
    {
    case '1':
    {
        Warrior *player = new Warrior("Antoni");
        player->introduce();
        break;
    }
    case '2':
    {
        Archer *player = new Archer("Waldek");
        break;
    }
    case '3':
    {
        Mage *player = new Mage("Marek");
        break;
    }
    }

    // choose enemy
    int selectEnemy;
    cout << "Wybierz przeciwnika: " << endl;
    cout << "1. Warrior" << endl;
    cout << "2. Archer" << endl;
    cout << "3. Mage" << endl
         << endl;
    selectEnemy = getch();

    // encounter

    switch (selectEnemy)
    {
    case '1':
    {
        Warrior2.introduce();
        break;
    }
    case '2':
    {
        Archer2.introduce();
        break;
    }
    case '3':
    {
        Mage2.introduce();
        break;
    }
    }

    // fight

    /*while (character.isAlive())
    {
        player.hp
    }*/
}

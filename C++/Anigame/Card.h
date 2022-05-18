#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include "LifeEntity.h"
#include "LifeEntity.cpp"
#include <unordered_map>

using namespace std;
//struct of stats of characters
struct card_value{
    string Name;
    int HP;
    int ATK;
    int DEF;
    int SPD;
    string skill;
    string Rarity;
    int Level;
};
//player characters
unordered_map<int, card_value> playerCard{
    {1,card_value{"Amatsuka Uto",1000,100,60,100,"Berserker","super rare",1}},
    {2,card_value{"Akai Haato",780,125,34,130,"Defend Breaker","super rare",1}},
    {3,card_value{"Shirakami Fubuki",1300,72,79,130,"Attack Breaker","super rare",1}},
    {4,card_value{"Syusetsu Kohaku",850,134,43,107,"Gunshot","super rare", 1}},
    {5,card_value{"Shirogane Noel",1500,84,66,80,"Fortified","super rare",1}}
};
//enemies
unordered_map<int, card_value> enemyCard{
    {0,card_value{"Cookie monster",1,100,60,100,"Heal","rare",1}}
};
//declaration of different skills
class Card : public LifeEntity {
    public:
        Card(int n, int floor, bool isPlayer);
        int Attack(LifeEntity*ecard);
        bool whoFaster(LifeEntity*ecard);
        bool levelUp();
        void berserker();
        void defendBreaker(LifeEntity*ecard);
        void attackBreaker(LifeEntity*ecard);
        int gunshot(LifeEntity*ecard);
        void fortified();
        void heal();
        void whichSkill(LifeEntity*ecard);
        bool useSkill;
    private:

};
#endif
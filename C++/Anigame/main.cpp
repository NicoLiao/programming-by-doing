#include <iostream>
#include <unordered_map>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <windows.h>
#include "Card.h"
#include "Card.cpp"
using namespace std;

//Battle, show stats of enemy first and do Attack()
bool Battle(Card *initial, Card *enemy) {
    cout << "Card Name: " << enemy->getName() << endl;
    cout << "Rarity: " << enemy->getRarity() << endl;
    cout << "Level: " << enemy->getLVL() << endl;



    cout << "HP: " << enemy->getMaxHP() << endl;
    cout << "ATK: " << enemy->getATK() << endl;
    cout << "DEF: " << enemy->getDEF() << endl;
    cout << "SPD: " << enemy->getSPD() << endl;
    while(initial->getHP() > 0 && enemy->getHP() > 0) {
        
        int dmg;
        if(initial->whoFaster(enemy)==false) {
            cout << "The enemy is faster" << endl;
            if(rand()%2 == 0) {
                cout << "The enemy used his skill of " << enemy->getSkill() << endl;
                enemy->whichSkill(initial);
            }   
            dmg = enemy->Attack(initial);
            cout << "The enemy " << enemy->getName() << " dealt " << dmg << ", your current hp is " << initial->getHP() << endl;
            
            Sleep(1000);
            if(initial->getHP() <= 0) {
                break;
            }
            if(rand()%2 == 0) {
                cout << "Your " << initial->getName() << " used the skill of " << initial->getSkill() << endl;
                initial->whichSkill(enemy);
            }   
            dmg = initial->Attack(enemy);
            cout << "Your " << initial->getName() << " dealt " << dmg << ", enemy's current hp is " << enemy->getHP() << endl;
            

        }else {
            cout << "Your " << initial->getName() << " is faster" << endl;
            if(rand()%2 == 0) {
                cout << "Your " << initial->getName() << " used the skill of " << initial->getSkill() << endl;
                initial->whichSkill(enemy);
            }
            dmg = initial->Attack(enemy);
            cout << "Your " << initial->getName() << " dealt " << dmg << ", enemy's current hp is " << enemy->getHP() << endl;
            
            Sleep(1000);
            if(enemy->getHP() <= 0) {
                break;
            }
            if(rand()%2 == 0) {
                cout << "The enemy used his skill of " << enemy->getSkill() << endl;
                enemy->whichSkill(initial);
            }   
            dmg = enemy->Attack(initial);
            cout << "The enemy " << enemy->getName() << " dealt " << dmg << ", your current hp is " << initial->getHP() << endl;
            
        }
        Sleep(2000);
    }
    initial->useSkill = false;
    initial->bonusATK = 0;
    initial->bonusDEF = 0;
    //who won
    if(initial->getHP() > enemy->getHP()) {
        cout << "Your " << initial->getName() << " won!" << endl;
        initial->setHP(initial->getMaxHP());
        return true;
    }else if(enemy->getHP() > initial->getHP()) {
        cout << "Your " << initial->getName() << " lost!" << endl;
        initial->setHP(initial->getMaxHP());
        return false;
    }
    
}
//give experience if win
void giveEXP(Card *initial, bool result) {
    if(result == true) {
        int exp = (rand()%40 + 80);
        initial->addEXP(exp);
        if(initial->levelUp() == true) {
            cout << "You leveled up!" << endl;
        }
        cout << "You received " << exp << "exp!" << endl;
    }
}
//Show information and stats of the card
void showInfo(Card *initial) {
    cout << "Card Name: " << initial->getName() << endl;
    cout << "Rarity: " << initial->getRarity() << endl;
    cout << "Level: " << initial->getLVL() << endl;
    cout << "EXP: " << initial->getEXP() << endl;
    cout << "HP: " << initial->getMaxHP() << endl;
    cout << "ATK: " << initial->getATK() << endl;
    cout << "DEF: " << initial->getDEF() << endl;
    cout << "SPD: " << initial->getSPD() << endl;
}
int main() {

    srand(time(NULL));
    int n;
    n = rand()%5 + 1;
    Card initial(n, 0, true);
    int floor = 1;
    int maxFloor = 1;
    int select;

    while(true) {
        //options
        cout << "1. Check card info" << endl;
        cout << "2. Battle" << endl;
        cout << "3. Quit" << endl;
        cin >> select;
        
        if(select == 1) {
            
            showInfo(&initial);
        }if (select == 2) {
            cout << "Which floor do you wanna go, you now have unlocked up to floor " << maxFloor << endl;
            cin >> floor;
            if(floor <= maxFloor) {
                Card enemy(0, floor, false);
                bool result = Battle(&initial, &enemy);
                giveEXP(&initial, result);
                if(result == true) {
                    if(floor == maxFloor) {
                        maxFloor++;
                    }
                    floor += 1;

                }
            }
            
        }if (select == 3) {
            cout << "Bye" << endl;
            break;
        }
    }
    
}
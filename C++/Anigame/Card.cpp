#include "Card.h"
//Create different cards of player and enemies
Card::Card(int n, int floor, bool isPlayer) {
    if(isPlayer == true) {
        setName(playerCard[n].Name);
        setHP(playerCard[n].HP + 20*floor);
        setATK(playerCard[n].ATK + 2*floor);
        setDEF(playerCard[n].DEF + 2*floor);
        setSPD(playerCard[n].SPD + 1*floor);
        setRarity(playerCard[n].Rarity);
        setLVL(playerCard[n].Level + 1*floor);
        setSkill(playerCard[n].skill);
    }else if(isPlayer == false) {
        setName(enemyCard[0].Name);
        setHP(enemyCard[0].HP + 20*floor);
        setATK(enemyCard[0].ATK + 2*floor);
        setDEF(enemyCard[0].DEF + 2*floor);
        setSPD(enemyCard[0].SPD + 1*floor);
        setRarity(enemyCard[0].Rarity);
        setLVL(enemyCard[0].Level + 1*floor);
        setSkill(enemyCard[0].skill);

    }


}
//determine who is faster to attack
bool Card::whoFaster(LifeEntity*ecard) {
    int espd = ecard->getSPD();
    int myspd = this->getSPD();
    if(myspd >= espd) {
        return true;
    }else {
        return false;
    }
}
//Attack
int Card::Attack(LifeEntity*ecard) {
    srand (time(NULL));
    int atk = this->getATK();
    int edef = ecard->getDEF();
    int crit = this->getRank();
    int dmg;
    //attack formula
    if(rand()%20 + 1 <= crit) {
        dmg = (rand()%int((atk+bonusATK)*0.1)+((atk+bonusATK)-int((atk+bonusATK)*0.1)))*2 - edef;
    }else {
        dmg = (rand()%int((atk+bonusATK)*0.1)+((atk+bonusATK)-int((atk+bonusATK)*0.1))) - edef;
    }
    if(dmg < 0) {
        dmg = 0;
    }
    ecard->deleteHP(dmg);
    return dmg;
}
//level up stats
bool Card::levelUp() {
    int exp = this->getEXP();
    int lvl = this->getLVL();
    if(exp >= 200*lvl) {
        this->setLVL(this->getLVL()+1);
        this->setHP(this->getMaxHP()+50);
        this->setATK(this->getATK()+5);
        this->setDEF(this->getDEF()+2);
        this->setSPD(this->getSPD()+2);
        return true;
    }
    return false;
}
//different skills
void Card::berserker() {
    this->bonusATK=(this->getATK()*1.25);
}
void Card::defendBreaker(LifeEntity*ecard) {
    ecard->bonusDEF=-(ecard->getDEF()*0.25);
}
void Card::attackBreaker(LifeEntity*ecard) {
    ecard->bonusATK=-(ecard->getATK()*0.25);
}
void Card::fortified() {
    this->bonusDEF=(this->getDEF()*1.25);
}
int Card::gunshot(LifeEntity*ecard) {
    int atk = this->getATK();
    int dmg;
    dmg = (rand()%int((atk+bonusATK)*0.5)+((atk+bonusATK)));
    ecard->deleteHP(dmg);
    return dmg;
}
void Card::heal() {
    if(getHP()+(this->getHP()*0.25) > this->getMaxHP()) {
        this->setHP(getMaxHP());
    }else {
        this->setHP(getHP()+(this->getHP()*0.25));

    }
}
//determine which skill is it
void Card::whichSkill(LifeEntity*ecard) {
    if(getSkill() == "Berserker") {
        berserker();
    }else if(getSkill() == "Defend Breaker") {
        defendBreaker(ecard);
    }else if(getSkill() == "Attack Breaker") {
        attackBreaker(ecard);
    }else if(getSkill() == "Fortified") {
        fortified();
    }else if(getSkill() == "Gunshot") {
        gunshot(ecard);
    }else if(getSkill() == "Heal") {
        heal();
    }
}

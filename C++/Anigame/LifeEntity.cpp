#include "LifeEntity.h"
//set and get different stats
void LifeEntity::setHP(int maxhp) {
    m_maxhp = maxhp;
    m_hp = maxhp;
}
void LifeEntity::deleteHP(int dmg) {
    m_hp -= dmg;
}
int LifeEntity::getHP() {
    return m_hp;
}
int LifeEntity::getMaxHP() {
    return m_maxhp;
}

void LifeEntity::setATK(int atk) {
    m_atk = atk;
}
int LifeEntity::getATK() {
    return m_atk;
}

void LifeEntity::setDEF(int def) {
    m_def = def;
}
int LifeEntity::getDEF() {
    return m_def;
}

void LifeEntity::setSPD(int spd) {
    m_spd = spd;
}
int LifeEntity::getSPD() {
    return m_spd;
}

void LifeEntity::setRarity(string rarity) {
    m_rarity = rarity;
    if(m_rarity == "common") {
        m_rarity_rank = 1;
    }else if(m_rarity == "rare") {
        m_rarity_rank = 2;
    }else if(m_rarity == "super rare") {
        m_rarity_rank = 3;
    }else if(m_rarity == "ultra rare") {
        m_rarity_rank = 4;
    }
}
string LifeEntity::getRarity() {
    return m_rarity;
}
int LifeEntity::getRank() {
    return m_rarity_rank;
}


void LifeEntity::setName(string name) {
    m_name = name;
}
string LifeEntity::getName() {
    return m_name;
}

void LifeEntity::setLVL(int lvl) {
    m_lvl = lvl;
}
int LifeEntity::getLVL() {
    return m_lvl;
}

void LifeEntity::addEXP(int exp) {
    m_exp += exp;
}
int LifeEntity::getEXP() {
    return m_exp;
}

void LifeEntity::setSkill(string skill) {
    m_skill = skill;
}
string LifeEntity::getSkill() {
    return m_skill;
}
#ifndef LIFEENTITY_H
#define LIFEENTITY_H
#include <iostream>

using namespace std;
class LifeEntity {
    public:
        //Hp functions
        void setHP(int maxhp);
        void deleteHP(int dmg);
        int getHP();
        int getMaxHP();
        //Atk functions
        void setATK(int atk);
        int getATK();
        //Def functions
        void setDEF(int def);
        int getDEF();
        //Spd functions
        void setSPD(int spd);
        int getSPD();
        //level and exp functions
        void setLVL(int lvl);
        int getLVL();

        void addEXP(int exp);
        int getEXP();

        void setRarity(string rarity);
        string getRarity();
        int getRank();
        
        void setName(string name);
        string getName();
        int bonusATK = 0;
        int bonusDEF = 0;
        
        void setSkill(string skill);
        string getSkill();
        
    private:
        //variables such as stats
        
        int m_hp;
        int m_maxhp;
        
        int m_atk;
        int m_def;
        int m_spd;
        int m_lvl;
        int m_exp=0;
        string m_rarity;
        int m_rarity_rank;
        string m_name;
        string m_skill;
};
#endif
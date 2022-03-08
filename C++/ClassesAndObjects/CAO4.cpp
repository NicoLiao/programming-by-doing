

#include <iostream>
#include <string>
using namespace std;

class Moon{
    private:
    string name; //name of moon
    double distance; //distance from the planet it is the moon of
    double mass; // mass of moon
    double diameter; //diameter of moon

    public:
    Moon () {};

    Moon (string n, double d, double m, double dia){ //constructor
        name = n;
        distance = d;
        mass = m;
        diameter = dia;
    }

    string getName(){
        return name;
    }

    double getDistance(){
        return distance;
    }

    double getMass(){
        return mass;
    }

    double getDiameter(){
        return diameter;
    }



};

class Planet{
    private:
    string name; //name of planet
    double distance; //distance from sun
    double mass; //mass of planet
    double diameter; // diameter of planet
    int numMoons; //number of moons
    Moon TopMoons[3] ; //top 3 moons of the planet

    public:
    Planet () {};

    Planet(string n, double d, double m, double dia, int mn){
        name = n;
        distance = d;
        mass = m;
        diameter = dia;
        numMoons = mn;
    }

    void setMoons(Moon a, Moon b, Moon c){
        TopMoons[0] = a;
        TopMoons[1] = b;    
        TopMoons[2] = c;
    }

    string getName (){
        return name;
    }

    double getDistance (){
        return distance;
    }

    double getMass(){
        return mass;
    }

    double getDiameter(){
        return diameter;
    }

    double getNMoons(){
        return numMoons;
    }
};

int main (){
    Moon moonlist [] = {
        //Moon (string name, double distance, double mass(10^15 kg), double diameter)
        Moon ("Phobos", 11.4, 10.6, 9.1*2),
        Moon ("Deimos", 6.0, 2.4, 5.1*2),
        
    };


    Planet solarSystem [] = {
        //Planet(string n, double d, double m, double dia, int mn)
        Planet ("Mercury", 46.29, 0.33011, 4879, 0) //10^24 kg

    };




    return 0;
}
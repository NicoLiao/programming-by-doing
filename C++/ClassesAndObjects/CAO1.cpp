#include <iostream>

#include <string>

using namespace std;

class Dog {
  private:
    string name;
  int age;
  double weight;
  char gender;
  public:
    Dog(int a, double w) { 
      age = a;
      weight = w;
    }

  void setAge(int a) {
    if (a < 1) {
      age = 0;
    }
    age = a;
  }
  string getName() { 
    return name;
  }
  int getAge() { 
    return age;
  }

  double getWeight() { 
    return weight;
  }
};

int main() {
  int age;
  double weight;
  Dog pet(5, 10.5); 
  cout << "The " << pet.getAge() << " years old dog is " << pet.getWeight() << " kg " << endl;
}
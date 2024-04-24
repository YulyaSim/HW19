// PracticalWork19.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    virtual void Voice()
    {}
};

class Dog :public Animal
{
public:
    void Voice() override
    {
        cout << "Dog " << "speak WOOF-WOOF" << endl;
    }
};

   class Cat :public Animal
   {
    public:
        void Voice() override
        {
            cout << "Cat "<< "speak MEOW-MEOW" << endl;
        }
    };
   class Owl :public Animal
  {
   public:
       void Voice() override
       {
           cout << "Owl " << "speak WHOOO-WHOOO" << endl;
       }
  };


    int main()
    {
       
        Animal * newAnimal[3];
        newAnimal[0] = new Dog();
        newAnimal[1] = new Cat();
        newAnimal[2] = new Owl();
     
        for (Animal* a : newAnimal)
        {
            a->Voice();
        }
        return 0;
    };



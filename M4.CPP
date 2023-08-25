#include<iostream.h>
#include<conio.h>
#include<string.h>

class Animal
{
private:
    char name[20];
    int age;

public:
    void setData(const char* n, int a)
    {
	strcpy(name, n);
	age = 20;
    }

    void display()
    {
	cout << "Animal: Cow: \n" << name << "Age: \n" << age << "\n";
    }
};

class Dog:public Animal
{
private:
    char breed[20];

public:
    void setBreed(const char* b)
    {
      //	strcpy(breed, b);
    }

    void display()
    {
	Animal::display();
	cout << "Dog Breed: \n" << breed;
    }
};

void main()
{
    clrscr();

    Dog myDog;
    myDog.setData("Buddy", 3);
    myDog.setBreed("Golden Retriever");


    myDog.Animal::display();

    myDog.display();

    getch();
}

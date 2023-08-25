#include<conio.h>
#include<iostream.h>
class Father
{
    int age;
    private: 
             void setdata()
             {
                cout << "enter your value";
                cin >> age;
             }
             void getdata()
             {
                cout << age;
             }
    public: 
            void printdata()
            {
                setdata();
                getdata();
            }
};
class Son:public:Father
{
    int age;
    private:
            void setdata()
            {
                cout << "Enter your value";
                cin >> age;
            }
            void getdata()
            {
                cout << age;
            }
    public:
            void dauther()
            {
                setdata();
                getdata();
            }
};
class Daughter: public Son
{
    int age
    private:
            void setdata()
            {
                cout << "enter yu value";
                cin >> age;
            }
            void getdata()
            {
                cout << age;
            }
};
void main()
{
    int a;
    Daughter obj;
    obj.printdata();
    obj.age = 20;

    cout << obj.age;

}
#include<conio.h>
#include<iostream.h>
class Father
{
    int age;
    private:
	     void setdata()
	     {
		cout << "Enter Your Value: ";
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
class Son: public Father
{
    int age;
    private:
	    void setdata()
	    {
		cout << "Enter Your Value: ";
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
    public:
    int age;
    private:
	    void setdata()
	    {
		cout << "enter Your Value: ";
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
    clrscr();
    obj.printdata();
    obj.age = 20;

    cout << obj.age;
    getch();

}
#include<conio.h>
#include<iostream.h>
class Parent
{
   int ans;
   public:
	  void test()
	  {
	   int a,b;

	   cout << "Enter Value: ";
	   cin >> a >> b;

	   ans = a+b;
	   cout << ans;
	  }

};
class Child:public Parent
{
   public:
	  void test2()
	  {
	     test();
	  }


};
void main()
{
  Child obj;
  clrscr();

  obj.test2();

  getch();


}
#include<iostream.h>
#include<conio.h>
class addAmount{
	public:
	static int amount;
		addAmount(){
			cout<<"Amount in piggy bank is " <<amount<<endl;
		}
		addAmount(int a){
			amount+=a;
		}
		void display()
		{
			cout<<"Amount in piggy bank is "<<amount;
		}
};
int addAmount::amount=50;
int main()
{
	int num;
	clrscr();
	cout<<"Enter amount to be added ";
	cin>>num;
	addAmount ob;
	addAmount obj(num);
	ob.display();
	getch();
}
// program for abstract class

#include<iostream>
using namespace std;

class car                      //abstract class
{
    public:
        virtual void start()=0;
        virtual void stop()=0;
};
class swift : public car{
    public:
        void start(){cout<<"Swift started"<<endl;}
        void stop(){cout<<"Swift stopped"<<endl;}
};
class innova : public car
{
    public:
        void start(){cout<<"Innova started"<<endl;}
        void stop(){cout<<"Innova stopped"<<endl;}
};
int main()
{
    car *c = new swift();
    c -> start();
    c = new innova();
    c -> stop();
    return 0;
}
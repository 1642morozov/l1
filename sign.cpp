#include <iostream>
#include "sign.h"
using namespace std;
/*class sign{
public:
    char *name;  //имя фамилия
    char *sig;
    //oven    21 march-19 aprill      ram
    //telec   20 aprill-20 may        bull
    //blizneci21 may-20 iuni          twins
    //rak     21 iuni-22 iuli         crab
    //lev     23 iuli- 22 avgust      lion
    //deva    23 avgust-22 sentyabri  maiden
    //vesi    23 sentyabr-22 october  scales
    //scorpion23 october-21 noyabr    scorpion
    //strelec 22 noyabr -21 decabr    archer
    //kozerog 22 decabr -19 yanvar    sea-goat
    //vodoley 20 yanvar -18 fevral    water-bearer
    //ribi    19 fevral -20 march     fish

    int data[3]; */
    sign::sign()
    {
        //char *name = new char[30];
        //char *sig = new char[15];
        data[0]=0;
        data[1]=0;
        data[2]=0;
        cout<<"ispolzovan constructor"<<endl;
    }
    sign::~sign()
    {
        data[0]=0;
        data[1]=0;
        data[2]=0;
        //delete [] name;
        //delete [] sig;
        cout<<"ispolzuem destructor"<<endl;
    }
    void sign::setsign(int day, int month, int year, char nam[30], char si[15])
    {
        int i;
        data[0]=day;
        data[1]=month;
        data[2]=year;
        /*for (i=0;nam[i]!='\n';i++)
        {
            name[i]=nam[i];
        } */
        //name[i]=nam[i];
        for (i=0;i<30;i++)
        {
            name[i]=nam[i];
        }
        for (i=0;i<15;i++)
        {
            sig[i]=si[i];
        }
    }
    void sign::getsign()
    {
        cout<<name<<endl;
        cout<<"day "<<data[0]<<"; month "<<data[1]<<"; year "<<data[2]<<endl;
        cout<<"sign - "<<sig<<endl;
    }

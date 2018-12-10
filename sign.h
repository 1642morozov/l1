#ifndef SIGN_H_INCLUDED
#define SIGN_H_INCLUDED

class sign{
public:
    char name[30];  //imya familia
    char sig[15];   /*
    oven    21 march-19 aprill      ram
    telec   20 aprill-20 may        bull
    blizneci21 may-20 iuni          twins
    rak     21 iuni-22 iuli         crab
    lev     23 iuli- 22 avgust      lion
    deva    23 avgust-22 sentyabri  maiden
    vesi    23 sentyabr-22 october  scales
    scorpion23 october-21 noyabr    scorpion
    strelec 22 noyabr -21 decabr    archer
    kozerog 22 decabr -19 yanvar    sea-goat
    vodoley 20 yanvar -18 fevral    water-bearer
    ribi    19 fevral -20 march     fish
    */
    int data[3];
    sign();
    ~sign();
    void setsign(int day, int month, int year, char nam[30],char si[15]);
    void getsign();
};

#endif // SIGN_H_INCLUDED

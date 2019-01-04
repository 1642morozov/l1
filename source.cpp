#include <iostream>
#include "sign.h"
#define k 3
using namespace std;
int main()
{   //test push
    sign *S = new sign[k];
    sign OB;
    int d, m, y, i, j, f, q, fn;
    char n[30];
    char sg[15];
    int tmp1, tmp2;
    char tmpc;
    for (i=0;i<k;i++)
    {
//        S[i]->sign();

        cout<<"vvedite imya i familiyu: ";
        cin>>n; cout<<endl;
        cout<<"vvedite znak: ";
        cin>>sg; cout<<endl;
        cout<<"vvedite datu rogdeniya: day: ";
        cin>>d; cout<<endl;
        cout<<"month: ";
        cin>>m; cout<<endl;
        cout<<"year: ";
        cin>>y; cout<<endl;
        //sign *ss = new sign();
        //S[i] = *ss;
        S[i].setsign(d, m, y, n, sg);
    }
    for (i=0;i<k;i++)
    {
        S[i].getsign();
    }
    f=1;
    do
    {
    f=0;                        //sortirovka
    for (i=0;i<k-1;i++)
    {
        if(S[i]>S[i+1])
        {
            OB=S[i]; S[i]=S[i+1]; S[i+1]=OB;
            f=1;
        }
    }
    }
    while (f==1);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    for (i=0;i<k; i++)
    {
        cout<<i+1<<endl;
        S[i].getsign();
        cout<<endl;
    }
    q=1;
    f=0;
    while (q!=0)
    {
        fn = 0;
        cout<<"vvedite znak zodiaka:"<<endl;
        cin>>sg;
        for (i=0;i<k;i++)
        {
            f=1;
            for (j=0;sg[j]!='\0';j++)
            {
                tmpc=S[i].getsi(j);
                if(tmpc!=sg[j])
                {
                    f=0;
                }
            }
            if(f==1)
            {
                S[i].getsign();
                cout<<endl;
                fn=1;
            }
        }
        try //код, который может привести к ошибке, располагается тут
        {
            if (fn == 0)
            {
                throw 123; //генерировать целое число 123
            }
        }
        catch(int i)//сюда передастся число 123
        {
            cout << "net takih lydey ili nepravilno vveden znak zodiaka" << endl;
        }
        cout<<"iskat eshe raz? (0-net, 1-da): ";
        cin>>q;
    }
    for (i=0;i<k;i++)
    {
//        S[i].~sign();

    }
    cin>>q;
}

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int dizi[1000],boyut,i;
    cout<<"Dizi boyutunu giriniz"<<endl;
    cin>>boyut;
    cout<<boyut;
    for(i=0;i<boyut;i++)
    {
        cout<<"Dizinin"<<i+1<<". elemanưnư giriniz"<<endl;
        cin>>dizi[i];              
    }
    
    for(i=boyut/2;i>0;i--)
    {
                          cout<<dizi[i]<<"-";
                          }
                          cout<<endl;
    for(i=boyut/2;i<boyut;i++)
    {
       cout<<dizi[i]<<"-";
    }
                          cout<<endl;
                          
    system("PAUSE");
    return EXIT_SUCCESS;
}

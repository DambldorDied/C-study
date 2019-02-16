#include <iostream>

using namespace std;

int main()
{
   int c;
   while(true)
   {
       cout<<"Vvedite chislo:";
       cin>>c;
       if(c==0)
       {
           continue;
       }
       while(c%2!=1)
       {
           c=c/2;
       }
       if(c==1)
       {
           break;
       }
   }
}

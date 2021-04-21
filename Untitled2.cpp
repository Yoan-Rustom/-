#include<iostream>
using namespace std;
int main()
{
    int chislo;
    cin>>chislo;
    if(chislo==1) cout<<"I";
     else
      if(chislo==5) cout<<"V";
       else
        if(chislo==10) cout<<"X";
         else
          if(chislo==50) cout<<"L";
           else
            if(chislo==100) cout<<"C";
             else
              if(chislo==500) cout<<"D";
               else
                if(chislo==1000) cout<<"M";
                 else cout<<"Ne e rimska cifra";

        return 0;
}

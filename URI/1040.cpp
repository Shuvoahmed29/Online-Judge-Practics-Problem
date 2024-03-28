#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float N1,N2,N3,N4,A,D,avg,avg1;
    cin>>N1;
    cin>>N2;
    cin>>N3;
    cin>>N4;
    N1=N1*2.0;
    N2=N2*3.0;
    N3=N3*4.0;
    N4=N4*1.0;
    avg=(N1+N2+N3+N4)/10.0;
    cout<<"Media: "<<setprecision(1)<<avg<<endl;
    if(avg>=7.0)
    {
        cout<<"Aluno aprovado."<<endl;
    }
   else if(avg<5.0)
   {
       cout<<"Aluno reprovado."<<endl;
   }
   else if(avg>=5.0&&avg<=6.9)
   {
       cout<<"Aluno em exame."<<endl;
       cin>>A;
       D=A;
       cout<<"Nota do exame: "<<setprecision(1)<<D<<endl;
       avg1=(avg+D)/2.0;
       cout<<"Aluno aprovado."<<endl;
       cout<<"Media final: "<<setprecision(1)<<avg1<<endl;
   }
   return 0;
}


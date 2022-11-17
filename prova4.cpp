#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<iomanip>
float fcmed(float n1,float n2);
float fcperc(float falta,float na);
void fcfin(float med,float perc);
using namespace std;
int main ()
{
    float nota,falta,na,n1,n2,perc,med,fin;
    cout<<"digite o numero total de aulas\n";
    cin>>na;
    cout<<"digite o numero de faltas\n";
    cin>>falta;
    cout<<"digite a primeira nota\n";
    cin>>n1;
    cout<<"digite a segunda nota\n";
    cin>>n2;
    perc=fcperc(falta,na);
    med=fcmed(n1,n2);
    fcfin(med,perc);

}
float fcperc(float falta,float na)
{
    return 100-(falta/na)*100;
}
float fcmed(float n1,float n2)
{
    return (n1+n2)/2;
}
void fcfin(float med,float perc)
{

     if (med<3 && perc<75)
    {
        cout<<"REPROVADO\nMedia abaixo de 3\n"<<"MEDIA="<<med<<"\nPRESENCA="<<perc;
    }
    else if(med>3 && med<6)
    {
        cout<<"EXAME\nMedia entre 3 e 5,9\n"<<"MEDIA="<<med<<"\nPRESENCA="<<perc;
    }
    else if(perc<75)
    {
        cout<<"REPROVADO\nNao atingiu o numero de presenca\n"<<"MEDIA="<<med<<"\nPRESENCA="<<perc;
    }
    else
    {
        cout<<"APROVADO\nMedia acima de 6\n"<<"MEDIA="<<med<<"\nPRESENCA="<<perc;
    }

}

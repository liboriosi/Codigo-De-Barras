#include<iostream>

using namespace std;

int main()
{
    long long int n, d0, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;
    long int soma, di1, di3, di5, di7, di9, di11;
    char r;
    
    codeBar:
    cout<<"Digite o código de  barras para verificar se está correto!";
    cout<<"\nColinha para ajudar: 9782940199617";
    cout<<"\n"<<"Código de Barras: ";
    cin>>n;
    
    d0=n%10;
    n=(n-d0)/10;
    d1=n%10;
    n=(n-d1)/10;
    d2=n%10;
    n=(n-d2)/10;
    d3=n%10;
    n=(n-d3)/10;
    d4=n%10;
    n=(n-d4)/10;
    d5=n%10;
    n=(n-d5)/10;
    d6=n%10;
    n=(n-d6)/10;
    d7=n%10;
    n=(n-d7)/10;
    d8=n%10;
    n=(n-d8)/10;
    d9=n%10;
    n=(n-d9)/10;
    d10=n%10;
    n=(n-d10)/10;
    d11=n%10;
    n=(n-d11)/10;
    d12=n%10;
    
    di1=d1*3;
    di3=d3*3;
    di5=d5*3;
    di7=d7*3;
    di9=d9*3;
    di11=d11*3;
    
    soma=di1+d2+di3+d4+di5+d6+di7+d8+di9+d10+di11+d12;
    n=soma/10;
    n=n+1;
    n=n*10;
    n=n-soma;
    
    if (n==d0) {
        cout<<"\nO código de barras digitado está correto!"<<"\nVocê deseja digitar outro código de barras? (s/n) ";
        cin>>r;
        if (r=='s') {
            system("clear");
            goto codeBar;
        } else if (r=='n') {
            return 0;
        }
    } else if (n!=d0) {
        cout<<"\n\aO código de barras digitado está incorreto por favor digite novamente!\n\n";
        goto codeBar;
    }
    
    return 0;
}
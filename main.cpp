#include <iostream>
using namespace std;
#include <vector>

int main() {
            int N,i,min,imin,max,imax,s,T;
            float m;
            cout<<"inserisci il numero di atleti che ci sono in una competizione"<<endl;
            cin>> N;
            vector<string> nomi,nazionali (N);
            vector<float> tempi(N);
            for(i=0;i<N;i=i+1)
            {
                cout<<"inserisci il nome dell'atleta"<<endl;
                cin>> nomi [i];
                cout<<"inserisci di che nazionalità è l'atleta"<<endl;
                cin>> nazionali[i];
                cout<<"inserisci il tempo dell'atleta"<<endl;
                cin>>tempi[i];
            }
        min=tempi[0];
        imin=0;
        for(i=0;i<N;i=i+1)
        {
        if(tempi[i]<min)
        {
            min=tempi[i];
            imin=i;
        }
    }
cout<<"il tempo più basso è" <<tempi[imin] <<endl;
max=tempi[0];
imax=0;
for(i=0;i<N;i=i+1)
{
    if(tempi[i]>max)
    {
        max=tempi[i];
        imax=i;
    }
}
cout<<"il tempo più alto è" <<tempi[imax]<<endl;
s=0;
for(i=0;i<N;i=i+1)
{
    s=s+tempi[i];
}
m=s/N;
cout<<"la media è" <<m <<endl;
for(i=0;i<N;i=i+1)
{
    cout<<"il nome dell'atleta è" <<nomi[i] << "la nazionale dell'atleta è" << nazionali[i] <<endl;
    if(tempi[i]<=m)
    {
        cout<<"il tempo che è minore o uguale alla media è" <<tempi[i] <<endl;
    }
}
cin>> T;
for(i=0;i<N;i=i+1)
{
    if(tempi[i]<=T)
    {
        cout<<"gli atleti sono" <<nomi[i] << "la loro nazionale è" <<nazionali[i] << "i tempi sono" <<tempi[i] <<endl;

    }
}
              
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md

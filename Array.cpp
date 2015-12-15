#include <iostream>
#include <stdlib.h>
using namespace std;
void stampa ()
{
    int i,n;
    int A[i];
    for(n=0;n<i;n++)
    {
        cout << A[n] << endl;
    }
}
int main()
{
    int i,n;
    cout << "Quanti valori deve contenere l'array? ";
    cin >> i;
    int A[i];
    cout << endl << "Inserisci i valori:" << endl;
    for(n=0;n<i;n++)
    {
        cin >> A[n];
        cout << endl;
    }
    system("cls");
    char r='S';
    float m,sfl,ifl;
    int vmax,vmin,j,x,s;
    while (r=='S' or r=='s')
    {
    bool t=true;
    s=0;
    cout << "Scrivi il numero corrispondente all'azione che vuoi compiere:" << endl
         << "1)  Stampare i valori" << endl
         << "2)  Trovare e stampare il valore massimo" << endl
         << "3)  Trovare e stampare il valore minimo" << endl
         << "4)  Trovare e stampare il valore massimo e il valore minimo" << endl
         << "5)  Verificare se i valori sono ordinati in ordine crescente" << endl
         << "6)  Verificare se i valori sono ordinati in ordine decrescente" << endl
         << "7)  Ordinare e stampare i valori in ordine crescente" << endl
         << "8)  Ordinare e stampare i valori in ordine decrescente" << endl
         << "9)  Verifica se ci sono dei valori doppi" << endl
         << "10)  Effettuare la somma dei valori" << endl
         << "11) Calcolare la media dei valori" << endl
         << "12) Calcolare la somma e la media dei valori" << endl << endl;
    int r2;
    cin >> r2;
    system("cls");
    switch (r2)
        {
        case (1):
            cout << "I valori contenuti nell'array sono: " << endl;
            for(n=0;n<i;n++)
                cout << A[n] << " ";
            cout << endl;
            break;
        case (2):
            n=0;
            vmax=A[n];
            for (n=0;n<i;n++)
            {
                if (A[n]>vmax) vmax=A[n];
            }
            cout << "Il valore massimo corrisponde a " << vmax << endl << endl;
            break;
        case (3):
            n=0;
            vmin=A[n];
            for (n=0;n<i;n++)
            {
                if (A[n]<vmin) vmin=A[n];
            }
            cout << "Il valore minimo corrisponde a " << vmin << endl << endl;
            break;
        case (4):
            n=0;
            vmin=A[n];
            vmax=A[n];
            for (n=0;n<i;n++)
            {
                if (A[n]>vmax) vmax=A[n];
                if (A[n]<vmin) vmin=A[n];
            }
            cout << "Il valore massimo corrisponde a " << vmax << " e il valore minimo corrisponde a " << vmin << endl << endl;
            break;
        case (5):
            for(n=0;n<i-1;n++)
                for(j=n+1;j<i;j++)
                    {
                        if(A[j] < A[n])
                        {
                         t = false;
                        }
                    }
            if (t==true) cout << "I valori sono ordinati in ordine crescente." << endl;
            else cout << "I valori non sono ordinati" << endl;
            break;
        case (6):
            for(n=0;n<i-1;n++)
                for(j=n+1;j<i;j++)
                    {
                        if(A[j] > A[n])
                        {
                         t = false;
                        }
                    }
            if (t==true) cout << "I valori sono ordinati in ordine decrescente." << endl;
            else cout << "I valori non sono ordinati" << endl;
            break;
        case (7):
            for(n=0;n<i-1;n++)
                for(j=n+1;j<i;j++)
                    {
                        if(A[j] < A[n])
                        {
                        x=A[j];
                        A[j]=A[n];
                        A[n]=x;
                        }
                    }
            cout << "I valori contenuti nell'array in ordine crescente sono: " << endl << endl;
            for(n=0;n<i;n++)
                { cout << A[n] << " "; }
            cout << endl;
            break;
        case (8):
            for(n=0;n<i-1;n++)
                for(j=n+1;j<i;j++)
                    {
                        if(A[j] > A[n])
                        {
                        x=A[j];
                        A[j]=A[n];
                        A[n]=x;
                        }
                    }
            cout << "I valori contenuti nell'array in ordine decrescente sono: " << endl << endl;
            for(n=0;n<i;n++)
                { cout << A[n] << " "; }
            cout << endl;
            break;
        case (9):
            for(n=0;n<i-1;n++)
                for(j=n+1;j<i;j++)
                    {
                        if(A[j] == A[n])
                        {
                        t = false;
                        }
                    }
            if (t==true) cout << "L'array non contiene valori duplici" << endl;
            else cout << "L'array contiene valori duplici" << endl;
            break;
        case (10):
            for(n=0;n<i;n++)
                s=s+A[n];
            cout << "La somma dei valori risulta " << s << endl;
            break;
        case (11):
            for(n=0;n<i;n++)
                s=s+A[n];
            sfl = float(s);
            ifl = float(i);
            m=sfl/ifl;
            cout << "La media dei valori risulta " << m << endl;
            break;
        case (12):
            for(n=0;n<i;n++)
                s=s+A[n];
            sfl = float(s);
            ifl = float(i);
            m=sfl/ifl;
            cout << "La somma dei valori risulta " << s << " e la media risulta " << m << endl;
            break;
        default:
            system("cls");
            cout << "Hai inserito un numero non valido" << endl;
        }
    cout << endl << "Vuoi fare qualcos'altro? (S/N)";
    cin >> r;
    system("cls");
    }
    return 0;
}

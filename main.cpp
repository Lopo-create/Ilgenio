#include <iostream>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include <iomanip>

using namespace std;

void italiano();
void inglese();
void francese();
void spagnolo();
void tedesco();

void d8(char v[],int m);
void d9(char v[],int m);
void d10(char v[],int m);
void d11(char v[],int m);
void d12(char v[],int m);
void d13(char v[],int m);
void d14(char v[],int m);
void d15(char v[],int m);
void d16(char v[],int m);

void Sarray(char V[],int d);
void ok();

const int dim=63;
char L[dim]={'0','1','2','3','4','5','7','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','-'};
int conta=0;

int main()
{
    string riga;
    int risposta1=0;

    cout<<"Select a language: "<<endl;
    cout<<"1 - English"<<endl;
    cout<<"2 - Italiano"<<endl;
    cout<<"3 - Espanol"<<endl;
    cout<<"4 - Francais"<<endl;
    cout<<"5 - Deutsch"<<endl;

    do
    {
        cout<<"Enter a number: ";
        cin>>risposta1;
        if(risposta1!=1 && risposta1!=2 && risposta1!=3 && risposta1!=4 && risposta1!=5)
        {
            cout<<"Error"<<endl;
        }
    }while(risposta1!=1 && risposta1!=2 && risposta1!=3 && risposta1!=4 && risposta1!=5);

    switch(risposta1)
    {
    case 1:
        {
            riga="inglese";
            break;
        }
    case 2:
        {
            riga="italiano";
            break;
        }
    case 3:
        {
            riga="spagnolo";
            break;
        }
    case 4:
        {
            riga="francese";
            break;
        }
    case 5:
        {
            riga="tedesco";
            break;
        }
    }

    system("cls");

    if(riga=="inglese")
    {
        inglese();
    }
    else if(riga=="italiano")
    {
        italiano();
    }
    else if(riga=="spagnolo")
    {
        spagnolo();
    }
    else if(riga=="francese")
    {
        francese();
    }
    else
    {
        tedesco();
    }

    system("pause");

    return 0;
}

void italiano()
{
    cout<<"CARATTERI PREDEFINITI"<<endl;
    Sarray(L,dim);
    int r=0;

    do
    {
        cout<<"Vuoi usare i caratteri predefiniti[1] oppure creare una lista dei tuoi[2]: ";
        cin>>r;
        if(r!=1 && r!=2)
            cout<<"ERRORE"<<endl;
    }while(r!=1 && r!=2);

    system("cls");

    if(r==1)
    {
        int n=0;

        do
        {
           cout<<"Numero caratteri di una parola[8-16]: ";
           cin>>n;
           if(n<8 || n>16)
            cout<<"ERRORE"<<endl;
        }while(n<8 || n>16);

        system("cls");

        cout<<"Attendere filo a quando non appare sullo schermo la scritta 'OK'"<<endl;
        cout<<"L'operazione potrebbe durare anche delle ore"<<endl;
        Sleep(2000);
        system("cls");

        cout<<"Inizio generazione"<<endl;

        switch(n)
        {
        case 8:
            {
                d8(L,dim);
                break;
            }
        case 9:
            {
                d9(L,dim);
                break;
            }
        case 10:
            {
                d10(L,dim);
                break;
            }
        case 11:
            {
                d11(L,dim);
                break;
            }
        case 12:
            {
                d12(L,dim);
                break;
            }
        case 13:
            {
                d13(L,dim);
                break;
            }
        case 14:
            {
                d14(L,dim);
                break;
            }
        case 15:
            {
                d15(L,dim);
                break;
            }
        case 16:
            {
                d16(L,dim);
                break;
            }
        }

        ok();
        cout<<"File creato all'interno della cartella del programma"<<endl;
    }
    else
    {
        const int lopo=3000;
        char C[lopo];

        int dim2=0;

        char prova;
        do
        {
            cout<<"Inserisci il carattere "<<dim2+1<<"[Premi il carattere ^ per terminare]: ";
            cin>>prova;
            if(prova!='^')
            {
                C[dim2]=prova;
                dim2++;
            }
        }while(prova!='^');

        char B[dim2];
        for(int i=0;i<dim2;i++)
        {
            B[i]=C[i];
        }

        int n=0;

        do
        {
           cout<<"Numero caratteri di una parola[8-16]: ";
           cin>>n;
           if(n<8 || n>16)
            cout<<"ERRORE"<<endl;
        }while(n<8 || n>16);

        system("cls");

        cout<<"Usero' questi caratteri: "<<endl,

        Sarray(B,dim2);

        cout<<"Attendere filo a quando non appare sullo schermo la scritta 'OK'"<<endl;
        cout<<"L'operazione potrebbe durare anche delle ore"<<endl;
        Sleep(2000);
        system("cls");

        cout<<"Inizio generazione"<<endl;

        switch(n)
        {
        case 8:
            {
                d8(B,dim2);
                break;
            }
        case 9:
            {
                d9(B,dim2);
                break;
            }
        case 10:
            {
                d10(B,dim2);
                break;
            }
        case 11:
            {
                d11(B,dim2);
                break;
            }
        case 12:
            {
                d12(B,dim2);
                break;
            }
        case 13:
            {
                d13(B,dim2);
                break;
            }
        case 14:
            {
                d14(B,dim2);
                break;
            }
        case 15:
            {
                d15(B,dim2);
                break;
            }
        case 16:
            {
                d16(B,dim2);
                break;
            }
        }

        ok();
        cout<<"File creato all'interno della cartella del programma"<<endl;
    }
}

void inglese()
{
    cout<<"PREDEFINED CHARACTERS"<<endl;
    Sarray(L,dim);
    int r=0;

    do
    {
        cout<<"Do you want to use the default characters[1] or create a list of your own[2]: ";
        cin>>r;
        if(r!=1 && r!=2)
            cout<<"ERROR"<<endl;
    }while(r!=1 && r!=2);

    system("cls");

    if(r==1)
    {
        int n=0;

        do
        {
           cout<<"Number of characters in a word[8-16]: ";
           cin>>n;
           if(n<8 || n>16)
            cout<<"ERROR"<<endl;
        }while(n<8 || n>16);

        system("cls");

        cout<<"Wait for wire when 'OK' appears on the screen"<<endl;
        cout<<"The operation could last for up to hours"<<endl;
        Sleep(2000);
        system("cls");

        cout<<"Start of generation"<<endl;

        switch(n)
        {
        case 8:
            {
                d8(L,dim);
                break;
            }
        case 9:
            {
                d9(L,dim);
                break;
            }
        case 10:
            {
                d10(L,dim);
                break;
            }
        case 11:
            {
                d11(L,dim);
                break;
            }
        case 12:
            {
                d12(L,dim);
                break;
            }
        case 13:
            {
                d13(L,dim);
                break;
            }
        case 14:
            {
                d14(L,dim);
                break;
            }
        case 15:
            {
                d15(L,dim);
                break;
            }
        case 16:
            {
                d16(L,dim);
                break;
            }
        }

        ok();
        cout<<"File created within the program folder"<<endl;
    }
    else
    {
        const int lopo=3000;
        char C[lopo];

        int dim2=0;

        char prova;
        do
        {
            cout<<"Enter the font "<<dim2+1<<"[Press the character ^, to finish]: ";
            cin>>prova;
            if(prova!='^')
            {
                C[dim2]=prova;
                dim2++;
            }
        }while(prova!='^');

        char B[dim2];
        for(int i=0;i<dim2;i++)
        {
            B[i]=C[i];
        }

        int n=0;

        do
        {
           cout<<"Number of characters in a word[8-16]: ";
           cin>>n;
           if(n<8 || n>16)
            cout<<"ERROR"<<endl;
        }while(n<8 || n>16);

        system("cls");

        cout<<"I'm going to use these characters: "<<endl,

        Sarray(B,dim2);

        cout<<"Wait for wire when 'OK' appears on the screen"<<endl;
        cout<<"The operation could last for up to hours"<<endl;
        Sleep(2000);
        system("cls");

        cout<<"Start of generation"<<endl;

        switch(n)
        {
        case 8:
            {
                d8(B,dim2);
                break;
            }
        case 9:
            {
                d9(B,dim2);
                break;
            }
        case 10:
            {
                d10(B,dim2);
                break;
            }
        case 11:
            {
                d11(B,dim2);
                break;
            }
        case 12:
            {
                d12(B,dim2);
                break;
            }
        case 13:
            {
                d13(B,dim2);
                break;
            }
        case 14:
            {
                d14(B,dim2);
                break;
            }
        case 15:
            {
                d15(B,dim2);
                break;
            }
        case 16:
            {
                d16(B,dim2);
                break;
            }
        }

        ok();
        cout<<"File created within the program folder"<<endl;
    }
}

void francese()
{
    cout<<"PERSONNAGES PREDEFINIS"<<endl;
    Sarray(L,dim);
    int r=0;

    do
    {
        cout<<"Voulez-vous utiliser les caractères par defaut[1] ou creer votre propre liste[2]: ";
        cin>>r;
        if(r!=1 && r!=2)
            cout<<"ERREUR"<<endl;
    }while(r!=1 && r!=2);

    system("cls");

    if(r==1)
    {
        int n=0;

        do
        {
           cout<<"Nombre de caracteres dans un mot[8-16]: ";
           cin>>n;
           if(n<8 || n>16)
            cout<<"ERREUR"<<endl;
        }while(n<8 || n>16);

        system("cls");

        cout<<"Attendre le fil quand 'OK' apparaît a l'ecran"<<endl;
        cout<<"L'operation peut durer jusqu'a des heures"<<endl;
        Sleep(2000);
        system("cls");

        cout<<"Debut de la generation"<<endl;

        switch(n)
        {
        case 8:
            {
                d8(L,dim);
                break;
            }
        case 9:
            {
                d9(L,dim);
                break;
            }
        case 10:
            {
                d10(L,dim);
                break;
            }
        case 11:
            {
                d11(L,dim);
                break;
            }
        case 12:
            {
                d12(L,dim);
                break;
            }
        case 13:
            {
                d13(L,dim);
                break;
            }
        case 14:
            {
                d14(L,dim);
                break;
            }
        case 15:
            {
                d15(L,dim);
                break;
            }
        case 16:
            {
                d16(L,dim);
                break;
            }
        }

        ok();
        cout<<"Fichier cree dans le dossier du programme"<<endl;
    }
    else
    {
        const int lopo=3000;
        char C[lopo];

        int dim2=0;

        char prova;
        do
        {
            cout<<"Entrez la police "<<dim2+1<<"[Appuyez sur le personnage ^, pour finir]: ";
            cin>>prova;
            if(prova!='^')
            {
                C[dim2]=prova;
                dim2++;
            }
        }while(prova!='^');

        char B[dim2];
        for(int i=0;i<dim2;i++)
        {
            B[i]=C[i];
        }

        int n=0;

        do
        {
           cout<<"Nombre de caracteres dans un mot[8-16]: ";
           cin>>n;
           if(n<8 || n>16)
            cout<<"ERREUR"<<endl;
        }while(n<8 || n>16);

        system("cls");

        cout<<"Je vais utiliser ces caractères: "<<endl,

        Sarray(B,dim2);

        cout<<"Attendre le fil quand 'OK' apparaît a l'ecran"<<endl;
        cout<<"L'operation peut durer jusqu'a des heures"<<endl;
        Sleep(2000);
        system("cls");

        cout<<"Debut de la generation"<<endl;

        switch(n)
        {
        case 8:
            {
                d8(B,dim2);
                break;
            }
        case 9:
            {
                d9(B,dim2);
                break;
            }
        case 10:
            {
                d10(B,dim2);
                break;
            }
        case 11:
            {
                d11(B,dim2);
                break;
            }
        case 12:
            {
                d12(B,dim2);
                break;
            }
        case 13:
            {
                d13(B,dim2);
                break;
            }
        case 14:
            {
                d14(B,dim2);
                break;
            }
        case 15:
            {
                d15(B,dim2);
                break;
            }
        case 16:
            {
                d16(B,dim2);
                break;
            }
        }

        ok();
        cout<<"Fichier cree dans le dossier du programme"<<endl;
    }
}

void spagnolo()
{
    cout<<"CARACTERES PREDEFINIDOS"<<endl;
    Sarray(L,dim);
    int r=0;

    do
    {
        cout<<"Desea utilizar los caracteres predeterminados[1] o crear una lista propia[2]: ";
        cin>>r;
        if(r!=1 && r!=2)
            cout<<"ERROR"<<endl;
    }while(r!=1 && r!=2);

    system("cls");

    if(r==1)
    {
        int n=0;

        do
        {
           cout<<"Numero de caracteres en una palabra[8-16]: ";
           cin>>n;
           if(n<8 || n>16)
            cout<<"ERROR"<<endl;
        }while(n<8 || n>16);

        system("cls");

        cout<<"Espere el cable cuando aparezca 'OK' en la pantalla"<<endl;
        cout<<"La operacion podria durar hasta horas"<<endl;
        Sleep(2000);
        system("cls");

        cout<<"Inicio de la generacion"<<endl;

        switch(n)
        {
        case 8:
            {
                d8(L,dim);
                break;
            }
        case 9:
            {
                d9(L,dim);
                break;
            }
        case 10:
            {
                d10(L,dim);
                break;
            }
        case 11:
            {
                d11(L,dim);
                break;
            }
        case 12:
            {
                d12(L,dim);
                break;
            }
        case 13:
            {
                d13(L,dim);
                break;
            }
        case 14:
            {
                d14(L,dim);
                break;
            }
        case 15:
            {
                d15(L,dim);
                break;
            }
        case 16:
            {
                d16(L,dim);
                break;
            }
        }

        ok();
        cout<<"Archivo creado dentro de la carpeta del programa"<<endl;
    }
    else
    {
        const int lopo=3000;
        char C[lopo];

        int dim2=0;

        char prova;
        do
        {
            cout<<"Introduzca la fuente "<<dim2+1<<"[Pulse el caracter ^, para finalizar]: ";
            cin>>prova;
            if(prova!='^')
            {
                C[dim2]=prova;
                dim2++;
            }
        }while(prova!='^');

        char B[dim2];
        for(int i=0;i<dim2;i++)
        {
            B[i]=C[i];
        }

        int n=0;

        do
        {
           cout<<"Numero de caracteres en una palabra[8-16]: ";
           cin>>n;
           if(n<8 || n>16)
            cout<<"ERROR"<<endl;
        }while(n<8 || n>16);

        system("cls");

        cout<<"Usare' estos personajes: "<<endl,

        Sarray(B,dim2);

        cout<<"Espere el cable cuando aparezca 'OK' en la pantalla"<<endl;
        cout<<"La operacion podria durar hasta horas"<<endl;
        Sleep(2000);
        system("cls");

        cout<<"Inicio de la generacion"<<endl;

        switch(n)
        {
        case 8:
            {
                d8(B,dim2);
                break;
            }
        case 9:
            {
                d9(B,dim2);
                break;
            }
        case 10:
            {
                d10(B,dim2);
                break;
            }
        case 11:
            {
                d11(B,dim2);
                break;
            }
        case 12:
            {
                d12(B,dim2);
                break;
            }
        case 13:
            {
                d13(B,dim2);
                break;
            }
        case 14:
            {
                d14(B,dim2);
                break;
            }
        case 15:
            {
                d15(B,dim2);
                break;
            }
        case 16:
            {
                d16(B,dim2);
                break;
            }
        }

        ok();
        cout<<"Archivo creado dentro de la carpeta del programa"<<endl;
    }
}

void tedesco()
{
    cout<<"VOORAF GEDEFINIEERDE TEKENS"<<endl;
    Sarray(L,dim);
    int r=0;

    do
    {
        cout<<"Wilt u de standaardtekens [1] gebruiken of een lijst van uw eigen [2] maken: ";
        cin>>r;
        if(r!=1 && r!=2)
            cout<<"FOUT"<<endl;
    }while(r!=1 && r!=2);

    system("cls");

    if(r==1)
    {
        int n=0;

        do
        {
           cout<<"Aantal tekens in een woord[8-16]: ";
           cin>>n;
           if(n<8 || n>16)
            cout<<"FOUT"<<endl;
        }while(n<8 || n>16);

        system("cls");

        cout<<"Wacht op draad wanneer ' OK ' verschijnt op het scherm"<<endl;
        cout<<"De bewerking kan maximaal uren duren"<<endl;
        Sleep(2000);
        system("cls");

        cout<<"Begin van generatie"<<endl;

        switch(n)
        {
        case 8:
            {
                d8(L,dim);
                break;
            }
        case 9:
            {
                d9(L,dim);
                break;
            }
        case 10:
            {
                d10(L,dim);
                break;
            }
        case 11:
            {
                d11(L,dim);
                break;
            }
        case 12:
            {
                d12(L,dim);
                break;
            }
        case 13:
            {
                d13(L,dim);
                break;
            }
        case 14:
            {
                d14(L,dim);
                break;
            }
        case 15:
            {
                d15(L,dim);
                break;
            }
        case 16:
            {
                d16(L,dim);
                break;
            }
        }

        ok();
        cout<<"Bestand gemaakt in de programmamap"<<endl;
    }
    else
    {
        const int lopo=3000;
        char C[lopo];

        int dim2=0;

        char prova;
        do
        {
            cout<<"Voer het lettertype "<<dim2+1<<"[Druk op het teken ^, tot finish]: ";
            cin>>prova;
            if(prova!='^')
            {
                C[dim2]=prova;
                dim2++;
            }
        }while(prova!='^');

        char B[dim2];
        for(int i=0;i<dim2;i++)
        {
            B[i]=C[i];
        }

        int n=0;

        do
        {
           cout<<"Aantal tekens in een woord[8-16]: ";
           cin>>n;
           if(n<8 || n>16)
            cout<<"FOUT"<<endl;
        }while(n<8 || n>16);

        system("cls");

        cout<<"Ik ga deze tekens gebruiken: "<<endl,

        Sarray(B,dim2);

        cout<<"Wacht op draad wanneer ' OK ' verschijnt op het scherm"<<endl;
        cout<<"De bewerking kan maximaal uren duren"<<endl;
        Sleep(2000);
        system("cls");

        cout<<"Begin van generatie"<<endl;

        switch(n)
        {
        case 8:
            {
                d8(B,dim2);
                break;
            }
        case 9:
            {
                d9(B,dim2);
                break;
            }
        case 10:
            {
                d10(B,dim2);
                break;
            }
        case 11:
            {
                d11(B,dim2);
                break;
            }
        case 12:
            {
                d12(B,dim2);
                break;
            }
        case 13:
            {
                d13(B,dim2);
                break;
            }
        case 14:
            {
                d14(B,dim2);
                break;
            }
        case 15:
            {
                d15(B,dim2);
                break;
            }
        case 16:
            {
                d16(B,dim2);
                break;
            }
        }

        ok();
        cout<<"Bestand gemaakt in de programmamap"<<endl;
    }
}

void Sarray(char V[],int d)
{
    for(int i=0;i<d;i++)
    {
        if(i%10==0)
            cout<<endl;
        cout<<setw(5)<<V[i];
    }
    cout<<endl;
}

void d8(char v[],int m)
{
    ofstream scrivi("Dizionario_8_caratteti.txt");

    for(int a=0;a<m;a++)
    {
        for(int b=0;b<m;b++)
        {
            for(int c=0;c<m;c++)
            {
                for(int d=0;d<m;d++)
                {
                    for(int e=0;e<m;e++)
                    {
                        for(int f=0;f<m;f++)
                        {
                            for(int g=0;g<m;g++)
                            {
                                for(int h=0;h<m;h++)
                                {
                                    scrivi<<v[a]<<v[b]<<v[c]<<v[d]<<v[e]<<v[f]<<v[g]<<v[h]<<endl;
                                    conta++;
                                    if(conta%10000==0)
                                    {
                                        system("cls");
                                        cout<<"Password generate: "<<conta<<endl;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    scrivi.clear();
    scrivi.close();
}

void d9(char v[],int m)
{
    ofstream scrivi("Dizionario_9_caratteti.txt");

    for(int a=0;a<m;a++)
    {
        for(int b=0;b<m;b++)
        {
            for(int c=0;c<m;c++)
            {
                for(int d=0;d<m;d++)
                {
                    for(int e=0;e<m;e++)
                    {
                        for(int f=0;f<m;f++)
                        {
                            for(int g=0;g<m;g++)
                            {
                                for(int h=0;h<m;h++)
                                {
                                    for(int i=0;i<m;i++)
                                    {
                                        scrivi<<v[a]<<v[b]<<v[c]<<v[d]<<v[e]<<v[f]<<v[g]<<v[h]<<v[i]<<endl;
                                        conta++;
                                        if(conta%10000==0)
                                        {
                                            system("cls");
                                            cout<<"Password generate: "<<conta<<endl;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    scrivi.clear();
    scrivi.close();
}

void d10(char v[],int m)
{
    ofstream scrivi("Dizionario_10_caratteti.txt");

    for(int a=0;a<m;a++)
    {
        for(int b=0;b<m;b++)
        {
            for(int c=0;c<m;c++)
            {
                for(int d=0;d<m;d++)
                {
                    for(int e=0;e<m;e++)
                    {
                        for(int f=0;f<m;f++)
                        {
                            for(int g=0;g<m;g++)
                            {
                                for(int h=0;h<m;h++)
                                {
                                    for(int i=0;i<m;i++)
                                    {
                                        for(int l=0;l<m;l++)
                                        {
                                            scrivi<<v[a]<<v[b]<<v[c]<<v[d]<<v[e]<<v[f]<<v[g]<<v[h]<<v[i]<<v[l]<<endl;
                                            conta++;
                                            if(conta%10000==0)
                                            {
                                                system("cls");
                                                cout<<"Password generate: "<<conta<<endl;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    scrivi.clear();
    scrivi.close();
}

void d11(char v[],int m)
{
    ofstream scrivi("Dizionario_11_caratteti.txt");

    for(int a=0;a<m;a++)
    {
        for(int b=0;b<m;b++)
        {
            for(int c=0;c<m;c++)
            {
                for(int d=0;d<m;d++)
                {
                    for(int e=0;e<m;e++)
                    {
                        for(int f=0;f<m;f++)
                        {
                            for(int g=0;g<m;g++)
                            {
                                for(int h=0;h<m;h++)
                                {
                                    for(int i=0;i<m;i++)
                                    {
                                        for(int l=0;l<m;l++)
                                        {
                                            for(int n=0;n<m;n++)
                                            {
                                                scrivi<<v[a]<<v[b]<<v[c]<<v[d]<<v[e]<<v[f]<<v[g]<<v[h]<<v[i]<<v[l]<<v[n]<<endl;
                                                conta++;
                                                if(conta%10000==0)
                                                {
                                                    system("cls");
                                                    cout<<"Password generate: "<<conta<<endl;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    scrivi.clear();
    scrivi.close();
}

void d12(char v[],int m)
{
    ofstream scrivi("Dizionario_12_caratteti.txt");

    for(int a=0;a<m;a++)
    {
        for(int b=0;b<m;b++)
        {
            for(int c=0;c<m;c++)
            {
                for(int d=0;d<m;d++)
                {
                    for(int e=0;e<m;e++)
                    {
                        for(int f=0;f<m;f++)
                        {
                            for(int g=0;g<m;g++)
                            {
                                for(int h=0;h<m;h++)
                                {
                                    for(int i=0;i<m;i++)
                                    {
                                        for(int l=0;l<m;l++)
                                        {
                                            for(int n=0;n<m;n++)
                                            {
                                                for(int o=0;o<m;o++)
                                                {
                                                    scrivi<<v[a]<<v[b]<<v[c]<<v[d]<<v[e]<<v[f]<<v[g]<<v[h]<<v[i]<<v[l]<<v[n]<<v[o]<<endl;
                                                    conta++;
                                                    if(conta%10000==0)
                                                    {
                                                        system("cls");
                                                        cout<<"Password generate: "<<conta<<endl;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    scrivi.clear();
    scrivi.close();
}

void d13(char v[],int m)
{
    ofstream scrivi("Dizionario_13_caratteti.txt");

    for(int a=0;a<m;a++)
    {
        for(int b=0;b<m;b++)
        {
            for(int c=0;c<m;c++)
            {
                for(int d=0;d<m;d++)
                {
                    for(int e=0;e<m;e++)
                    {
                        for(int f=0;f<m;f++)
                        {
                            for(int g=0;g<m;g++)
                            {
                                for(int h=0;h<m;h++)
                                {
                                    for(int i=0;i<m;i++)
                                    {
                                        for(int l=0;l<m;l++)
                                        {
                                            for(int n=0;n<m;n++)
                                            {
                                                for(int o=0;o<m;o++)
                                                {
                                                    for(int p=0;p<m;p++)
                                                    {
                                                        scrivi<<v[a]<<v[b]<<v[c]<<v[d]<<v[e]<<v[f]<<v[g]<<v[h]<<v[i]<<v[l]<<v[n]<<v[o]<<v[p]<<endl;
                                                        conta++;
                                                        if(conta%10000==0)
                                                        {
                                                            system("cls");
                                                            cout<<"Password generate: "<<conta<<endl;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    scrivi.clear();
    scrivi.close();
}

void d14(char v[],int m)
{
    ofstream scrivi("Dizionario_14_caratteti.txt");

    for(int a=0;a<m;a++)
    {
        for(int b=0;b<m;b++)
        {
            for(int c=0;c<m;c++)
            {
                for(int d=0;d<m;d++)
                {
                    for(int e=0;e<m;e++)
                    {
                        for(int f=0;f<m;f++)
                        {
                            for(int g=0;g<m;g++)
                            {
                                for(int h=0;h<m;h++)
                                {
                                    for(int i=0;i<m;i++)
                                    {
                                        for(int l=0;l<m;l++)
                                        {
                                            for(int n=0;n<m;n++)
                                            {
                                                for(int o=0;o<m;o++)
                                                {
                                                    for(int p=0;p<m;p++)
                                                    {
                                                        for(int q=0;q<m;q++)
                                                        {
                                                            scrivi<<v[a]<<v[b]<<v[c]<<v[d]<<v[e]<<v[f]<<v[g]<<v[h]<<v[i]<<v[l]<<v[n]<<v[o]<<v[p]<<v[q]<<endl;
                                                            conta++;
                                                            if(conta%10000==0)
                                                            {
                                                                system("cls");
                                                                cout<<"Password generate: "<<conta<<endl;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    scrivi.clear();
    scrivi.close();
}

void d15(char v[],int m)
{
    ofstream scrivi("Dizionario_15_caratteti.txt");

    for(int a=0;a<m;a++)
    {
        for(int b=0;b<m;b++)
        {
            for(int c=0;c<m;c++)
            {
                for(int d=0;d<m;d++)
                {
                    for(int e=0;e<m;e++)
                    {
                        for(int f=0;f<m;f++)
                        {
                            for(int g=0;g<m;g++)
                            {
                                for(int h=0;h<m;h++)
                                {
                                    for(int i=0;i<m;i++)
                                    {
                                        for(int l=0;l<m;l++)
                                        {
                                            for(int n=0;n<m;n++)
                                            {
                                                for(int o=0;o<m;o++)
                                                {
                                                    for(int p=0;p<m;p++)
                                                    {
                                                        for(int q=0;q<m;q++)
                                                        {
                                                            for(int r=0;r<m;r++)
                                                            {
                                                                scrivi<<v[a]<<v[b]<<v[c]<<v[d]<<v[e]<<v[f]<<v[g]<<v[h]<<v[i]<<v[l]<<v[n]<<v[o]<<v[p]<<v[q]<<v[r]<<endl;
                                                                conta++;
                                                                if(conta%10000==0)
                                                                {
                                                                    system("cls");
                                                                    cout<<"Password generate: "<<conta<<endl;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    scrivi.clear();
    scrivi.close();
}

void d16(char v[],int m)
{
    ofstream scrivi("Dizionario_16_caratteti.txt");

    for(int a=0;a<m;a++)
    {
        for(int b=0;b<m;b++)
        {
            for(int c=0;c<m;c++)
            {
                for(int d=0;d<m;d++)
                {
                    for(int e=0;e<m;e++)
                    {
                        for(int f=0;f<m;f++)
                        {
                            for(int g=0;g<m;g++)
                            {
                                for(int h=0;h<m;h++)
                                {
                                    for(int i=0;i<m;i++)
                                    {
                                        for(int l=0;l<m;l++)
                                        {
                                            for(int n=0;n<m;n++)
                                            {
                                                for(int o=0;o<m;o++)
                                                {
                                                    for(int p=0;p<m;p++)
                                                    {
                                                        for(int q=0;q<m;q++)
                                                        {
                                                            for(int r=0;r<m;r++)
                                                            {
                                                                for(int s=0;s<m;s++)
                                                                {
                                                                    scrivi<<v[a]<<v[b]<<v[c]<<v[d]<<v[e]<<v[f]<<v[g]<<v[h]<<v[i]<<v[l]<<v[n]<<v[o]<<v[p]<<v[q]<<v[r]<<v[s]<<endl;
                                                                    conta++;
                                                                    if(conta%10000==0)
                                                                    {
                                                                        system("cls");
                                                                        cout<<"Password generate: "<<conta<<endl;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    scrivi.clear();
    scrivi.close();
}

void ok()
{
    system("cls");
    cout<<"*******  *  *"<<endl;
    cout<<"*     *  * *"<<endl;
    cout<<"*     *  *"<<endl;
    cout<<"*     *  * *"<<endl;
    cout<<"*******  *  *"<<endl;
}

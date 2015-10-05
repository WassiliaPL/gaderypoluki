    #include <cstdlib>
    #include <iostream>

    using namespace std;

        string tekst;
        int menu;

        void powitanie()
        {
        cout<<"Witaj! Program zakodowuje i odkodowuje tekst szyfrem GA-DE-RY-PO-LU-KI."<<endl<<endl;
        }

        void wprowadzenie()
        {
        cout<<"Wprowadź tekst: "<<endl;
        getline(cin, tekst);
        }

        void wprowadzenie2()
        {
        system("clear");
        cout<<"Wprowadź tekst: "<<endl;
        getline(cin, tekst);
        }

        void kodowanie()
        {
        for(int i=0;i<tekst.length();i++) {if(tekst[i]=='G')tekst[i]='A'; else if(tekst[i]=='A')tekst[i]='G';}
        for(int i=0;i<tekst.length();i++) {if(tekst[i]=='D')tekst[i]='E'; else if(tekst[i]=='E')tekst[i]='D';}
        for(int i=0;i<tekst.length();i++) {if(tekst[i]=='R')tekst[i]='Y'; else if(tekst[i]=='Y')tekst[i]='R';}
        for(int i=0;i<tekst.length();i++) {if(tekst[i]=='P')tekst[i]='O'; else if(tekst[i]=='O')tekst[i]='P';}
        for(int i=0;i<tekst.length();i++) {if(tekst[i]=='L')tekst[i]='U'; else if(tekst[i]=='U')tekst[i]='L';}
        for(int i=0;i<tekst.length();i++) {if(tekst[i]=='K')tekst[i]='I'; else if(tekst[i]=='I')tekst[i]='K';}
        for(int i=0;i<tekst.length();i++) {if(tekst[i]=='g')tekst[i]='a'; else if(tekst[i]=='a')tekst[i]='g';}
        for(int i=0;i<tekst.length();i++) {if(tekst[i]=='d')tekst[i]='e'; else if(tekst[i]=='e')tekst[i]='d';}
        for(int i=0;i<tekst.length();i++) {if(tekst[i]=='r')tekst[i]='y'; else if(tekst[i]=='y')tekst[i]='r';}
        for(int i=0;i<tekst.length();i++) {if(tekst[i]=='p')tekst[i]='o'; else if(tekst[i]=='o')tekst[i]='p';}
        for(int i=0;i<tekst.length();i++) {if(tekst[i]=='l')tekst[i]='u'; else if(tekst[i]=='u')tekst[i]='l';}
        for(int i=0;i<tekst.length();i++) {if(tekst[i]=='k')tekst[i]='i'; else if(tekst[i]=='i')tekst[i]='k';}
        }

        void wyprowadzenie()
        {
        cout<<endl<<"Oto zakodowany tekst:"<<endl<<tekst<<endl<<endl;

        }

        void zakonczenie()
        {
        cout<<"Dziekujemy za skorzystanie z programu.";
        }

        void wybor()
        {
        cout << "MENU:\n";
        cout << "Wprowadź 1 aby kontynuować\n";
        cout << "Wprowadź 2 aby zakończyć\n";
        cout << "Wybór: ";
        cin >> menu;
        switch(menu)
            {
            case 1: wprowadzenie();
            break;
            case 2: zakonczenie();
            break;
            default: cout << "Nie ma takiej opcji!" << cout;
            }
        }

    int main()
    {
    powitanie();
    wprowadzenie();
    kodowanie();
    wyprowadzenie();
    wybor();
    do
    {
    wprowadzenie2();
    kodowanie();
    wyprowadzenie();
    wybor();
    } while (menu == 1);
    return 0;
    }


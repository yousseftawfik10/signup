#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<string>
using namespace std;
void login(int choice);
void registr(int choice);

int main()
{
    int choice=0;
    cout << "***********************************************************************\n\n\n";
    cout << "                      Welcome to login page                               \n\n";
    cout << "*******************        MENU        *******************************\n\n";
    cout << "1.host" << endl;
    cout << "2.traveller" << endl;
    cout << "3.admin" << endl;
    cout << "\nEnter your choice :";
    cin >> choice;
    cout << endl;
    cin.ignore();
    switch (choice)
    {
    case 1:
        cout << "1.LOGIN" << endl;
        cout << "2.REGISTER" << endl;
        cout << "3.Exit" << endl;
        int ch;
        cin >> ch;
        cin.ignore();
        if (ch == 1) {
            login(1);
            break;
        } else if(ch==2){
            registr(1);
            break;
        }
        else {
            break;
        }
    case 2:
       cout << "1.LOGIN" << endl;
        cout << "2.REGISTER" << endl;
        cout << "3.Exit" << endl;
        int c;
        cin >> c;
        if (c == 1) {
            login(2);
            break;
        } else if(c==2){
            registr(2);
            break;
        }
        else {
            break;
        }
    
    case 3:

        cout << "1.LOGIN" << endl;

        cout << "2.Exit" << endl;
        int chh;
        cin >> chh;
        if (chh == 1) {
            login(3);
            break;
        }
        else if (chh == 2) {
            
            break;
        }
        else {
            cout<<"wrong";
        }
        main();
    }

}

void login(int choice)
{
    int count = 0;
    string user, pass, u, p;
    system("cls");
    cout << "please enter the following details" << endl;
    cout << "USERNAME :";
    getline(cin, user);
    cout << "PASSWORD :";
   getline( cin , pass);
    if (choice == 1) {
        ifstream input("host.txt");
        while (input >> u >> p)
        {
            if (u == user && p == pass)

            {
                count = 1;
                system("cls");
            }
        }
        input.close();
        if (count == 1)
        {
            cout << "\nHello" << user << "\nLOGIN SUCESS\nWe're glad that you're here.\nThanks for logging in\n";
            cin.get();
            cin.get();
            main();
        }
        else
        {
            cout << "\nLOGIN ERROR\nPlease check your username and password\n";
            main();
        }
    }
    else if (choice == 2) {
        ifstream input("traveller.txt");
        while (input >> u >> p)
        {
            if (u == user && p == pass)

            {
                count = 1;
                system("cls");
            }
        }
        input.close();
        if (count == 1)
        {
            cout << "\nHello " << user << "\nLOGIN SUCESS\nWe're glad that you're here.\nThanks for logging in\n";
            cin.get();
            cin.get();
            main();
        }
        else
        {
            cout << "\nLOGIN ERROR\nPlease check your username and password\n";
            main();
        }
    }
    else if (choice ==3) {
        ifstream input("admin.txt");
        while (input >> u >> p)
        {
            if (u == user && p == pass)

            {
                count = 1;
                system("cls");
            }
        }
        input.close();
        if (count == 1)
        {
            cout << "\nHello" << user << "\nLOGIN SUCESS\nWe're glad that you're here Admin.\nThanks for logging in\n";
            cin.get();
            cin.get();
            main();
        }
        else
        {
            cout << "\nLOGIN ERROR\nPlease check your username and password\n";
            main();
        }
    }

    
}
    void registr(int choice)
    {
        int coun=0;
        string reguser, regpass, ru, rp;
        system("cls");
        cout << "Enter the username :";
        getline(cin,reguser);
        cout << "\nEnter the password :";
        getline(cin,regpass);
       
        
        if (choice == 1) {
            ifstream input("host.txt");
            while (input >> ru >> rp)
            {
                if (ru == reguser && rp == regpass)

                {
                    coun = 1;

                }
            }
            input.close();
            if (coun == 1)
            {
                cout <<" you have already signedup";
            }
            if (coun == 0) {
                ofstream reg("host.txt", ios::app);
                reg << reguser << ' ' << regpass << endl;
                system("cls");
                cout << "\nRegistration Sucessful\n";
                main();
            }
        }
        else if(choice ==2){
            ifstream input("traveller.txt");
            while (input >> ru >> rp)
            {
                if (ru == reguser && rp == regpass)

                {
                    coun = 1;

                }
            }
            input.close();
            if (coun == 1)
            {
                cout << " you have already signedup";
            }
            if (coun == 0) {
                ofstream reg("traveller.txt", ios::app);
                reg << reguser << ' ' << regpass << endl;
                system("cls");
                cout << "\nRegistration Sucessful\n";
                main();
            }
        }

    }


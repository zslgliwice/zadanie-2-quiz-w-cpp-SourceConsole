#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string name;
string answ;
int points = 0;

void startAQuestion(string question, string answerA, string answerB, string answerC, string correctAnswerPrefix);

int main()
{
    //https://cpp0x.pl/kursy/Kurs-WinAPI-C++/Roznosci/Kolory-w-konsoli/374
    HANDLE hndle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hndle, 12);
    cout << "\aPodaj imie: ";
    cin >> name;

    system("cls");
    cout<< "3";
    Sleep(1000);
    system("cls");
    cout<< "3..2";
    Sleep(1000);
    system("cls");
    cout<< "3..2..1..";
    Sleep(1000);
    system("cls");

    startAQuestion("wybierz od a do c moze zgadniesz 1.", "odp a", "odp b", "odp c", "c");
    startAQuestion("wybierz od a do c moze zgadniesz 2.", "odp a", "odp b", "odp c", "b");
    startAQuestion("wybierz od a do c moze zgadniesz 3.", "odp a", "odp b", "odp c", "c");
    startAQuestion("wybierz od a do c moze zgadniesz 4.", "odp a", "odp b", "odp c", "a");
    startAQuestion("wybierz od a do c moze zgadniesz 5.", "odp a", "odp b", "odp c", "b");

    printf("===================== LOG =====================\nImie: %s\nPunkty: %d\n===================== LOG =====================", name.c_str(), points);


    return 0;
}

void startAQuestion(string question, string answerA, string answerB, string answerC, string correctAnswerPrefix){
        cout << name << " witaj w tescie z programowania\n";

    cout << question<<endl;
    cout << "a) "<<answerA<<endl;
    cout << "b) "<<answerB<<endl;
    cout << "c) "<<answerC<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> answ;
    if(answ == correctAnswerPrefix)
    {
        cout << "Poprawna odpowiedz!";
        points++;
    }
    else
    {
        cout << "Zle!";

    }
    Sleep(3000);
    system("cls");
}
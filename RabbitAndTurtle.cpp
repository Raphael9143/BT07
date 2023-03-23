#include <time.h>
#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

const int FINISH = 70;

int getRandomSteps(int n);
void run(int &pRab, int &pTur, int &pre_rab, int &pre_tur, char* rabbit, char* turtle);
void finish(char* rabbit, char* turtle, int pRab, int pTur);

int main()
{
    srand(int (time(NULL)));
    char* rabbit = new char [FINISH];
    char* turtle = new char [FINISH];
    int pre_rab = 0, pre_tur = 0;
    rabbit[pre_rab] = 'R';
    turtle[pre_tur] = 'T';
    for (int i=1; i<FINISH; i++)
    {
        rabbit[i] = ' ';
        turtle[i] = ' ';
    }
    int pRab = 0, pTur = 0;
    while (pRab != FINISH - 1  && pTur != FINISH - 1)
    {
        run(pRab, pTur, pre_rab, pre_tur, rabbit, turtle);
    }
    finish(rabbit, turtle, pRab, pTur);
    return 0;
}

int getRandomSteps(int n)
{
    return rand() % n + 1;
}

void run(int &pRab, int &pTur, int &pre_rab, int &pre_tur, char* rabbit, char* turtle)
{
    if (pRab > FINISH - 1 || pRab < 0)
        pRab = 0;
    if (pTur > FINISH - 1 || pTur < 0)
        pTur = 0;
    int step_rab = getRandomSteps(10), step_tur = getRandomSteps(10);
    switch (step_rab)
    {
    case 3: case 4:
        pRab += 9;
        break;
    case 5:
        pRab -= 12;
        break;
    case 6: case 7: case 8: case 9:
        pRab ++;
        break;
    case 10:
        pRab -= 2;
        break;
    }
    rabbit[pre_rab] = ' ';
    rabbit[pRab] = 'R';
    pre_rab = pRab;
    switch (step_tur)
    {
    case 1: case 2: case 3: case 4: case 5:
        pTur += 3;
        break;
    case 6: case 7: case 8:
        pTur ++;
        break;
    case 9: case 10:
        pTur -= 6;
        break;
    }
    turtle[pre_tur] = ' ';
    turtle[pTur] = 'T';
    pre_tur = pTur;
    for (int i=0; i<30; i++)
    {
        cout << " ";
    }
    cout << "R A C I N G" << endl;
    for (int i=0; i<=71; i++)
    {
        cout << "=";
    }
    cout << endl;
    for (int i=0; i<FINISH; i++)
    {
        cout << rabbit[i];
    }
    cout << " ||\n";
    for (int i=0; i<FINISH; i++)
    {
        cout << turtle[i];
    }
    cout << " ||\n";
    for (int i=0; i<=71; i++)
    {
        cout << "=";
    }
    cout << endl;
    Sleep(100);
    system("cls");
}

void finish(char* rabbit, char* turtle, int pRab, int pTur)
{
    for (int i=0; i<30; i++)
    {
        cout << " ";
    }
    cout << "R A C I N G" << endl;
    for (int i=0; i<=71; i++)
    {
        cout << "=";
    }
    cout << endl;
    for (int i=0; i<FINISH; i++)
    {
        cout << rabbit[i];
    }
    cout << " ||\n";
    for (int i=0; i<FINISH; i++)
    {
        cout << turtle[i];
    }
    cout << " ||\n";
    for (int i=0; i<=71; i++)
    {
        cout << "=";
    }
    cout << endl;
    if (pRab == FINISH - 1)
        cout << "Rabbit win!\n";
    else
        cout << "Turtle win!\n";
}

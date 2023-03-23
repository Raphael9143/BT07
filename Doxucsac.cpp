#include <iostream>
#include <ctime>
using namespace std;
//cach 1
/*void dice(int &player1, int &player2)
{
    srand(time(0));
    player1 = 0;
    player2 = 0;
    int p1, p2;
    while (player1 != 100 && player2 != 100)
    {
        p1 = rand() % 6 + 1;
        p2 = rand() % 6 + 1;
        player1 += p1;
        player2 += p2;
        if (player1 > 100)
            player1 -= 100;
        else if (player2 > 100)
            player2 -= 100;
        cout << "xuc sac nguoi choi 1: " << p1 << ". Tong nguoi choi 1: " << player1 << endl << "xuc sac nguoi choi 2: " << p2 << " Tong nguoi choi 2: " << player2 << endl;
    }
    if (player1 == 100)
        cout << "Nguoi choi 1 thang!" << endl;
    else
        cout << "Nguoi choi 2 thang!" << endl;
}
*/
//cach 2
void dice(int &player1, int &player2)
{
    srand(time(NULL));
    player1 = 0;
    player2 = 0;
    int p1, p2;
    while (player1 != 100 && player2 != 100)
    {
        if (player1 < player2)
        {
            p1 = rand() % 6 + 1;
            player1 += p1;
            if (player1 > 100)
                player1 -= 100;
            cout << "xuc sac nguoi choi 1: " << p1 << ". Tong nguoi choi 1: " << player1 << endl;
        }
        else if (player2 < player1)
        {
            p2 = rand() % 6 + 1;
            player2 += p2;
            if (player2 > 100)
                player2 -= 100;
            cout << "xuc sac nguoi choi 2: " << p2 << ". Tong nguoi choi 2: " << player2 << endl;
        }
        else
        {
            p1 = rand() % 6 + 1;
            p2 = rand() % 6 + 1;
            player1 += p1;
            player2 += p2;
            if (player1 > 100)
                player1 -= 100;
            if (player2 > 100)
                player2 -= 100;
            cout << "xuc sac nguoi choi 1: " << p1 << ". Tong nguoi choi 1: " << player1 << endl;
            cout << "xuc sac nguoi choi 2: " << p2 << ". Tong nguoi choi 2: " << player2 << endl;
        }
    }

}

int main()
{
    int player1, player2;
    dice(player1, player2);
    return 0;
}

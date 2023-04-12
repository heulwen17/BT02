#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int number()
{
    int N = rand()% 100 +1;
    return N;
}

int Guess()
{
    cout << "Nhap mot so tu 1 den 100: ";
    int guess_N;
    cin >> guess_N;
    return guess_N;
}

void result (int guess_N, int N)
{
    if (guess_N > N) cout << "So ban vua nhap qua lon, hay thu lai: " << endl;
    else if (guess_N < N) cout << "So ban vua nhap qua nho, hay thu lai: " << endl;
    else cout << "Chinh xac, ban thang!" << endl;
}

void play(int N)
{
    int guess_N = 0;
    do
    {
        guess_N = Guess();
        result (guess_N, N);
    }
    while (guess_N != N);
}

int main()
{
    srand(time(0));
    bool game = 1;
    while (game)
    {
        int N = number();
        play(N);
        cout << "Ban co muon thu lai khong?" << endl << "Neu co, nhan phim 'X', nguoc lai nhan phim 'O'" << endl;
        char ans = '0';
        while (ans != 'x' && ans != 'X' && ans != 'o' && ans != 'O')
        {
            cin >> ans;
            if (ans == 'o' || ans == 'O') game = 0;
        }
    }
    return 0;
}

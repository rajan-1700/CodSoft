//NUMBER GUESS
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main()
{
    cout << "Number guess game" << endl;
    while (1)
    {
        cout << "Enter 1 to start the game!" << endl;
        cout << "0 for ending the game!\n"
             << endl;
        // generating the secret number
        srand(time(0));
        int secretNumber = 1 + (rand() % 100);
        int activeflag;
        cin >> activeflag;
        if (activeflag == 1)
        {
            int chances = 5;
            for (int i = 1; i <= 5; i++)
            {
                cout << "Guess the number:";
                int guess;
                cin >> guess;
                if (guess == secretNumber)
                {
                    cout << "YOU WON" << endl;
                    break;
                }
                else
                {
                    if (guess > secretNumber)
                    {
                        cout <<"Secret number is smaller than your guess."<<endl;
                    }
                    else
                    {
                        cout << "Secret number is greater than your guess." << endl;
                    }
                    chances--;
                    cout << chances << " chances left. "
                         << endl;
                    if (chances == 0)
                    {
                        cout << "YOU LOST THE GAME , CHOICES LEFT ARE 0"<<endl;
                            cout
                             << "BETTER LUCK NEXTTIME" << endl;
                    }
                }
            }
        }
        // To end the game
        else if (activeflag == 0)
        {
            break;
        }
        else
        {
            cout << "Enter either 0 or 1" << endl;
        }
    }
    return 0;
}
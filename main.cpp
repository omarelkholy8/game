#include <iostream>
using namespace std;

int main()
{
    string a;

    cout << "Welcome to our game\n";
    cout << "...................\n";
    cout << "Start (yes/no): ";
    cin >> a;

    if (a == "yes")
    {
        cout << "\nStart Game!\n";


       cout << " \n Level 1: Guess the Number \n ";
    cout << "Guess a number between 1 and 10\n";

        int x;

        for (int i = 0; i < 3; i++)
        {
            cin >> x;

            if (x == 7)
            {
                cout << "Good job!\n";
                break;
            }
            else
            {
                cout << "Try again\n";
            }
        }

        
        cout << "\n Level 2: Guess the Number \n";
        cout << "Guess a number between 1 and 50\n";

        for (int i = 0; i < 5; i++)
        {
            cin >> x;

            if (x == 25)
            {
                cout << "Excellent!\n";
                break;
            }
            else
            {
                cout << "Try again\n";

                if (x < 25)
                    cout << "The number is bigger\n";
                else
                    cout << "The number is smaller\n";
            }
        }


        cout << "\n Level 3: Guess the Number \n";
        cout << "Guess a number between 1 and 100\n";

        for (int i = 0; i < 7; i++)
        {
            cin >> x;

            if (x == 73)
            {
                cout << "Amazing!\n";
                break;
            }
            else
            {
                cout << "Wrong guess\n";

                if (x < 73)
                    cout << "The number is bigger\n";
                else
                    cout << "The number is smaller\n";
            }
        }

    
        cout << "\n Game 2: Rock Paper Scissors \n";
        cout << "1 = Rock\n";
        cout << "2 = Paper\n";
        cout << "3 = Scissors\n";

        int player;
        int computer = 2;

        cout << "Choose: ";
        cin >> player;

        if (player == computer)
        {
            cout << "Draw!\n";
        }
        else if (player == 1 && computer == 3)
        {
            cout << "You Win!\n";
        }
        else if (player == 2 && computer == 1)
        {
            cout << "You Win!\n";
        }
        else if (player == 3 && computer == 2)
        {
            cout << "You Win!\n";
        }
        else
        {
            cout << "You Lose!\n";
        }
    }
    else
    {
        cout << "Good Bye";
    }

    return 0;
}
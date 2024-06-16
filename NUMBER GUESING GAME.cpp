#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    cout<<"\n\t\t Welcome to the Number Guessing Game \n"<<endl;
    cout<<"\n\t\t you will have to guess a number between 1 to 100.";
    cout<<"\n\t\t Lets start playing and Best of Luck."<<endl;

    srand(time(0));
    int randNumber = ( rand() %100) +1;

    cout<< "\n^^**You will have total 5 chances to guess correct number.**^^\n";
    int chanceLeft = 5;
    int playerInput;

    for (int i = 1; i <= 5; i++)
    {
        cout<<"\n Enter the number: ";
        cin>> playerInput;

        if(playerInput == randNumber)
        {
            cout<<"\n Congrats!!. You have successfully guessed the right number\n";
            cout<<"\n Thanks for playing. Have a nice day";
            break;
        }
        else
        {
            if (playerInput >  randNumber)
            {
                cout<< "\n""Insert a smaller number. Try Again"<<endl;
            }
            else
            {
                cout<< "\n""[Insert a larger number. Try Again]"<<endl;
            }
        }
        chanceLeft--;
        cout<< "\n(Chances left to guess the Random number: "<< chanceLeft <<")"<<endl;

        if (chanceLeft == 0)
        {
            cout<<"\n Sorry your chance has been finished to guess the Random number\n" <<endl;
            cout<<" The Random number was :" << randNumber <<endl;
            cout<< "Thanks for playing have a nice day.";

        }
    }
    cout<< "\n";
    return 0;
}
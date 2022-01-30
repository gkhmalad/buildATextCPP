#include <iostream>

using namespace std;

int main(){

    int answer;

    do{
        cout << "You wake up on a sunny day and decide to start your day right.\n" << "You get into the bathroom and decide to...\n  1) Brush your teeth.\n  2) Shower\n";
        cin >> answer;

        if(answer != 1 && answer != 2)
            cout << "Wrong input, try again!\n";

    }while(answer != 1 && answer != 2);

    // Branching One
    if(answer == 1){

        int newAnswer;
        do{

            cout << "You decide to brush your teeth to start the day. You do so and now your teeth are clean. You decide to...\n  1) Shower\n  2) Get out of the bathroom\n";
            cin >> newAnswer;
            if(newAnswer != 1 && newAnswer != 2)
                cout << "Wrong input, try again!\n";

        }while(newAnswer != 1 && newAnswer != 2);

        if(answer == 1){

            cout << "You decide to shower and get into the cabin. After a few minutes the unthinkable happens... You slip and hit the side of your head on the faucet.\n\n\t...You have died";

        }
        else if(answer == 2){

            cout << "You decide to get out of the bathroom to dress up and get on with the day. As you open the door, you see two bald men sitting down on your bed. One of them is holding an axe. Oh no! It's the Salamanca cousins! You better ru...\n\t...You have died";

        }
    }
    else if(answer == 2){

        cout << "You decide to shower and get into the cabin. After a few minutes the unthinkable happens... You slip and hit the side of your head on the faucet.\n\n\t...You have died";

    }

    return 0;
}
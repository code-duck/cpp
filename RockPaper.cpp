#include <iostream>
#include <ctime>
using namespace std;

char playerchoice();
char compchoice();
void showchoice(char choice);
void chooseWinner(char player, char comp);

int main()
{

    char player;
    char comp;

    player = playerchoice();
    cout << "your choice: \n";
    showchoice(player);

    comp = compchoice();
    cout << "comp choice: \n";
    showchoice(comp);

    chooseWinner(player, comp);

    return 0;
}

char playerchoice()
{
    char player;

    do{
       
    cout << "PICK A CHOICE: \n";
    cout << "pick 'r' for rock: \n";
    cout << "pick 'p' for paper: \n";
    cout << "pick 's' for scissor: \n";

    cin >> player;

    }while (player != 'r' && player != 'p' && player != 's');
    
}

char compchoice()
{
    srand(time(0));

    int num = rand() % 3 + 1; 

    switch (num)
    {
        case 1: return 'r';
            
        case 2: return 'p';
             
        case 3: return 's';
            
    }

}

void showchoice(char choice)
{
    switch(choice)
    {
        case 'r' : cout << "rock \n";
                break;
        case 'p' : cout << "paper \n";
                break;
        case 's' : cout << "scissor \n";
                break;                
    }
 
}

void chooseWinner(char player, char comp)
{
    switch(player)
    {
        case 'r': if(comp == 'r'){
            cout << "it's a tie \n";
        }
        else if (comp == 'p'){
            cout << "you lose \n";
        }
        else{ cout << "you won"; }
        break;

        case 'p': if(comp == 'p'){
            cout << "you tie \n";
        }
        else if(comp == 's'){
            cout << "you lose \n";
        }
        else{ cout << " you won";}
        break;

        case 's': if( comp == 's'){
            cout << " it's a tie \n";
        }
        else if(comp == 'p'){
            cout << "you won \n";
        }
        else { cout << "you lose ";}
        break;
       
    }

}
#include <iostream>
#include <ctime>


char getUserChoice(){
    
    char choice;

    do{

        std::cout << "*********** ROCK PAPER SCISSOR ***********\n\n";
        std::cout << "Choose any one of the following\n"<< std::endl;
        std::cout << "\'r\' for Rock" << std::endl;
        std::cout << "\'p\' for Paper" << std::endl;
        std::cout << "\'s\' for Scissor" << std::endl;
        std::cout << "******************************************";

        std::cout<<"\nEnter your choice: ";
        std::cin >> choice;
        choice = tolower(choice);
        std::cout << std::endl;

    }while(choice != 'r' && choice != 'p' && choice != 's');


    return choice;
}

char getComputerChoice(){
    char choice;

    srand(time(0));
    int num = rand() % 3 + 1;
    
    switch (num)
    {
    case 1:
        choice = 'r';
        break;
    case 2:
        choice = 'p';
        break;
    case 3:
        choice = 's';
        break;
    
    default:
        choice = 'r';
    }


    return choice;
}


char showChoice(char user, char computer){

    switch (user)
    {
    case 'r':
        std::cout << "Your choice = Rock\n";
        break;

    case 's':
        std::cout << "Your choice = Scissor\n";
        break;
    case 'p':
        std::cout << "Your choice = Paper\n";
        break;
    
    default:
        break;
    }

    switch (computer)
    {
    case 'r':
        std::cout << "Computer choice = Rock\n\n";
        break;

    case 's':
        std::cout << "Computer choice = Scissor\n\n";
        break;
    case 'p':
        std::cout << "Computer choice = Paper\n\n";
        break;
    
    default:
        break;
    }
    
    return 0;
}

void chooseWinner(char user, char computer){

    switch (user)
    {
    case 'r':
                if(computer == 'r'){
                    std::cout<<"Its a tie!";
                }
                else if (computer == 'p'){
                    std::cout<<"Computer win!";
                }
                else{
                    std::cout<<"You Win!";
                }
    break;

    case 'p':
                if(computer == 'p'){
                    std::cout<<"Its a tie!";
                }
                else if (computer == 's'){
                    std::cout<<"Computer win!";
                }
                else{
                    std::cout<<"You Win!";
                }
    break;

    case 's':
                if(computer == 's'){
                    std::cout<<"Its a tie!";
                }
                else if (computer == 'r'){
                    std::cout<<"Computer win!";
                }
                else{
                    std::cout<<"You Win!";
                }
    break;
    
    default:
        break;
    }

}

int main(){

    char user = getUserChoice();
    char computer = getComputerChoice();
    showChoice(user, computer);
    chooseWinner(user, computer);

    return 0;
}
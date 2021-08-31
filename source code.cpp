#include <iostream>
#include <string>
#include <algorithm> 
#include <ctime>
#include <conio.h>



void PrintIntro(int Diffculty)
{
    std::cout<<"you are a secret agent working to hack a highly protected facility!!"<<std::endl;
    std::cout << "Currently you are at level: "<< Diffculty << std::endl;
    std::cout<<std::endl;
    std::cout<<"Enter a code to start the game: ";
    std::cout<<std::endl;
    std::cin.get();

}
bool PlayGame(int Diffculty)
{
    while (Diffculty>1)
    {
    std::cout<<"\nFast before they catch you!"<<std::endl;
    std::cout << "Currently you are at level: "<< Diffculty << std::endl;
    std::cout<<std::endl;
     std::cin.get();
    std::cout<<"Enter a code to start the game: ";
    std::cout<<std::endl;
    break;
    }
    
    const int CodeA = rand() % Diffculty + Diffculty;
    const int CodeB = rand() % Diffculty + Diffculty;
    const int CodeC = rand() % Diffculty + Diffculty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout<<std::endl;
    std::cout<<"+ There are three numbers in the code!"<<std::endl;
    std::cout<<"+ the add-up for the three numbers are: "<< CodeSum <<std::endl;
    std::cout<<"+ The product for the three numbers are: "<< CodeProduct <<std::endl;
    std::cout<<"+ Now enter three numbers which adding them will be equal to: " << CodeSum << " and multiplying them will be equal to:  " << CodeProduct <<std::endl;
    int GusseA, GusseB, GusseC;
    std::cin >> GusseA >> GusseB >> GusseC;
   
    int GusseSum = GusseA + GusseB + GusseC, GusseProduct = GusseA * GusseB * GusseC;
    
    if (GusseSum == CodeSum && GusseProduct == CodeProduct)
    {
        std::cout<<"\n\nGreat agent, now we are moving to the next level.";
        std::cin.get();

        return 1;
    }
    else
    {
        std::cout<< "\n\nALERT ALERT!!! WRONG ENTRY !!"<< std::endl;
        std::cout<< "ALERT ALERT!!! WRONG ENTRY !!"<< std::endl;
        std::cout<< "ALERT ALERT!!! WRONG ENTRY !!"<< std::endl;
        std::cout<< "CODE RED HAS BEEN TRIGGERED!!"<< std::endl;
        std::cout<< "fast try again and enter the correct code before they come!! " << std::endl;
        std::cin.get();

        return 0;
    }
    
}
int main()
{
    srand(time(NULL));
    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;
    int Option;
    std::cout<<std::endl;
    std::string Name;
    std::cout << "Enter your Name: ";
    std::cin >> Name;
    std::transform(Name.begin(), Name.end(), Name.begin(), ::toupper);
    std::cout<<std::endl;
    std::cout<<"***WELCOME TO THE GAME " << Name << " !***"<<std::endl;
    std::cout<<std::endl;
    std::cout<< "Please chose an option to start the game:";
    std::cout<< "\n1- start the game.";
    std::cout<< "\n2- about the game.";
    std::cout<< "\n3- about the devloper.";
    std::cout<< "\n4- exit game.\n";
    std::cout<< "Your entery is: ";
    std::cin>> Option;
    switch (Option)
    {
    case 1:
        
        break;
    case 2:
        std::cout << "This game is base on mathematical exercise where you have to gusse three numbers that the sum of the three numbers";
        std::cout << "\nand their multiplication will be equal to the hint given to you.";
        getch();
        return 0;
        break;
    case 3:
        std::cout << "This game is been by @asjad673 as first project in my devloping creer, you can reach at me via email: asjad673@gmail.com.";
        getch();
        return 0;
        break;
    case 4:
        return 0;
        break;
    default:
        std::cout << "Wrong input, plase try agine";
        getch();
        return 0;
        break;
    }
   
    PrintIntro(LevelDifficulty);

    while (LevelDifficulty <= MaxDifficulty)
    {
        bool bLvelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();
        if (bLvelComplete)
        {
            ++LevelDifficulty;
        }
        
    }
    
    std::cout<<"\nGood job agint now you are succsfully complete the mission we are proud of you.";
    std::cin.get();

    return 0;
  
   
}

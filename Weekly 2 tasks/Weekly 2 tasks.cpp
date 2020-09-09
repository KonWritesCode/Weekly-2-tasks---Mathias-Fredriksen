//Written by Mathias Fredriksen
#include <iostream>
#include <string>
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

void Task1()
{
    int i{0};
    while(i < 100)
    {
        i++;
        std::cout << "while loop: " << i << std::endl;
    }

    i = 0;

    for(int j = 1; j <= 100; j++)
    {
        std::cout << "for loop: " << j << std::endl;
    }

    //This is simply used for stopping the program from skipping straight back to the Main Menu
    std::string randomInput;
    std::cout << "Type anything to continue: ";
    std::cin >> randomInput;
}

void Task2()
{
    for(int i = 100; i >= 1; i--)
    {
        std::cout << "For loop: " << i << std::endl;
    }

    //This is simply used for stopping the program from skipping straight back to the Main Menu
    std::string randomInput;
    std::cout << "Type anything to continue: ";
    std::cin >> randomInput;
}

void Task3_5()
{
    //This task was originaly included in Weekly 2, but got removed. Thought I might as well include it, instead of deleting it.
    std::cout << "(This task was originaly included in Weekly 2 as 'Task 3', but got removed)\n\n";
    //Guess the random number between 1 and 10
    srand(time(0));

    Task3Start:

    int randomNumber{0};
    int playersNumber{0};

    randomNumber = rand() % 10 + 1;

    std::cout << "Guess the random number between 1 and 10: ";
    std::cin >> playersNumber;

    std::cout << std::endl;

    //Keep the player guessing til they figure out what the random number is
    while(playersNumber != randomNumber)
    {
        if (playersNumber < randomNumber) 
        {
            std::cout << "Your number is lower than the random number!\n";
        }
        else if(playersNumber > randomNumber)
        {
            std::cout << "Your number is higher than the random number!\n";
        }

        std::cout << "Guess the random number between 1 and 10: ";
        std::cin >> playersNumber;

        while (std::cin.fail() || playersNumber > 10 || playersNumber <= 0)
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');

            std::cout << "That's not a valid number\n";
            std::cout << "Guess the random number between 1 and 10: ";
            std::cin >> playersNumber;
        }

        std::cout << "\n";
    }
    std::cout << "Well done! You found the random number '" << randomNumber << "'!\n";

    std::string input;
    std::cout << "\nType 'R' to retry or '0' to choose a different task: ";
    std::cin >> input;

    while (std::cin.fail() || input != "R" && input != "r" && input != "0")
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');

        std::cout << "\nType 'R' to retry or '0' to choose a different task: ";
        std::cin >> input;
    }

    if(input == "R" || input == "r")
    {
        system("cls");
        goto Task3Start;
    }
}

void Task3()
{
    int i{0};
    while(i < 50)
    {
        i += 5;
        std::cout << "While loop: "<< i << std::endl;
    }

    //This is simply used for stopping the program from skipping straight back to the Main Menu
    std::string randomInput;
    std::cout << "Type anything to continue: ";
    std::cin >> randomInput;
}

void Task4()
{
    for(int i = 5; i <= 50; i += 5)
    {
        std::cout << "For loop: " << i << std::endl;
    }

    //This is simply used for stopping the program from skipping straight back to the Main Menu
    std::string randomInput;
    std::cout << "Type anything to continue: ";
    std::cin >> randomInput;
}

void Task5()
{
    int i{0};

    do
    {
        i += 5;
        std::cout << "Do while loop: " << i << std::endl;
    } while (i < 50);

    //This is simply used for stopping the program from skipping straight back to the Main Menu
    std::string randomInput;
    std::cout << "Type anything to continue: ";
    std::cin >> randomInput;
}

void Task6()
{
    char grade;

    do
    {
        std::cout << "What grade do you want to get in Programming 1?\n";
        std::cin >> grade;

        switch(grade)
        {
            case 'A': case 'a':
                std::cout << "Outstanding\n";
                break;
            
            case 'B': case 'b':
                std::cout << "Very Good\n";
                break;

            case 'C': case 'c':
                std::cout << "Good\n";
                break;

            case 'D': case 'd':
                std::cout << "Some Flaws\n";
                break;

            case 'E': case 'e':
                std::cout << "Not very good...\n";
                break;

            case 'F': case 'f':
                std::cout << "Fail\n";
                break;

            default:
                std::cout << "That's not a valid grade!\n";
                std::cout << "The grade must be between 'A' and 'F'";
        }
        //Not sure if theres an simpler way to write the while loop or not
    } while(grade != 'A' && grade != 'a' && grade != 'B' && grade != 'b' && grade != 'C' && grade != 'c' && grade != 'D' && grade != 'd' && grade != 'E' && grade != 'e' && grade != 'F' && grade != 'f');

    //This is simply used for stopping the program from skipping straight back to the Main Menu
    std::string randomInput;
    std::cout << "Type anything to continue: ";
    std::cin >> randomInput;
}

int main()
{
    int i{ 0 };
    do
    {
        system("cls");
        std::cout << "1. Task 1\n2. Task 2\n3. Task 3\n4. Task 4\n5. Task 5\n6. Task 6 & 7\n7. Task 3.5 (Removed Task)\n0. Exit\n\n";
        std::cout << "Type the number of which task you'd like to see: ";
        std::cin >> i;

        while (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');

            std::cout << "Type the number of which task you'd like to see: ";
            std::cin >> i;
        }

        switch (i)
        {
            case 1:
                system("cls");
                Task1();
                break;

            case 2:
                system("cls");
                Task2();
                break;

            case 3:
                system("cls");
                Task3();
                break;

            case 4:
                system("cls");
                Task4();
                break;

            case 5:
                system("cls");
                Task5();
                break;

            case 6:
                system("cls");
                Task6();
                break;

            case 7:
                system("cls");
                Task3_5();
                break;

            case 0:
                system("cls");
                exit(0);
                break;

            default:
                system("cls");
                std::cout << "That's not a valid number!\n";
        }
    } while (true);

    return 0;
}
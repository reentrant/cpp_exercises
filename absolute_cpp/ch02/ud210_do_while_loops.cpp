/* Goal: In the programming quiz, use a while loop to prompt
** the user to guess a target number. 
** Tell the user if the guess is too high or too low. 
** Tne user enters -1  or guesses the target number to end 
** the program.
*/

#include <iostream>
#include <sstream>

int main()
{
    //use 55 as the number to be guessed
    int target = 55;
    int guess;

    std::cout<<"Guess a number between 0 and 100: ";
    
    do {
        std::cin >> guess;
        if (guess == -1) {
            std::cout << "Good bye\n";
            break;
        } else {
            std::cout << guess<<"\n";
        }
        
        if (target < guess) {
            std::cout << guess << " is too high\n";
        } else if(target > guess){
            std::cout << guess << " is too low\n";
        }
        
    } while(target != guess);
    if (target == guess){
        std::cout << "You guessed the target!\n";
    }
        
    return 0;
}

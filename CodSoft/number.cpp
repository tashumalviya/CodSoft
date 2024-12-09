//Create a programe that generates a random number and ask the user to guess it . Provide feedback on weather the guess is too high or too low until the user guesses the correct the number.

#include<iostream> 
#include<cstdlib>      //For the rand() and srand() functions.
#include<ctime>        // For the time() function
using namespace std;

int main(){
  srand(time(0));  //seed random number generator
  
//   generate random numbers within any range using the modulus operator
  int random_number = rand() % 100 + 1;
  int guess;
  int userGuess = 0;
  
  cout<<"Generates a random number "<<endl;
  
  do{
      cout<<"Enter your guess between 1 and 100 : ";
      cin>>guess;
      userGuess++;
      
      if(guess > random_number){
          cout<<"TOO HIGH!"<<endl;
      }
      else if(guess < random_number){
          cout<<"TOO LOW!"<<endl; 
      }
      else{
          cout<<"Congratulation! YOU GUESSED THE NUMBER "<<userGuess<<" tries"<<endl;;
      }
  }
      while(guess != random_number);
    
    return 0;
}
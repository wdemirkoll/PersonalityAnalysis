#include <iostream>

// Global variables to store personality trait scores
int Extroverted = 0;
int Introverted = 0;
int Emotional = 0;
int Irritable = 0;
int Competitive = 0;
int Reply;

// Displays Yes/No options for the user
void YesNo(){
    std::cout << "[1] - Yes" << std::endl;
    std::cout << "[2] - No" << std::endl;
}

// Displays an error message for invalid input
void Invalid(){
    std::cout << "Invalid selection or skipped question." << std::endl;
}

// Prompts the user for input and stores the response
void ReplyFunction(){
    std::cout << "Reply:";
    std::cin >> Reply;
}

// Evaluates extroverted personality level
void Extro(){
    if(Extroverted >= 4)
        std::cout << "an outgoing personality" << std::endl;
    else if(Extroverted >= 2 && Extroverted <= 3)
        std::cout << "a moderately extroverted personality" << std::endl;
}

// Evaluates introverted personality level
void Intro(){
    if(Introverted >= 4)
        std::cout << "an introverted personality" << std::endl;
    else if(Introverted >= 2 && Introverted <= 3)
        std::cout << "moderately introverted personality" << std::endl;
}

// Evaluates emotional personality level
void Emo(){
    if(Emotional >= 4)
        std::cout << "an emotional personality" << std::endl;
    else if(Emotional >= 2 && Emotional <= 3)
        std::cout << "a moderately emotional personality" << std::endl;
}

// Evaluates irritable personality level
void Irri(){
    if(Irritable >= 4)
        std::cout << "an irritable personality" << std::endl;
    else if(Irritable >= 2 && Irritable <= 3)
        std::cout << "a moderately irritable personality" << std::endl;
}

// Evaluates competitive personality level
void Compe(){
    if(Competitive >= 4)
        std::cout << "a competitive personality" << std::endl;
    else if(Competitive >= 2 && Competitive <= 3)
        std::cout << "a moderately competitive personality" << std::endl;
}

int main(){

    // Question 1: Social interaction preference
    std::cout << "Do you like communicating with people?" << std::endl;
    YesNo();
    ReplyFunction();

      if(Reply == 1)
         Extroverted++;
      else if(Reply == 2)
         Introverted--;
      else
         Invalid();

    // Question 2: Emotional sensitivity
    std::cout << "Are you easily affected by events?" << std::endl;
    YesNo();
    ReplyFunction();

      if(Reply == 1)
        Emotional++;
      else if(Reply == 2)
        Competitive--;
      else
        Invalid();

    // Question 3: Preference for quiet environments
    std::cout << "Do you like quiet conditions and staying at home?" << std::endl;
    YesNo();
    ReplyFunction();

      if(Reply == 1){
        Introverted++;
        Emotional++;
      }
      else if(Reply == 2)
        Extroverted--;
      else
        Invalid();

    // Question 4: Competitiveness and anger
    std::cout << "Do you compete in games and get angry sometimes?" << std::endl;
    YesNo();
    ReplyFunction();

      if(Reply == 1){
        Irritable++;
        Competitive++;
        Extroverted++;
      }
      else if(Reply == 2){
        Introverted--;
        Emotional--;
      }
      else
        Invalid();

    // Question 5: Nervousness in meetings
    std::cout << "Do you feel nervous in meetings?" << std::endl;
    YesNo();
    ReplyFunction();

      if(Reply == 1)
        Introverted++;
      else if(Reply == 2)
        Extroverted--;
      else
        Invalid();

    // Question 6: Willingness to help others
    std::cout << "Do you enjoy helping people?" << std::endl;
    YesNo();
    ReplyFunction();

      if(Reply == 1){
        Extroverted++;
        Emotional++;
      }
      else if(Reply == 2){
        Introverted--;
        Competitive++;
      }
      else
        Invalid();

    // Question 7: Reaction to sad music
    std::cout << "Do you feel sad when you listen to sad music?" << std::endl;
    YesNo();
    ReplyFunction();

      if(Reply == 1){
        Introverted++;
        Emotional++;
      }
      else if(Reply == 2)
        Irritable--;
      else
        Invalid();

    // Display final personality analysis
    Extro();
    Intro();
    Emo();
    Irri();
    Compe();

  return 0;
}

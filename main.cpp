#include <iostream>

template <typename... T> void ignoreUnused(T &&...) {}

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free
functions. This will be the first project where the code you write will be
compiled and you will be responsible for making sure it compiles before
submitting it for review.

 1) Write down the names of the 6 major primitive types available in C++  here:
 int
 float
 double
 unsigned int
 char
 bool

2) for each primitive type, write out 3 variable declarations inside the
variableDeclaration() function on line 59. a) give each variable declaration an
initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type
'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of
type 'void'. b) at the end of the function, call ignoreUnused once and pass all
of your variables to it. see line 71 for an example

3) Declare 10 free functions
    each declaration should have a random number of parameters in the function
parameter list. When naming your parameters, choose names that are relevant to
the task implied by the function's name. remember: Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing
semicolon 5) pass each of your function parameters to the ignoreUnused function
like you did in b) 6) if your function returns something other than void, add
'return { };' at the end of it. 7) provide default values for an arbitrary
number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the
formatting of your 10 functions.  At this point, you might have something that
looks like this: float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar );
return { }; } This does not conform with the coding standard for this course
(check the Readme.MD) and needs to be corrected

9) in the main function at the end:
    for each of those functions declared,
        a) write out how the function would look if called with correct
arguments b) if the function returned anything, store it in a local variable via
the 'auto' keyword. c) pass the local variables to ignoreUnused() as you did in
2b) see main() for an example of this.

10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

// 2)
void variableDeclarations() 
{

// example:
  int number = 2;

// primitive type examples
  int age = 24;
  int numberOfChildren = 0;
  int housesOwned = 0;

  float decibels = 7.11f;
  float milesPerMinute = 8.30f;
  float bankBalance = 0.01f;

  double distance = 4.221838411352;
  double mass = 9.302927467771;
  double pi = 3.1415926535897;

  unsigned int numberOfItems = 5;
  unsigned int loopCount = 3;
  unsigned int numberOfVotes = 26139;

  char firstInitial = 'J';
  char middleInitial = 'S';
  char surnameInitial = 'B';

  bool isHuman = true;
  bool isOver18 = true;
  bool isMarried = false;

  ignoreUnused (number, age, numberOfChildren, housesOwned, decibels,
               milesPerMinute, bankBalance, distance, mass, g, numberOfItems,
               loopCount, numberOfVotes, firstInitial, middleInitial,
               surnameInitial, isHuman, isOver18,
               isMarried); // passing each variable declared to the
                           // ignoreUnused() function
}


// function examples
bool rentACar(int rentalDuration, int carType = 0)
{
  ignoreUnused (rentalDuration, carType);
  return {}; 
             
}

// 1
void addAttitude (double knobValueChange, int distortionType, bool pluginBypassed = 0) 
{
  ignoreUnused (knobValueChange, distortionType, pluginBypassed);
}

// 2
float getCurrentVolume (float knobValue, char compressionType = 'A') 
{
  ignoreUnused (compressionType, knobValue);
  return {};
}

// 3
bool isPersonEngaged (bool hasProposed, bool receivedYes, int numberOfPartners = 1) 
{
  ignoreUnused (numberOfPartners, receivedYes, hasProposed);
  return {};
}

/// 4
void playerTakeDamage (float damageInput, int enemyLevel, bool playerIsAlive = 1) 
{
  ignoreUnused (damageInput, enemyLevel, playerIsAlive);
}

// 5
void updateAmmoCount (int currentAmmo, int RPM, float dT) 
{
  ignoreUnused (currentAmmo, RPM, dT);
}

// 6
double calculateSalary (float baseSalary, float deductions = 0.0f)
{
  ignoreUnused (baseSalary, deductions);
  return {};
}

// 7
void getFavouriteGenre (int candidateNumber, std::string candidateChoice, bool likesMusic = true, bool isOver18 = true) 
{
  ignoreUnused (candidateNumber, candidateChoice);
}

// 8
void incrementDecayTime (double knobValueChange, int reverbType, bool pluginBypassed = 0) 
{
  ignoreUnused (knobValueChange, reverbType, pluginBypassed);
}

// 9
int calculateAgeDifference (int age1, int age2) 
{
  ignoreUnused (age1, age2);
  return {};
}

// 10
bool canLegallyDrink (int age, int countryID, bool isHuman = true)
{
  ignoreUnused (age, countryID, isHuman);
  return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a
 single message.

 send me a DM to review your pull request when the project is ready for
 review.

 Wait for my code review.
 */

int main() 
{
  // example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
  auto carRented = rentACar(6, 2);

  // 1)

  // 2)
  auto currentVolume = getCurrentVolume(6.42f);

  // 3)
  auto isEngaged = isPersonEngaged(false, false);

  // 4)

  // 5)

  // 6)
  auto salaryA = calculateSalary(27, 932.0f);

  // 7)

  // 8)

  // 9)
  auto ageDifference = calculateAgeDifference(24, 21);

  // 10)
  auto isInvited = canLegallyDrink(26, 11);
  ignoreUnused (carRented, currentVolume, isEngaged, salaryA, ageDifference, isInvited);
  std::cout << "good to go!" << std::endl;
  return 0;
}

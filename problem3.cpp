// Write a program that plays the game of Mad Lib. Your program should
// prompt the user to enter the following strings:
// ■ The first or last name of your instructor
// ■ Your name
// ■ A food
// ■ A number between 100 and 120
// ■ An adjective
// ■ A color
// ■ An animal
// After the strings are input, they should be substituted into the story below
// and output to the console.
// Solution to Practice
// Program 2.3
// VideoNote
// Programming Projects 105
// Dear Instructor [Instructor Name],
// I am sorry that I am unable to turn in my homework at this time. First,
// I ate a rotten [Food], which made me turn [Color] and extremely ill. I
// came down with a fever of [Number 100-120]. Next, my [Adjective] pet
// [Animal] must have smelled the remains of the [Food] on my homework,
// because he ate it. I am currently rewriting my homework and hope you
// will accept it late.
// Sincerely,
// [Your Name]
#include <iostream>
using namespace std;
int main()
{
    string int_name, name, food, pet_name, color, pet;
    int number;
    cout << "The first or last name of your instructor :";
    cin >> int_name;
    cout << "Your name :";
    cin >> name;
    cout << "A food :";
    cin >> food;
    cout << " A number between 100 and 120 :";
    cin >> number;
    cout << "An adjective :";
    cin >> pet_name;
    cout << "A color :";
    cin >> color;
    cout << "An animal :";
    cin >> pet;
    cout << "Dear Instructor " << int_name << "," << endl
         << "I am sorry that I am unable to turn in my homework at this time. First, I ate a rotten " << food << ","
         << " which made me turn " << color << "and extremely ill. I came down with a fever of " << number << ". "
         << "Next, my " << pet_name << " pet " << pet << " must have smelled the remains of the " << food << " on my homework, because he ate it. I am currently rewriting my homework and hope you will accept it late.";
    return 0;
}
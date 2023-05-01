// The Harris–Benedict equation estimates the number of calories your body 
// needs to maintain your weight if you do no exercise. This is called your 
// basal metabolic rate, or BMR.
// The formula for the calories needed for a woman to maintain her weight is
// BMR = 655 + (4.3 × weight in pounds) + (4.7 × height in inches) – 
// (4.7 × age in years)
// The formula for the calories needed for a man to maintain his weight is
// BMR = 66 + (6.3 × weight in pounds) + (12.9 × height in inches) – 
// (6.8 × age in years)
// A typical chocolate bar will contain around 230 calories. Write a program 
// that allows the user to input his or her weight in pounds, height in 
// inches, age in years, and the character M for male and F for female. The 
// program should then output the number of chocolate bars that should 
// be consumed to maintain one’s weight for the appropriate sex of the 
// specified weight, height, and age
#include <iostream>
using namespace std;
double bmr_men(double h, double w, double a){
    double men_bmr = 66 + 6.3*w + 12.9*h -6.8*a;
    return men_bmr;
}
double bmr_women(double h, double w, double a){
    double women_bmr=655 + 4.3 *w + 4.7*h - 4.7*a;
    return women_bmr;
}
int main(){
    char sex;
    double weight, hight , age;
    cout<<"Enter your sex (m)ale/(f)emale): ";
    cin>>sex;
    cout<<"Enter your weight in pounds: ";
    cin>>weight;
    cout<<"Enter your hight in inchess: ";
    cin>>hight;
    cout<<"Enter your age in years: ";
    cin>>age;
    if (tolower(sex)=='m')
    {
        int choco = bmr_men(hight,weight,age)/230;
        cout<<"you cxan take "<<choco<<" chocolates according to your hight, weight and age."<<endl;
    }
    if(tolower(sex=='f')){
        int choco = bmr_women(hight,weight,age)/230;
        cout<<"you cxan take "<<choco<<" chocolates according to your hight, weight and age."<<endl;

    }
    
    return 0;
}
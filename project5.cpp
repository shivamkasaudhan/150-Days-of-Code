// An employee is paid at a rate of $16.78 per hour for the first 40 hours
// worked in a week. Any hours over that are paid at the overtime rate of oneand-one-half
// times that. From the worker’s gross pay, 6% is withheld for
// Social Security tax, 14% is withheld for federal income tax, 5% is withheld
// for state income tax, and $10 per week is withheld for union dues. If the
// worker has three or more dependents, then an additional $35 is withheld
// to cover the extra cost of health insurance beyond what the employer pays.
// Write a program that will read in the number of hours worked in a week
// and the number of dependents as input and will then output the worker’s
// gross pay, each withholding amount, and the net take-home pay for the
// week. For a harder version, write your program so that it allows the calculation
// to be repeated as often as the user wishes. If this is a class exercise, ask
// your instructor whether you should do this harder version.
#include <iostream>
using namespace std;
double salery(int h,  double r)
{
    double salery; 
    if (h > 40)
    {
        salery= 40 * r + (h - 40) * r * 1.5 ;
        // cout << "workers gross pay = " << salery;

    }
    else
    {
        salery = h * r;
        // cout << "Workers gross pay = " << salery;
    }
    return salery;
}
int main()
{
    int hour, depend;
    const double rate = 16.78;
    char more;
    do
    {
        cout << "How many hour emplyee worked in a week:  ";
        cin >> hour;
        cout << "How many dependents on worker: ";
        cin >> depend;
        cout<<"Gross Pay out= "<<salery(hour,rate)<<endl;
        double security,fedral,state;
        security= salery(hour,rate)*0.06;
        fedral= salery(hour,rate)*0.14;
        state =salery(hour,rate)*0.05;
        cout<<"Sequrity tax= "<<security<<endl;
        cout<<"Fedral income tax= "<<fedral<<endl;
        cout<<"State income tax= "<<state<<endl;
        int health;
        if (depend<=3)
        {
            health = 35;
        }else{
            health=0;
        }
        double net_sal= salery(hour,rate) - (security+fedral+state+health+10);
        cout<<"Net salery= "<<net_sal<<endl;
        cout<<"do you want to continue? y/n: ";
        cin>>more;

    } while (tolower(more) == 'y');

    return 0;
}
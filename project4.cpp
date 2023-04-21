// Write a program that determines whether a meeting room is in violation
// of fire law regulations regarding the maximum room capacity. The program
// will read in the maximum room capacity and the number of people
// attending the meeting. If the number of people is less than or equal to the
// maximum room capacity, the program announces that it is legal to hold
// the meeting and tells how many additional people may legally attend. If
// the number of people exceeds the maximum room capacity, the program
// announces that the meeting cannot be held as planned due to fire regulations
// and tells how many people must be excluded in order to meet the
// fire regulations. For a harder version, write your program so that it allows
// the calculation to be repeated as often as the user wishes. If this is a class
// exercise, ask your instructor whether you should do this harder version.
#include <iostream>
using namespace std;
int main()
{
    int capacity, attendees;
    char more;
    do
    {
        cout<<"Enter the room capacity: ";
        cin>>capacity;
        cout<<"Enter the no of atendees: ";
        cin>>attendees;
        int diff =capacity- attendees;
        if (diff<0)
        {
            cout<<"The meeting can't be held because "<<(-1*diff)<<" attendees are more than capacity."<<endl;
        }else{
            cout<<"The meeting can be held and "<<diff<<" more attendees can join the meeting."<<endl;
        }
        cout<<"Do you want to continue: y/n: ";
        cin>>more;
        
    } while (tolower(more) == 'y');

    return 0;
}
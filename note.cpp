#include<iostream>
using namespace std;
int main()
{
	int amount;
	int n_1,n_2,n_5,n_20,n_50,n_100;
	n_1 = n_2 = n_5  = n_20 = n_50 = n_100 =0;
	cin>>amount;
	switch(amount >=100)
	{
		case 1:
			n_100 = amount/100;
        	amount -= n_100 * 100;
        break;
	}
	switch(amount >=50)
	{
		case 1:
			n_50 = amount/50;
        	amount -= n_50 * 50;
	}
	switch(amount >=20)
	{
		case 1:
			n_20 = amount/20;
        	amount -= n_20 * 20;
        break;
	}
	switch(amount >=1)
	{
		case 1:
			n_1 = amount/1;
        	amount -= n_1 * 1;
        break;
	}
    cout << "100 rupees note = " << n_100 <<endl;
    cout << "50 rupees note = " << n_50 <<endl;
    cout << "20 rupees note = " << n_20 <<endl;
    cout << "1 rupee note = " << n_1 <<endl;
}
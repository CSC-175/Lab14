#include <iostream>
#include "../lab14.cpp"
using namespace std;

int main()
{
    char again; //variable that holds users decision to try again
    string denomination; //variable that will hold face value names
    int chg; //variable that holds the current amount to be counted back
    int num; //variable that holds the number of each denomination
	
	chg = 1287;

	while (chg > 0) //loop that repeats until chg equals zero
	{
		countBack(denomination, num, chg); //function call to convert chg to coins
		cout << num << denomination << ", "; //output of the number of each denomination
	}


    return 0;
}


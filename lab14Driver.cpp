#include <iostream>
#include "./lab14.cpp"
using namespace std;


int main()
{
    char again; //variable that holds users decision to try again
    string denomination; //variable that will hold face value names
    int num; //variable that holds the number of each denomination
    double dollarAmount; //dollar amount entered by the user to count back as change

    do //start of loop to covert another amount
    {
        cout << "\nEnter an amount to count back $";
        cin >> dollarAmount;
        cout << endl;
        while (dollarAmount > 0) //oop that repeats until dollarAmount equals zero
        {
            countBack(denomination, num, dollarAmount); //function call to convert dollarAmount to denominations of change
            cout << num << denomination << endl; //output of the number of each denomination
        }
        cout<<"\n\nWant to try another amount? (y/n): "; //prompt for user to repeat conversion
        cin >> again;
    } while(again=='y' or again=='Y');

    cout << "\nThanks for using the currency count back calculator!\n";

    return 0;
}

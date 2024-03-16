#include <string>
using namespace std;

void countBack(string &den, int &n, int &amount_left)
{
    //string cent = "25¢" ;
	if (amount_left>=10000)
    {
        den =" $100 bill(s)";
        n = amount_left / 10000;
        amount_left = amount_left  % 10000;
    }
    else if (amount_left>=5000)
    {
        den =" $50 bill(s)";
        n = amount_left / 5000;
        amount_left = amount_left % 5000;
    }
    else if (amount_left>=2000)
    {
        den =" $20 bill(s)";
        n = amount_left / 2000;
        amount_left = amount_left % 2000;
    }
    else if (amount_left>=1000)
    {
        den =" $10 bill(s)";
        n = amount_left / 1000;
        amount_left = amount_left % 1000;
    }
    else if (amount_left>=500)
    {
        den =" $5 bill(s)";
        n = amount_left / 500;
        amount_left = amount_left % 500;
    }
    else if (amount_left>=100)
    {
        den =" $1 bill(s)";
        n = amount_left / 100;
        amount_left = amount_left % 100;
    }
    else if (amount_left>=25)
    {
        den =" quarter(s)";
        n = amount_left / 25;
        amount_left = amount_left % 25;
    }
    else if (amount_left>=10)
    {
        den =" dime(s)";
        n = amount_left / 10;
        amount_left = amount_left % 10;
    }
    else if (amount_left>=5)
    {
        den =" nickel(s)";
        n = amount_left / 5;
        amount_left = amount_left % 5;
    }
    else
    {
        den =" penny(ies)";
        n = amount_left / 1;
        amount_left = amount_left % 1;
    }
}

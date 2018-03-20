#include <iostream>


using namespace std;

void numbers(ostream& outs, const string& prefix, unsigned int levels);
void pattern(ostream& outs, unsigned int n, unsigned int i);

int main()
{
	cout << "Testing Numbers() Function" << endl;
	string str = "THERBLIG";
	int levels = 2;
	numbers(cout, str, levels);
	cout << "Testing Pattern() Function" << endl;
	pattern(cout, 8, 0);
	return 0;
}


void numbers(ostream& outs, const string& prefix, unsigned int levels)
{
	string s;
	if(levels == 0)
	{
		outs << prefix << endl;
	}
	else
	{
	for(int i = 1; i < 10; i++)
	{
	s = prefix + to_string(i) + '.';
	numbers(outs, s, levels-1);
	}
	}
}


// Precondition: n is a power of 2 greater than zero.
/* Postcondition: A pattern based on the above example has been
printed to the ostream outs. The longest line of the pattern has
n stars beginning in column i of the output. For example,
The above pattern is produced by the call pattern(cout, 8, 0).   */

void pattern(ostream& outs, unsigned int n, unsigned int i)
{
	if(n == 0)
	{
		outs << "*" << endl;
	}
	else if(n == 1)
	{
		// A loop to print exactly i spaces
		for(int k = 0; k < i; k++)
		{ 
			outs << "  ";
		}
		// A loop to print n asterisks, each one followed by a space
		for(int k = 0; k < n; k++) 
		{
			outs << "*" << " ";
		}
		cout << endl;
	}
	else
	{
	    pattern(outs, n/2, i);
		// A loop to print exactly i spaces
		for(int k = 0; k < i; k++)
		{
			outs << "  ";
		}
		// A loop to print n asterisks, each one followed by a space
		for(int k = 0; k < n; k++) 
		{
			outs << "*" << " ";
		}
		outs << endl;
		pattern(outs, n/2, (n/2)+i);		
	}
}





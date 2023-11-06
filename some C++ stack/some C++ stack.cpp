#include <stack>
#include <iostream>
using namespace std;

int main()
{
	stack <string> pancakes;
	string cakes;

	

	while(cakes != "0")
	{
		cout << "Add pancake flavor" << endl;
		cin >> cakes;
		
		if (cakes != "0")
		{
			pancakes.push(cakes);
		}
		cout << endl << endl;
		cout << "Its size is now: " << pancakes.size() << endl;
	}
	

}
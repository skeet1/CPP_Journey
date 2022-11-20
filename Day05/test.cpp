#include <exception>
#include <iostream>

using namespace std;
int main()
{
	string s;
	while (1)
	{
		cin >> s;
		try {
			if (s == "NO")
				throw (exception());
		}
		catch (exception){
			cout << "Error\n";
			return 0;
		}
	}
	return 0;
}

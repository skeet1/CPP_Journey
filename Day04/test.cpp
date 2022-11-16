#include <iostream>

using namespace std;

class Hello {
	private:
		int a, b, *ptr;
	public:
		Hello(int fv, int sv, int thv): a(fv), b(sv) {
			ptr = new int;
			*ptr = thv;
		};
		void print()
		{
			cout << "a is : " << a << " and the address is : " << &a << endl;
			cout << "b is : " << b << " and the address is : " << &b << endl;
			cout << "ptr is : " << *ptr << " the address is : " << ptr << endl;
		}
};

int main()
{
	Hello obj1(10, 20, 50);

	Hello obj2 = obj1;

	cout << "first obj\n";
	obj1.print();
	cout << "scnd obj\n";
	obj2.print();
	return (0);
}

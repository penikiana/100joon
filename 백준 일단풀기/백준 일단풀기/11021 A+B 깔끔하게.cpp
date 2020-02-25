#include <iostream>

using namespace std;

int main()
{
	int testcase, A, B;
	cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{
		cin >> A >> B;
		cout << "Case #" << i + 1 << ":" << A + B << endl;
	}
}
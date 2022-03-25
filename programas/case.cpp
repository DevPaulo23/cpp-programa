#include <iostream>

using namespace std;

int main()
{
	char _meta;
	int _loop;
	cout << "Switch em linguagem C++ exemplo!\n" << endl;
	while (_loop)
	{
		scanf("%s", &_meta);
		switch (_meta)
		{
		case '1':
			cout << "teste numero 1\n";
			break;

		case '2':
			cout << "teste numero 2\n";
			break;

		case '3':
			cout << "teste numero 3\n";
			break;
		}
	}
	return 0;
}


#include <iostream>

using namespace std;

int main() {
	int t;
	string str;
	
	cin >> t;
	cin.ignore();
	
	while (t--) {
		cin >> str;
		
		if (str.size() == 20) {
			if (str[0] == 'R' && str[1] == 'A') {
				int i = 2;
				
				while (str[i] == '0') i++;
				
				for (i; i < str.size(); i++)
					cout << str[i];
				cout << '\n';
			}
			else 
				cout << "INVALID DATA\n";
		}
		else
			cout << "INVALID DATA\n";
		
	}
	return 0;
}
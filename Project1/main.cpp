#include <iostream>

using namespace std;

int main() {
	int i = 2;

	while (i < 10) {
		int j = 1;
		while (j < 10) {
			cout << i << " X " << j << " = " << i * j << '\t';

			j++;
		}
		cout << endl;
		i++;
	}
	
	return 0;
}
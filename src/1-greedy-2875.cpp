#include <bits/stdc++.h> 
using namespace std;

// female ���� �ٿ��� �� ��ü �� ������ �پ��ٸ� 0�� ��ȯ
int check_minus(int female, int male) {
	if ((female-1) / 2 < male) {
		return 0;
	}
	else {
		return 1;
	}
}

int main() {
	int female, male, intern;
	cin >> female >> male >> intern;

	for (int i = 1; i <= intern; i++) {
		if (check_minus(female, male) >= 1) {
			female--;
		}
		else{
			male--;
		}
	}

	if (male * 2 >= female) {
		cout << female / 2;
	}
	else {
		cout << male;
	}

	return 0;
}

#include<bits/stdc++.h>
using namespace std;

const int MAX = 100 + 1;



int N, K;

int inputv[MAX], plugv[MAX];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin ����ӵ� ���

	int input, plug, count;
	cin >> plug >> count;

	int sum = 0;

	for (int i = 0; i < count; i++) {
		cin >> input;
		inputv[i] = input;
	}

	bool success = false;
	memset(plugv, 0, sizeof(plugv));

	for (int i = 0; i < count; i++) {
		success = false;
		
		for (int k = 0; k < plug; k++) {
			if (plugv[k] == inputv[i]) {
				success = true;
				break;
			}
		}

		// �� �ȾҴٸ� �״�� Ż��
		if (success) {
			continue;
		}

		// �÷��װ� ��� �ִ��� ����
		for (int k = 0; k < plug; k++) {
			// ����Ϸ��� ���� �̹� �����ִ��� Ȯ��
			if (!plugv[k]) {
				plugv[k] = inputv[i];
				success = true;
				break;
			}
		}

		// �� �ȾҴٸ� �״�� Ż��
		if (success) {
			continue;
		}

		// ������� �ʴٸ�, ���� �÷��׿� �����ִ� �� �� 
		// ������ �Ⱦ��̰ų� or �� ���ʿ��� ���� ���� �̴´�.
		int maxv = -1;
		int unplugged_plug;
		for (int k = 0; k < plug; k++) {
			int temp = 0;
			for (int j = i+1; j < count; j++) {
				if (plugv[k] == inputv[j])
					break;
				temp++;

			}
			if (maxv < temp) {
				maxv = temp;
				unplugged_plug = k;
			}
		}

		sum++;
		plugv[unplugged_plug] = inputv[i];
	}

	cout << sum << '\n';

	return 0;
}

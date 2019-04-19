#include<bits/stdc++.h>
using namespace std;

const int MAX = 100 + 1;



int N, K;

int inputv[MAX], plugv[MAX];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); //cin 실행속도 향상

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

		// 잘 꽂았다면 그대로 탈출
		if (success) {
			continue;
		}

		// 플러그가 비어 있는지 조사
		for (int k = 0; k < plug; k++) {
			// 사용하려는 것이 이미 꽂혀있는지 확인
			if (!plugv[k]) {
				plugv[k] = inputv[i];
				success = true;
				break;
			}
		}

		// 잘 꽂았다면 그대로 탈출
		if (success) {
			continue;
		}

		// 비어있지 않다면, 현재 플러그에 꽂혀있는 것 중 
		// 앞으로 안쓰이거나 or 더 뒤쪽에서 쓰일 것을 뽑는다.
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

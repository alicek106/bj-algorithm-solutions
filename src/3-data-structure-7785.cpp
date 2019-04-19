#include<bits/stdc++.h>
using namespace std;

int main() {
	map<string, bool, std::greater<string> > people;

	int num;
	cin >> num;
	
	for (int i = 0; i < num; i++) {
		string name, status;
		cin >> name >> status;
		if (status == "enter") {
			people[name] = "true";
		}
		else {
			people.erase(name);
		}
	}

	map<string, bool>::iterator itor = people.begin();
	for (itor; itor != people.end(); itor++) {
		cout << itor->first << '\n';
	}
	return 0;
}

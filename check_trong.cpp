#include<bits/stdc++.h>

using namespace std;

void Count(int s,int t) {
    queue<int> q;
	q.push(s);
	int count = 0;
	while(!q.empty()) {
		int tmp = q.front();
		q.pop();
		if(tmp == t) {
			cout << count << endl;
			return;
		}
		if(tmp - 1 == t || tmp * 2 == t) {
			cout << count + 1 << endl;
			return;
		}
		else if(tmp * 2 <t) {
			q.push(tmp * 2);
			count++;
		} 
		else {
			q.push(tmp - 1);
			count++;
		}
	}
}

int main() {
	int T;
	cin >> T;
	while(T--) {
		int s,t;
		cin >> s >> t;
		Count(s,t);
	}
}
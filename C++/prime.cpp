#include <bits/stdc++.h>
using namespace std;

int isprm(int n)
{

	if (n <= 1) 
		return 0;
	
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
	}

	return 1;
}
int countprime(int start, int n)
{

	vector<int> primevector;

	for (int i = start; i <= n; i++) {

		if (isprm(i) == 1) {
			primevector.push_back(i);
		}
	}
	int sum = primevector[0];
	int num = 0, ans = 0, length=primevector.size(), count = 0, allcount = 0;
	for(int j = 0; j <= primevector.size(); j++) {
		for(int i = j; i < primevector.size(); i++) {
			num += primevector.at(i);
			count++;
			if(isprm(num) == 1 && num <= n && count >= allcount) {
				ans = num;
				allcount = count;
			}
		}
		count = 0;
		num = 0;
	}
		
	return ans;
}

int main()
{
    int start, N;
    cout << "MIN: ";
    cin >> start;
    cout << "MAX: ";
	cin >> N;
	cout << countprime(start, N);

	return 0;
}





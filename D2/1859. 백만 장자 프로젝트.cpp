#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{

		/////////////////////////////////////////////////////////////////////////////////////////////

		int n;
		cin >> n;

		//unsigned char data[1000000]; // STACK 1MB 이하로 맞추기위해
		vector<int> data;
		for (int i = 0; i < n; i++) {
			int tmp;
			cin >> tmp;
			data.push_back(tmp);
		}

		long long int res = 0;
		int sell = data[data.size() - 1];
		for (int i = n - 1; i >= 0; i--) {
			if ((int)data[i] > sell) {
				sell = data[i];
			}
			else {
				res += sell - data[i];
			}
		}

		cout << "#" << test_case << " " << res << endl;

		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
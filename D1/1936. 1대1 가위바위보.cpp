#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    /////////////////////////////////////////////////////////////////////////////////////////////
    
    int a, b;
    cin >> a >> b;
    
    int who_win[4] = {0, 2, 3, 1};
    
    if(who_win[a] == b) {
        cout << "B" << endl;
    } else if(who_win[b] == a) {
        cout << "A" << endl;
    }
    
    /////////////////////////////////////////////////////////////////////////////////////////////
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
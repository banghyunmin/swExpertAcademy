#include<iostream>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
    /////////////////////////////////////////////////////////////////////////////////////////////
    
    string input;
    cin >> input;
    
    for(int i = 0; i < input.length(); i++) {
        if('a' <= input[i] && input[i] <= 'z') {
            cout << char(input[i] - 'a' + 'A');
        } else {
            cout << input[i];
        }
    }
    cout << endl;
    
    /////////////////////////////////////////////////////////////////////////////////////////////
    
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
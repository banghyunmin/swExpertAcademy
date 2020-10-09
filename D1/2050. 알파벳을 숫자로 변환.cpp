#include<iostream>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
    /////////////////////////////////////////////////////////////////////////////////////////////
    
    string input;
    cin >> input;
    
    for(int i = 0; i < input.length(); i++) {
        if('A' <= input[i] && input[i] <= 'Z') {
        	cout << input[i] - 'A' + 1 << " ";
        } else {
        	cout << input[i] - 'a' + 1 << " ";
        }
    }
    
    /////////////////////////////////////////////////////////////////////////////////////////////
    
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
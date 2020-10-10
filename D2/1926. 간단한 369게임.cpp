
#include<iostream>

using namespace std;

int chk(int n) {
    int res = 0;
    for(int i = 0; n > 0; i++) {
        int tmp;
        tmp = n % 10;
        n /= 10;
        
        if(tmp && tmp % 3 == 0) {
            res++;
        }
    }
    
    return res;
}

int main(int argc, char** argv)
{
    /////////////////////////////////////////////////////////////////////////////////////////////
    
    int n;
    cin >> n;
    
    for(int i = 1; i <=n; i++) {
        if(chk(i)) {
            for(int j = 0; j < chk(i); j++) {
                cout << "-";
            }cout << " ";
        } else {
            cout << i << " ";
        }
    }
    
    /////////////////////////////////////////////////////////////////////////////////////////////
    
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
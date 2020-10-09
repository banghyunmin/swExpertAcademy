#include<iostream>
 
using namespace std;
 
int main(int argc, char** argv)
{
    /////////////////////////////////////////////////////////////////////////////////////////////
     
    int arr[200];
    int n;
 
    cin >> n;
    for(int i = 0; i <= n; i++) {
        cin >> arr[i];
    }
 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i] < arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
 
    cout << arr[n/2] << endl;
         
    /////////////////////////////////////////////////////////////////////////////////////////////
     
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
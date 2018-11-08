#include <bits/stdc++.h>
using namespace std;

int lenOfLongestSubArray(long arr[], long n)
{
    long max = 1, len = 1;

    for(long i = 1; i<n; i++){
        if(arr[i] >= arr[i-1]){
            len++;
        }
        else{
            if(max < len){
                max = len;

                len = 1;
            }
        }
    }

    if(max < len){
        max = len;
    }

    return max;
}

int main(){
    long *arr, n;

    cin >> n;
    arr = new long[n];

    for (long i = 0; i<n; i++){
        cin >> arr[i];
    }

    cout << lenOfLongestSubArray(arr, n) << endl;

    return 0;
}
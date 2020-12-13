//problem statement - http://codeforces.com/problemset/problem/158/A

#include <iostream>
using namespace std;

int main(){
	int n, place, *arr, i, count = 0;

	cout << "Enter the number of elements: " << endl;
	cin >> n >> place;

	arr = (int *)malloc(sizeof(int) * n);

	cout << "Enter the elements of the array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i=0; i<n; i++){
    	if (arr[i] >= arr[place-1]){
    		count ++;
    	}
    }

    cout << count << endl;

    free(arr);
}
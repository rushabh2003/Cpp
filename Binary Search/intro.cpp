#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid]==key){
            return mid;
        }
        else{
            if(key > arr[mid]){
                start = mid + 1; 
            }
            else{
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
    }
    return -1;
}
int main(){
    int evenarr[8] = {2, 3, 4, 7, 9, 14, 19, 22};
    int oddarr[7] = {3, 5, 11, 24, 27, 30, 34};
    int t; cin >> t;
    while(t--){
        int key1, key2; cin >> key1 >> key2;

        int evenindex = binarysearch(evenarr, 8, key1);
        int oddindex = binarysearch(oddarr, 7, key2);

        cout << "Index of " << key1 << " :" << evenindex << endl;
        cout << "Index of " << key2 << " :" << oddindex << endl;
    }
    return 0;
}


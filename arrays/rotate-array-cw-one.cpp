#include<iostream>
#include<vector>

int main(){
    std::vector <int> arr = {9, 8, 7, 6, 4, 2, 1, 3};
    int size = arr.size();
    int temp = arr[size - 1];
        
    for(int i = size - 2; i >= 0; --i){
        arr[i+1] = arr[i];
    }
        
    arr[0] = temp;
    std::cout<<arr[0];
    return 0;
}
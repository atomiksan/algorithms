#include <climits>
#include<iostream>

int main(){
    int arr[10] = {10,5,9,2,6,3,7,1,8,4};
    int max = INT_MIN;
    int second_max = INT_MIN;
    for(int i = 0; i < 10; ++i){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    for (int i = 0; i < 10; ++i) {
        if(max != arr[i] && second_max < arr[i]){
            second_max = arr[i];
        }
    }
    std::cout<<"max value is "<<max<<"\n";
    std::cout<<"second max is "<<second_max;

}
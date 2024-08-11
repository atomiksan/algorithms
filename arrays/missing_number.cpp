#include <iostream>

int main(){
    int arr[9] = {1,3,4,5,6,7,8,9,10};
    int sum_of_array = 0; 
    
    int total_sum = 10*(10+1)/2;
    for (int i = 0; i < 9; ++i) {
        sum_of_array += arr[i];
    }
    std::cout<<"missing number is "<<(total_sum-sum_of_array);

}
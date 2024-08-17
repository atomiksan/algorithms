#include<iostream>
#include<vector>

void
input(std::vector<int> &v, int n)
{
    std::cout<<"\nEnter the array elements: ";
    for(int i = 0; i < n; ++i){
        int temp;
        std::cin>>temp;
        v.emplace_back(temp);
    }

}
void
sort(std::vector<int> &v, int n){
    for (int j = 0; j < n-1; ++j) {
        int index = j;
        for (int i = j+1; i < n; ++i) {
            if(v[i] < v[index]){
                index = i;
            }
        }
        std::swap(v[j],v[index]);
    }
}

int
main()
{
    int n;
    std::cout<<"Enter the number of elements: ";
    std::cin>>n;
    std::vector <int> v;
    input(v, n);
    sort(v, n);
    std::cout<<"\nSorted array is: ";
    for (auto a : v) {
        std::cout<<a<<" ";
    }
    return 0;
}
#include <iostream>
#include <utility>
using namespace std;

pair<int, int> findTarget(int array[], int size, int target);
int main(){
    int nums[]={2,7,11,15};
    int size{sizeof(nums)/sizeof(nums[0])};
    int target {17};

    pair<int, int> result= findTarget(nums, size, target);
    int a{result.first};
    int b{result.second};
    if(result.first != -1){
        cout<<"The indeces that add up to "<<target<<" are "<<a<<" and "<<b <<'\n';
    }else{
        cout<<"No indeces add up to "<<target<<'\n';
    }
    
    return 0;
}
pair<int, int> findTarget(int array[], int size, int target){
    int counter{};
    for(int i=0; i<size;i++){
        for(int j=i+1; j<size;j++){
            if(array[i]+array[j]==target){
                return make_pair(i, j);
            }
        }
    }
    return make_pair(-1,-1);
}
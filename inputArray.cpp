#include <iostream>
using namespace std;

int main(){
    string destinations[5];
    string input;
    int entered= 0;
    int size= sizeof(destinations)/sizeof(destinations[0]);
    cout<<"If you want to quit press 'q' "<<endl;
    cout<<"**************************************"<<endl;
    cout<<"Name 5 destinations: "<<endl;
    
    for (int i=0; i<size; i++){
        getline(cin, input);
        if(input=="q"){
            break;
        }else{
            destinations[entered++]=input;
        }
    }
    cout<<"*************************************"<<endl;

    cout<<"     TOP "<<entered<<" Destinations"<<endl;
    for(int i=0; i < entered; i++){
        cout<<i+1<<'.'<< destinations[i]<<endl;
    }

    return 0;
}
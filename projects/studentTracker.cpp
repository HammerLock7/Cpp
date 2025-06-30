#include <iostream>
using namespace std;

double semester1();
double semester2(string modules[], int size);
double exam(string modules[], int size);
double final(string modules[], int size);
int main(){
    string modules[]={"WTW 158", "JSU 110", "JPO 110", "CHM 171", "JPO 111", "JPO 116"};
    double sem1[6];
    double sem2[6];
    double exams[2];
    double finalMark[6];
    size_t size= modules->size();
    int answer;
    int counter{};
    cout<<"For which module do you want to check: \n";
    for(string module : modules){
        counter++;
        cout<<counter<<". "<<module<<'\n';
    }
    cout<<"7. Exit\n";
    do
    {
        cin>> answer;
        double results;
        switch (answer)
        {
        case 1:
            cout<<"******************************WTW 158**************************\n";
            results = semester1();
            cout<<answer<<'\n';
            sem1[answer-1]=results;
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        default:
            break;
        }
        
    } while (answer !=7);
    

    return 0;
}

double semester1(){
    double sem1;
    cout<<"Enter your semester 1 mark: ";
    cin>>sem1;
    return sem1;
}

double semester2(string modules[], int size){

}

double exam(string modules[], int size){

}

double final(string modules[], int size){

}
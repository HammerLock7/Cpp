// add, delete and view items on the todo list
#include <iostream>
using namespace std;

void view(string list[], size_t size);
void add(string list[], size_t size);
void remove(string list[], size_t size);
int main(){
    size_t size{10};
    string list[size]={"Wash Hair", "Go to school"} ;
    cout<<list[0];
    int answer;
    
    cout<<"********************To-Do List********************\n";
    do
    {
        cout<<"What do you want to do\n";
        cout<<"1. View\n";
        cout<<"2. Add\n";
        cout<<"3. Delete\n";
        cout<<"4. Exit\n";
        cin>>answer;

        std::cin.clear();
        fflush(stdin);

        switch (answer)
            {
            case 1:
                view(list, size);
                break;
            case 2:
                view(list, size);
                add(list, size);
                break;
            case 3:
                view(list, size);
                remove(list, size);
                break;
            case 4:
                cout<<"Thank you for visiting\n";
                break;
            default:
                cout<<"Invalid Option. Please try again.\n";
                break;
            }
        cout<<"***********************************************";
        cout<<'\n'<<'\n';
    } while (answer != 4);

    

    return 0;
}
// A function to view the current to do list
void view(string list[], size_t size){
    cout<<'\n'<<'\n';
    cout<<"******************Things to do*******************\n";
     for(int j{}; j<size; j++){// we are printing the current list before we add any events
        if (!list[j].empty()){
            cout<<j+1.<<" "<<list[j]<<'\n';
        }
    }
}

// Add function
void add(string list[], size_t size){
    string input;// to store user input until we verify that it is not equal to "q"
    cout<<"Enter your list of things todo to quit hit 'q'\n";
    for (size_t i{}; i<size; i++){
        if(list[i].empty()== 1){
            getline(cin, input);
            if (input =="q"){
                break;
            }else{
                list[i]=input;
            }
        }
    }
    cout<<'\n'<<'\n';
    cout<<"******************Things to do*********************\n";
    for(int j{}; j<size; j++){//display the list after adding events
        if (!list[j].empty()){
            cout<<(j+1)<<" "<<list[j]<<'\n';
        }
    }
}

//A function to remove items from the to do list
void remove(string list[], size_t size) {
    int remItem;
    cout << "Which item do you want to remove? (Enter number): ";
    cin >> remItem;

    if (remItem < 1 || remItem > static_cast<int>(size) || list[remItem - 1].empty()) {
        cout << "Invalid item number.\n";
        return;
    }

    list[remItem - 1].clear();

    // Shift items up
    for (size_t i = remItem - 1; i < size - 1; ++i) {
        list[i] = list[i + 1];
    }
    list[size - 1].clear(); // Clear the last slot

    view(list, size);
}
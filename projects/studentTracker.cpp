#include <iostream>
using namespace std;

double semester1();// A function to change or add semester 1 marks for a chosen module
double semester2();//A function to change or add semester 2 marks for a chosen module
double exam();//A function to change or add Exam marks for a chosen module
double final(string modules[], double sem1[],double sem2[], double exams[], size_t size);//A function to calculate the final mark of all modules based on semester1,semester1 and exam marks
void view(string modules[], double finalMark[], size_t size);
int main(){
    string modules[]={"WTW 158", "JSU 110", "JPO 110", "CHM 171", "JPO 111", "JPO 116"};// An array that will capture all the modules we are doing
    double sem1[6];// An array to record semester 1 marks in
    double sem2[6];// Array for semester 2 marks
    double exams[2];// Array for exam marks
    double finalMark[6];// Array for final marks
    size_t size= sizeof(modules)/sizeof(modules[0]);// size for the modules im doing 
    int answer;
    int counter{};
    cout<<"For which module do you want to check: \n";

    do
    {
        for(string module : modules){
        counter++;
        cout<<counter<<". "<<module<<'\n';
        }
        cout<<"7. View\n";
        cout<<"8. Exit\n";
        counter=0;

        cin>> answer;
        double results;
        switch (answer)
        {
        case 1:
            cout<<"******************************WTW 158*******************************\n";
            results = semester1();
            sem1[answer-1]=results;

            results = semester2();
            sem2[answer-1]=results;

            results = exam();
            exams[answer-1]=results;

            results = final(modules, sem1, sem2, exams, answer-1);
            finalMark[answer-1]=results;
            break;

        case 2:
            cout<<"******************************JSU 110*********************************\n";
             results = semester1();
            sem1[answer-1]=results;

            results = semester2();
            sem2[answer-1]=results;

            results = final(modules, sem1, sem2, exams, answer-1);
            finalMark[answer-1]=results;
            break;
        case 3:
            cout<<"******************************JPO 110*********************************\n";
             results = semester1();
            sem1[answer-1]=results;

            results = semester2();
            sem2[answer-1]=results;

            results = final(modules, sem1, sem2, exams, answer-1);
            finalMark[answer-1]=results;
            break;

        case 4:
            cout<<"******************************CHM 171*********************************\n";   
             results = semester1();
            sem1[answer-1]=results;

            results = semester2();
            sem2[answer-1]=results;

            results = exam();
            exams[answer-1]=results;

            results = final(modules, sem1, sem2, exams, answer-1);
            finalMark[answer-1]=results;
            break;

        case 5:
            cout<<"******************************JPO 111*********************************\n";
             results = semester1();
            sem1[answer-1]=results;

            results = semester2();
            sem2[answer-1]=results;

            results = final(modules, sem1, sem2, exams, answer-1);
            finalMark[answer-1]=results;
            break;

        case 6:
            cout<<"******************************JPO 116*********************************\n";
             results = semester1();
            sem1[answer-1]=results;

            results = semester2();
            sem2[answer-1]=results;

            results = final(modules, sem1, sem2, exams, answer-1);
            finalMark[answer-1]=results;
            break;

        case 7:
        view(modules, finalMark, size);
            break;
        case 8:
            cout<<"Thank you for visiting us!\n";
            break;
        default:
            break;
        }
        
    } while (answer !=8);

    return 0;
}

double semester1(){
    double sem1;
    cout<<"Enter your semester 1 mark: ";
    cin>>sem1;
    return sem1;
}

double semester2(){
    double sem2;
    cout<<"Enter your semester 2 mark: ";
    cin>>sem2;
    return sem2;
}

double exam(){
    double exam;
    cout<<"Enter your exam mark: ";
    cin>>exam;
    return exam;
}

double final(string modules[], double sem1[], double sem2[], double exams[], size_t size) {
    double total = 0.0;

        if(modules[size]=="WTW 158" || modules[size]=="CHM 171"){
            // - sem1 contributes 25%
            // - sem2 contributes 25%
            // - exam contributes 50s%
            total+= (0.25 * sem1[size]) + (0.25 * sem2[size]) + (0.5 * exams[size]);
            
        }else{
            total+= (0.5*sem1[size])+(0.5*sem2[size]);
        }
        return total;
    }
    

void view(string modules[], double finalMark[], size_t size){
    cout<<"********************************************FInal Results********************************************\n";
    for(size_t i{}; i<size; i++){
        cout<<(i+1)<<". "<<modules[i]<<": "<<finalMark[i]<<'\n';
    }

    cout<<"****************************************************************************************************\n";
}

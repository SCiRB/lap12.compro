#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    char grade;
    int i;
    srand(time(0));
    i = rand()%9+1;
    if(i==1){grade = 'A';}
    if(i==2){grade = 'B';}
    if(i==3){grade = 'B';}
    if(i==4){grade = 'C';}
    if(i==5){grade = 'C';}
    if(i==6){grade = 'D';}
    if(i==7){grade = 'D';}
    if(i==8){grade = 'F';}
    if(i==9){grade = 'W';}
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get " << grade;
    if (i == 2||i == 4||i == 6){
        cout << "+";
    }
    cout << " in this 261102.";
    return 0;
}
#include <iostream>
using namespace std;
static void compare(int &counter, char *pidposlidov, char *poslidov1, char *poslidov2) {
    for(int i=0;i<strlen(poslidov1);i++){
        for(int k=0;k<strlen(poslidov1);k++){
            if(poslidov1[i]==poslidov2[k]){
                pidposlidov[counter]=poslidov2[k];
                counter++;
                break;
            }
        }
    }
    if(sizeof(pidposlidov)==0) cout<<"Isn't found";
    else{
        for(int i=0;i<counter;i++){
            cout<<pidposlidov[i];
        }
    }
}

int main(){
    char poslidov1[100];
    char poslidov2[100];
    char pidposlidov[100];
    int counter=0;
    cout<<"Enter the first poslidovnist:";
    cin>>poslidov1;
    cout<<"Enter the second poslidovnist:";
    cin>>poslidov2;
    if(strlen(poslidov1)>=strlen(poslidov2)){
        compare(counter, pidposlidov, poslidov1, poslidov2);
    }
    if(strlen(poslidov1)<strlen(poslidov2)){
        compare(counter, pidposlidov, poslidov2, poslidov1);
    }
    return 0;
}

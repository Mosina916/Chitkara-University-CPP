#include <iostream>
#include<cstring>
using namespace std;
int length(char *arr){
    int i=0;
    int co=0;
    while(arr[i]!='\0'){
        co++;
        i++;
    }

    return i;



}
int main() {

    // int n;
    // cin>>n;//10
    // char arr[100];
    // // cin.ignore();// ignores a character
    // cin.get();

    // cin.getline(arr,100);

    // cout<<n<<endl;
    // cout<<arr<<endl;


    char arr[1000];
    cin.getline(arr,100);
    cout<<"length of string is "<<length(arr)<<endl;
    return 0;
 
}

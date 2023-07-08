
#include<iostream>
using namespace std;

int uniqueElement(int arr[],int n){
    int answer=0;

    for(int i=0;i<n;i++){
        answer=answer^arr[i];
    }
    return answer;
}

int main(){

int arr[7]={1,2,3,4,1,2,3};


cout<<uniqueElement(arr,7);

    return 0;
}
// //XOR GATE  means  a^a=0;0^a=a;
// //so the logic in the function works as follows 
// //int answer=0;
// //answer=answer^arr[i];
// given array[7]={1,2,3,4,1,2,3};
// answer=0^1;
// answer=1^1;
// answer=0
// like this all the double number cancel each other

// in the final answer=0^4
// answer=4
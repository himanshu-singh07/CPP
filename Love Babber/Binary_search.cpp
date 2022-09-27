#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start=0;
    int end=size-1;
    int mid=(start+(end-start)/2);
    while (start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if (key>arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+(end-start)/2);
        
    }

    return -1;

}



int main(){
    int num1[6] = {5,6,78,89,90,93};
    int num2[4] = {5,89,93,99};

    int num1Index = binarySearch(num1, 6, 86);
    int num2Index = binarySearch(num2, 4, 89);

    cout<<"Index of 89 is "<< num1Index<<endl;
    cout<<"Index of  89 is "<< num2Index<<endl;
    

}
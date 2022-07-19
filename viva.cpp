

#include<bits/stdc++.h>

using namespace std;


int calculateZ(int R , int X){

    int z ;

    z = X*X + R*R ;

}

int main(){
        
        int R;
        int X;
        cout << " give me R and Xc values"<<endl;

        

       cout << calculateZ(3,2)<<endl;
       cout << calculateZ(2,3)<<endl;

    return 0;
}


#include<iostream>
using namespace std;

int factorial(int n);

int main() {

  int n;

  cout << "Enter a positive integer: ";
  cin >> n;

  cout << "Factorial of " << n << " = " << factorial(n);

  return 0;
}

int factorial(int n) {
  if(n > 1)
    return n * factorial(n - 1);
  else
    return 1;
}




#include<bits/stdc++.h>

using namespace std;

int factorial(int n);
int main(){

    int n;
    cin>>n;


    cout << " Enter the number you want to calculate the factorial of : " <<endl;

    cout << factorial(n)<<endl;

    return 0;
}


int factorial(int n){
    if(n>1)
    return n* factorial(n-1);
    else
    return 1;
}



========================================================================================


#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}


int main() { 

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6, 6);

    cout << " Index of 6 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 14);

    cout << " Index of 14 is " << oddIndex << endl;


    return 0;
}

int findPeak(int arr[], int n) {

    int s =0, e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {
        //cout<<" s " << s <<" e " << e << endl;
        if(arr[mid] < arr[mid+1]){
            s = mid+1; 
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}



==================================================================================


#include<iostream>
using namespace std;

int getMin(int num[], int n) {

    int mini = INT_MAX;
    
    for(int i = 0; i<n; i++) {
        
        mini = min( mini, num[i]);
        
        //if(num[i] < min){
        //    min = num[i];
        //}
    }

    //returning min value
    return mini;
}

int getMax(int num[], int n) {

    int maxi = INT_MIN;
    
    for(int i = 0; i<n; i++) {

        maxi = max(maxi, num[i]);

       // if(num[i] > max){
         //   max = num[i];
       // }
    }

    //returning max value
    return maxi;
}

int main() {

    int size;
    cin >> size;

    int num[100];

    //taking input in array
    for(int i = 0; i<size; i++) {
        cin >> num[i];
    }

    cout << " Maximum value is " << getMax(num, size) << endl;
    cout << " Minimum value is " << getMin(num, size) << endl;












    return 0;
}











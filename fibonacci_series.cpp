#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    //  int limit=10;
    //  int arr[10];
    //  int n=0;
    //  arr[0]=0;
    //  arr[1]=1;
    //  cout<<arr[0]<<endl;
    //  cout<<arr[1]<<endl;
    //  for(int i=2;i<=limit;i++){
    //        n=(arr[i-1])+(arr[i-2]);
    //        cout<<n<<endl;
    //        arr[i]=n;
    //  }
     int limit=10;
    int a=0;
    int b=1;
    int c=0;
    int temp=0;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=1;i<=10;i++)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    return 0;
}
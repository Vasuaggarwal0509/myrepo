#include<iostream>
using namespace std;

int main(){
    /*int n=3;
    int*b=&n;
    cout<<*b<<endl;
    cout<<&n<<endl;*/
    // int ans;
    // while(n!=0){
        /*int digit;
         digit=n%10;
        ans=(ans*10)+digit;
        n=n/10;
    }
    cout<<ans<<endl;*/
    int marks[]={65,44,45,656};
    // marks[0]=68;
    // marks[1]=6;
    // marks[2]=8;
    // marks[3]=9;
    cout<<"A :"<<marks[0]<<endl;
    cout<<"B :"<<marks[1]<<endl;
    cout<<"C :"<<marks[2]<<endl;
    cout<<"D :"<<marks[3]<<endl;
    int i;
    for(i=0;i<=15;i++){
        cout<<"the marks of "<<i<<" "<<marks[i]<<endl;
    }
    cout<<marks[16]<<endl;
    int *p=marks;
    marks[3]=57586;
    cout<<"the value of A"<<*(p)<<endl;
    cout<<"the value of B"<<*(p+1)<<endl;
    cout<<"the value of C"<<*(p+3)<<endl;
    return 0;
}
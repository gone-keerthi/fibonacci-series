//program to generate first n terms of fibonacci sequence
#include<iostream>
using namespace std;
int main()
{
    int fn1=0, fn2=1, fn, i, num;
    cout<<"enter the number of elements: ";
    cin>>num;
    cout<<fn1<<" "<<fn2<<" "; //first two numbers of series 0 and 1 are printed
    for(i=2; i<num; i++) //excution of loop starts from 2 because first 2 numbers of series are printed
    {
        fn=fn1+fn2;  // sum of nth term equals to sum of two preceeding terms
        cout<<fn<<" ";
        fn1=fn2;
        fn2=fn;
    }
    return 0;
}
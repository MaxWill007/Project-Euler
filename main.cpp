#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long sum=0;
    for(int i=1;i<1000;i++){
        if(i%3==0 || i%5==0){
            sum+=i;
        }
    }
    cout<<sum;
}

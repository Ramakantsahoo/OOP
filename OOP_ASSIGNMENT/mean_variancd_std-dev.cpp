// Take input as no. of observations and all observations and calculate mean,variance and standard deviation
#include<iostream>
using namespace std;
class calculation{
    int n;
    float ob[100];
    float sum=0;
    float mean=0;
    float std_deviation=0;
    float variance=0;
    public:
        calculation(){
            cout<<"Enter the no. of observations: ";
            cin>>n;
            cout<<"Enter the observations: "<<endl;
            for(int i=0;i<n;i++){
                cin>>ob[i];
            }
            cout<<endl;
        }
        void display(){
            cout<<"No. of observations: "<<n<<endl;
            cout<<"Observations: "<<endl;
            for(int i=0;i<n;i++){
                cout<<ob[i]<<" ";
            }
            cout<<endl;
            cout<<"Mean: "<<mean<<endl;
            cout<<"Variance: "<<variance<<endl;
            cout<<"Standard deviation: "<<std_deviation<<endl;
        }
        void clc();
};
void calculation :: clc(){
    for(int i=0;i<n;i++){
        sum+=ob[i];
    }
    mean=sum/n;
    for(int i=0;i<n;i++){
        variance+=pow((ob[i]-mean),2);
    }
    variance/=(n-1);
    std_deviation=sqrt(variance);
}
int main() {
    calculation a;
    a.clc();
    a.display();
    return 0;
}
// Terminal
// Enter the no. of observations: 3       
// Enter the observations:
// 12 11.7 10.9

// No. of observations: 3
// Observations:
// 12 11.7 10.9
// Mean: 11.5333
// Variance: 0.323334
// Standard deviation: 0.568624

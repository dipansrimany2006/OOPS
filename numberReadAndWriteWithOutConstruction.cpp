# include <iostream>
using namespace std;
class data1{
    int x,y;
    public:
    void readdata();
    void outdata();
};
inline void data1::readdata(){
    cout<<"Enter the number: ";
    cin>>x;
    cout<<"Enter the number: ";
    cin>>y;
}

inline void data1::outdata(){
    cout<<"The value of x: "<<x;
    cout<<"The value of y: "<<y;
}

int  main(){
    data1 m1;
    m1.readdata();
    m1.outdata();
    return 0;
}
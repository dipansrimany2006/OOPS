#include <iostream>
using namespace std;

class info{
    private: 
    int age;
    int basic,year_Exp;
    int da , ta, tol_Sal;
    public:
    void input(){
        cout<<"Enter the age: "<<endl;
        cin>>age;
        cout<<"Enter the basic: "<<endl;
        cin>>basic;
        cout<<"Enter the year experence: "<<endl;
        cin>>year_Exp;
        da = basic*0.6;
        ta = basic*0.1;
        if(year_Exp>5){
            tol_Sal= basic + da + ta + 1200;
        } else{
            tol_Sal = basic + da + ta;
        }
    }
    void output(){
        cout<<"Details of employee: "<<endl;
        cout<<"the age: "<<age<<endl;
        cout<<"the basic: "<<basic<<endl;
        cout<<"the year experience: "<<year_Exp<<endl;
        cout<<"the da: "<<da<<endl;
        cout<<"the ta: "<<ta<<endl;
        cout<<"Total Salary: "<<tol_Sal<<endl;
    }
    void sum(info E1, info E2, info E3){
        int s;
        s=E1.tol_Sal + E2.tol_Sal + E3.tol_Sal;
        cout<<"Total salary is: "<<s<<endl;
    }
};

int main(){
    info E1, E2, E3;
    E1.input();
    E2.input();
    E3.input();
    E1.output();
    E2.output();
    E3.output();
    // E4.sum(E1, E2, E3);
    return 0;
}
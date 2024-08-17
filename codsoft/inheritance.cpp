# include<iostream>
# include<cmath>

using namespace std;
class SimpleCalculator{
    public:
       int a,b;

       void enter()
       {
        cout<<"enter the values of a and b";
        cin>>a>>b;

       }
       void displaycal(){
        cout<<"Sum of the numbers are"<<a+b<<endl;
        cout<<"the difference of numbers are"<<a-b<<endl;
        cout<<"the multplication is"<<a*b<<endl;
        cout<<"division is"<<a/b<<endl;
        }

};

class ScientificCalculator{
    public:
       float a,b;
       void enterf(){
        cout<<"enter the values of a and b"<<endl;
        cin>>a>>b;

       }
       void display_sci(){
        cout<<"the sine of a and b is "<<sin(a+b)<<endl;
        cout<<"the cosine of a and b is "<<cos(a+b)<<endl;
        cout<<"the power of a and b is "<<pow(a,b)<<endl;
        cout<<"tan of a and b is "<<tan(a+b)<<endl;

       }


};

class HybridCalculator:public SimpleCalculator,public ScientificCalculator{
    public:
         void displayf(){
            enter();
            displaycal();
            enterf();
            display_sci();
         }
};
int main(){
    HybridCalculator obj;
    obj.displayf();

    return 0;
}

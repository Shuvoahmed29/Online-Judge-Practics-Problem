#include <bits/stdc++.h>
using namespace std;
class shap{
public:
    double len1,len2;
    shap(double len1, double len2){
        this->len1 = len1;
        this->len2 = len2;
    }
    virtual double area(){
        return 0;
    }
};

class triangle: public shap{
public:
    triangle(double len1, double len2)
    :shap(len1,len2)
    {

    }
    double area(){
        return 0.5*len1*len2;
    }
};

class rectangle: public shap{
public:
    rectangle(double len1, double len2)
    :shap(len1,len2)
    {

    }
    double area(){
        return len1*len2;
    }
};
int main(){
    shap *s;
    triangle t(10,20);
    s=&t;
    cout<<"Triangle: "<<s->area()<<endl;
    rectangle r(10,20);
    s=&r;
    cout<<"Rectangle: "<<s->area()<<endl;
}
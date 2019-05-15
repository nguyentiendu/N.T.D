#include <bits/stdc++.h>
using namespace std;
class Vector {
public:
    Vector(int s) {
    elem = new double[s];
    sz = s;
    }
    ~Vector() { delete [] elem; }
    double& operator[](int i) { return elem[i]; }
    int size() { return sz; }
    Vector(initializer_list <double> lst){
        elem = new double[lst.size()];
        sz = lst.size();
        copy(lst.begin(),lst.end(),elem);
    }
    void push_back(const double &n)
    {
        sz++;
        elem[sz]=n;
    }
private:
    double* elem;
    int sz;
};
/*
double read_and_sum(int s) {
    Vector v(s);
    for (int i=0; i!=v.size(); ++i)
        cin>>v[i];
    double sum = 0;
    for (int i=0; i!=v.size(); ++i)
        sum+=v[i];
    return sum;
}*/
int main()
{
    Vector a={1,2,3};
    double n=6.0;
    a.push_back(n);
    for (int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
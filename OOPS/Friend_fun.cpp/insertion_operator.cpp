  #include<iostream>
  using namespace std;
  class Complex
  {
    int a,b;
    public:
    
    
    
    friend istream & operator>>(istream &,Complex &);
    friend ostream & operator<<(ostream &,const Complex &);
  };
    istream & operator>>(istream &cin , Complex &x)
    {
        cout<<"enter the real part:";
        cin>>x.a ;            

        cout<<"enter the imaginary  part:";
       cin >>x.b;
        return cin;

    }
    
    ostream & operator<<(ostream &cout , const Complex &x)
    {
        cout<<x.a<<"+"<<x.b<<"i";
        return cout;
    }
  int main(void)
  {
     Complex c1;
     cout<<"enter the complex number:"<<endl; 
    cin>>c1;
    cout<<"your enter :"<<c1;
     return 0;
  }
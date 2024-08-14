//Program to find the maximum among three numbers
 
 #include<iostream>
 using namespace std;

 int main ()
 {
    int a,b,c;
    cout<<"enter the value of a,b,c "<<endl;
    cin>>a>>b>>c;

    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<" "<<"is greater"<<endl;
        }
        else{
            cout<<c<<" "<<"is greater"<<endl;
        }
    }
    else{
        if(b>c)
        {
            cout<<b<<" "<<"is greater"<<endl;
        }
        else{
            cout<<c<<" "<<"is greater"<<endl;
        }
    }

return 0;
 }
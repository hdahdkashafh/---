#include  <iostream>
using namespace std;
int add(int x,int y)
{
    return x+y;
}
int minus(int x,int y)
{
    return x-y;
}
int multi(int x,int y)
{
    return x*y;
}
int divide(int x, int y)
{
    return x/y;
}
void comput(int x,int y,int(*fp)(int,int))
{
    cout<<(*fp)(x,y)<<endl;
}
int main ()
{
    int x,y;
    char a;
    while (cin>>x>>a>>y &&(x||y))
{
    switch (a)
    {
    case '+':
        cout<<x<<a<<y<<"=";
        comput(x,y,add);
        break;
    case '-':
        cout<<x<<a<<y<<"=";
        comput(x,y,minus);
        break;
    case '*':
        cout<<x<<a<<y<<"=";
        comput(x,y,multi);
        break;
    case '/':
        cout<<x<<a<<y<<"=";
        comput(x,y,divide);
        break;
    default:
        break;
    }
}
    return 0;

}
#include <iostream>
using namespace std;
{
class father 
{
public:
father()
{
cout<<" father"<<endl;
}
};
class mother
{
public:
mother()
{
cout<<" mother"<<endl;
}
};
class granparent:public father,public mother
{
public:
grandparent()
{
cout<<"grandparent family"<<endl;
}
};
int main()
{
grandparent d;
}
}

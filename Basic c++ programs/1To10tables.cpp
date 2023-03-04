#include<iostream>
using namespace std;
class table
{
private:
    int i,j,sum=0;
public:
    process()
    {
        for(i=1;i<=10;i++)
        {
            for(j=1;j<=10;j++)
            {
                sum=i*j;
<<<<<<< HEAD
                 cout<<i*j<<"\t";
               /*if(sum>=10)
                {
                cout<<i*j<<"  ";   2 spaces
                }
                else
                {
                    cout<<i*j<<"   ";  3 spaces
=======
                cout<<i*j<<"\t";
              /*  if(sum>=10)
                {
                cout<<i*j<<"  ";  2 spaces
                }
                else
                {
                    cout<<i*j<<"   "; 3 spaces
>>>>>>> 8777326fa202e9979a163e5ce82ec1240e185117
                }*/
            }
            cout<<endl;
        }
    }
};
int main()
{
    table obj;
    obj.process();
}

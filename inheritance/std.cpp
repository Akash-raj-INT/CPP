#include<iostrean>
using namespace std;
class student
{
    private:
    int roll_no;
    protected:
    char section[10];
    public:
    void_get_rno()
    {
        cout<<"\n Enter the roll number:";
        cin>>roll_no;
    }
    voidshow_rno()
    {
        cout<<"\n roll no:"<<roll_no;
    }
};
class
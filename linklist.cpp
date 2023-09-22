#include<iostream>
using namespace std;
class node
{
    public:
    string name;
    string address;
};
class people : public node 
{
    private:
    people * pnext;
    people(string name, string address )
    {
        this->name =name;
        this->address = address ;
        this->pnext=nullptr;
    }
};
class student : public node
{
    public:
    int  score;
    private :
    student * snext;
    student(string name,string address , int score)
    {
        this->name=name;
        this->address=address;
        this->score=score;
        this->snext=nullptr;
    }
};
class linklist
{
    public:
    virtual int     getsize()   =0;
    virtual bool    isempty()   =0;
    virtual void    clear()     =0;

    virtual void    insert()    =0;
    virtual void    remove()    =0;
    virtual int     findidx(int idx )   =0;


};

int main()
{
    return 0;
}
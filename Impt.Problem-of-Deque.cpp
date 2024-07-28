///CPS Academy theke:
#include<bits/stdc++.h>
using namespace std;
void push_back_pb(deque<int>&dq,int x)///push back the given element.
{
    dq.push_back(x);///deque er address dewai return kora lagbe na,main function e change hoye geche.
}
void pop_back_ppb(deque<int>&dq)///pop element from the back(if exists) and then the driver code prints the size of the deque;
{
    if(!dq.empty())
    {
        dq.pop_back();
    }
    return;
}
void push_front_pf(deque<int>&dq,int x)///push front the given element(x) and then driver code prints that element;
{
 dq.push_front(x);
}
void front_dq(deque<int>&dq)///Return the front elements if it exists,else return -1;
{
    if(!dq.empty())
    {
        return dq.front();
    }
    else
        return -1;
}
///Drivers code starts:
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    ///declare the deque:
    deque<int>dq;
    while(t--)
    {
        int queries;
        cin>>queries;
        while(queries--)
        {
            string s;
            cin>>s;
            ///if query is to push back;
            if(s=="pb")
            {
                int x;
                cin>>x;
                push_back_pb(dq,x);
                cout<<dq.back()<<endl;
            }
            ///if query is to push front;
            if(s=="pf")
            {
                int x;
                cin>>x;
                push_front_pf(dq,x);
                cout<<dq.front()<<endl;
            }
            ///if query is to pop back;
            if(s=="pb_b")
            {
                pop_back_ppb(dq);
                cout<<dq.size()<<endl;
            }
            ///if query is to return front;
            if(s=="f")
            {
               cout<<front_dq(dq)<<endl;;
               //cout<<dq.front()<<endl;
            }
        }
    }
    return 0;
}
/*
* Input:
2
5
pf 5
pf 10
pb 6
f
pp_b
2
pf 5
f
* Output:
5
10
6
10
2
5
5
*/

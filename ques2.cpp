/*Remove kth element from top in a given stack.
Hint : Use another stack, just like insertion question.*/

 // ans = 
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    stack<int> temp;
    int n = st.size();
    int k = 2;
    while(st.size()> (n-k)){
        int x = st.top();
        
        temp.push(x);
        st.pop();
    }
    temp.pop();
    while(temp.size()>0){
        int y = temp.top();
        st.push(y);
        temp.pop();
    }

    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
    cout<<st.size();

}
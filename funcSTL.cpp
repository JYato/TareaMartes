#include <iostream>
#include <set>
#include <algorithm>
#include <stack>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    set<int> iset;
    int number, size1,iu=0;
    cout << "De que tamaño sera la lista?: ";
    cin >> size1;
    while(iu != size1){
        cin >> number;
        iset.insert(number);
        iu++;
    }

    cout << "iset contains:";
    set<int>::iterator it;
    for(it=iset.begin(); it != iset.end(); it++)
        cout << " " << *it;
    cout << endl;
    int searchFor;
    cin >> searchFor;
    if(binary_search(iset.begin(), iset.end(), searchFor))
        cout << "Found " << searchFor << endl;
    else
        cout << "Did not find " << searchFor << endl;
    cout << "---------------------------------------------" << endl;

    vector<int> vec(4,5);

    cout << vec.size() << endl;
    vector<int>::iterator pointer;
    pointer=vec.begin();
    while(pointer != vec.end()){
        cout << *pointer << endl;
        pointer++;
    }

    cout << "---------------------------------------------" << endl;

    queue<int>cola;
    cola.push(4);
    cout <<"Tamaño temporal: "<< cola.size()<<endl;
    cola.push(2);
    cola.push(5);
    cola.push(6);
    while(!cola.empty()){
        cout << cola.front()<<" ";
        cola.pop();
    }
    cout <<endl << "Tamaño: "<< cola.size()<<endl;

    cout << "---------------------------------------------" << endl;

    stack<double>pila;
    pila.push(2);
    pila.push(4);
    cout <<"Tamaño temporal: "<< pila.size()<<endl;
    pila.push(2);
    pila.push(5);
    pila.push(6);
    while(!pila.empty()){
        cout << pila.top()<<" ";
        pila.pop();
    }
    cout <<endl << "Tamaño: "<< pila.size();

    return 0;
}


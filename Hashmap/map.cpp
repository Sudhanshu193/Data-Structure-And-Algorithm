#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{       
    //creation
    unordered_map<string, int> m;
    
    //insertion
    //method 1
    pair<string,int> p= make_pair("baber", 3);
    m.insert(p);

    //method 2
    pair<string, int>pair2("love", 2);
    m.insert(pair2);

    //method 3
    m["mera"] =1;

    //searching
    cout<< m["mera"]<<endl;
    cout<< m.at("love")<<endl; 
    //cout<<m.at("unmatchly")<<endl;
    cout<<  m["unmatchly"]<<endl;

    cout<<m.size()<<endl;
    cout<<m.count("baber")<<endl;

    //iterstion
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    unordered_map<string, int> ::iterator it =m.begin();
    while (it !=m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    
    return 0;
}
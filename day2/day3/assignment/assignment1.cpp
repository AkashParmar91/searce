#include<bits/stdc++.h>
using namespace std; 

int main() 
{
    int total_customers;
    cin >> total_customers;
    vector<pair<long long int,long long int>> inp(total_customers);
    for (int i = 0; i < total_customers; i++) 
	{
        cin>>inp[i].first>>inp[i].second;        
    }
    //sort the input based on the time of arrival
    sort(inp.begin(), inp.end());
    long long int total_waiting_time = 0;
    set<pair<long long int,long long int> > temp;
    long long int ex = inp[0].first;
    long long int cnt = 0;
    while (temp.size()!=0 || cnt<total_customers) 
    {
        while (cnt < total_customers && inp[cnt].first <= ex) 
        {
            temp.insert(pair<long long int,long long int>(inp[cnt].second, cnt));
            cnt++;
        }
        if(!temp.empty())
        {
            int ind = temp.begin()->second;
            temp.erase(temp.begin());
            ex += inp[ind].second;
            total_waiting_time = total_waiting_time+  ex - inp[ind].first;
        }
        else 
        {
            ex = inp[cnt].first;
        } 
    }
    cout << total_waiting_time / total_customers << endl;
    return 0;
}

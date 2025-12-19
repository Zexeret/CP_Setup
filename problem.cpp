#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;

const ll MOD = 1e9 + 7;

auto getInput()
{
    vector<ll> input;
    string line;

    while (getline(cin, line))
    {

        stringstream ss(line);
        string num;
        while (getline(ss, num, ','))
        {
            input.push_back(stoll(num));
        }
    }

    return input;
}

ll removeDuplicates(vector<ll> &nums)
{
    int n = nums.size();

    int preEle = nums[0];
    for (auto it = nums.begin(); it != nums.end();)
    {
    
        if (it == nums.begin())
            preEle = *it;
        else if (preEle == *it)
        {
            it = nums.erase(it);
            continue;
        }
        else
        {
            preEle = *it;
        }

        ++it; 
    }

    return nums.size();
}

int solve()
{
    auto inputArr = getInput();
    ll answer = removeDuplicates(inputArr);

    for (auto i : inputArr)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << answer;

    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(10);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // #########***************************FROM BELOW*******************************####################

    ll t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
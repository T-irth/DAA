#include <iostream>
#include <vector>

using namespace std;

int min_coins_change(vector<int> &coins, int target)
{
    vector<int> db_table(target + 1, INT_MAX);
    db_table[0] = 0;

    for (int curr_amnt = 1; curr_amnt <= target; curr_amnt++)
    {
        for (int coin : coins)
        {
            if (curr_amnt >= coin)
            {
                if (db_table[curr_amnt - coin] != INT_MAX)
                {
                    db_table[curr_amnt] = min(db_table[curr_amnt], 1 + db_table[curr_amnt - coin]);
                }
            }
        }
    }
    if (db_table[target] == INT_MAX)
    {
        return -1;
    }
    else
    {
        return db_table[target];
    }
}

int main()
{
int n;
cout<<"enter total coins";
cin>>n;

vector<int> coins(n);
for(int i=0;i<n;i++){
cout<<"enter amount of coin"<<(i+1);
cin>>coins[i];
}

int target;
    cout << "enter target amount: ";
    cin >> target;
    int result = min_coins_change(coins, target);
    cout << "minimum coins required: " << result << endl;

}


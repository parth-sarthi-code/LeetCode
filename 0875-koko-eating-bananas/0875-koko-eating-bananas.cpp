class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    
    int maxPile = 0;
    for (int p : piles) {
    maxPile = max(maxPile, p);
        }
    int low = 1;
    int high = maxPile;
    int k = 0;
    long long hours = 0;

    if ( h == piles.size()) return high ;
    while (low <= high)
    {
        hours = 0;
        int mid = low + (high - low)/2;

        for ( int i = 0; i < piles.size();i++)
        {
            hours += ceil((double)piles[i] / mid);
        }

        if ( hours <= h)
        {
            k = mid;
            high=mid-1;;
        }
        else
        {
            low=mid+1;
        }
    }

    return k;
    
    }
};
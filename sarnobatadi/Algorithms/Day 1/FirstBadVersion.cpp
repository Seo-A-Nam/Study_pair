// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low  = 0;
        int high = n ;
        int flg;
        while(low<=high)
        {
            int mid = (high-low)/2 + low;
            if(isBadVersion(mid)== true && isBadVersion(mid-1)==false)
            {
                flg =mid;
                break;
            }
            else if(isBadVersion(mid))
            {
                high = mid -1 ;
            }
            else if(isBadVersion(mid) == false)
            {
                low = mid+1;
            }
            
        }
        return flg;
    }
};
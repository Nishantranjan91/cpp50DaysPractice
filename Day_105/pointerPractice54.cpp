class Solution {
public:
  long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
    auto diffs = std::vector<int>(nums1.size());
    auto maxDiff = INT_MIN;
    for(int i = 0; i < nums1.size(); ++i) {
      diffs[i] = std::abs(nums1[i] - nums2[i]);
      maxDiff = std::max(diffs[i], maxDiff);
    }
    // 0 <= nums1[i], nums2[i] <= 10^5 
    // 0 <= diffs[i] <= 10^5.
    auto buckets = std::vector<int>(maxDiff + 1, 0);
    for(auto diff : diffs) {
      ++buckets[diff];
    }
    
    auto k = k1 + k2;
    auto curBucket = maxDiff;
    while(k && curBucket >= 0) {
      const auto n = buckets[curBucket];
      const auto decreaseN = std::min(n, k);
      buckets[curBucket] -= decreaseN;
      if(curBucket - 1 >= 0) {
        buckets[curBucket - 1] += decreaseN;
      }
      k -= decreaseN;
      if(buckets[curBucket] == 0) {
        --curBucket;
      }
    }
    
    auto res = 0ll;
    for(auto i = 0ll; i < buckets.size(); ++i) {
      res += buckets[i] * i * i;
    }
    
    return res;
  }
};
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());//O(log n)
      
      
    //   Brute Approach O(n^2) + sort(T.C)
        int n=intervals.size();
        vector<vector<int>>ans;

          for(int i=0;i<n;i++){
              int start=intervals[i][0],j=0;
              int end=intervals[i][1];
                if(!ans.empty() && end<=ans.back()[1]){
                    continue;
                }
            for(j=i;j<n;j++){
                  if(end>=intervals[j][0]){
                      end=max(intervals[j][1],end);
                  }
                  else{
                     break;
                 }
              }
                  ans.push_back({start,end});
              }
              
          
      
          return ans;

    //     int start=intervals[0][0];
    //     int end=intervals[0][1];
    //     int i=0;

            //better Approach O(n)+sort(T.C)
    //     while(i<n){
    //         if(end>=intervals[i][0]){
    //             end=max(intervals[i][1],end);
    //             i++;
    //         }
    //         else{

    //             ans.push_back({start,end});
    //             start=intervals[i][0];
    //             end=intervals[i][1];
    //         }
    //     }   

    //     ans.push_back({start,end});
    // return ans;
    }
};

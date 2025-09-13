//gfg question
class Solution {
public:
    int maxMeetings(vector<int>& start, vector<int>& end) {
        vector<pair<int,int>> meetings;
        
        for(int i=0; i<start.size(); i++) {
            meetings.push_back({end[i], start[i]});
        }

        sort(meetings.begin(), meetings.end());

        int counter = 1;
        int c = meetings[0].first; 

        for(int i=1; i<start.size(); i++) {
            if(meetings[i].second > c) {
                counter++;
                c = meetings[i].first;
            }
        }
        return counter;
    }
};

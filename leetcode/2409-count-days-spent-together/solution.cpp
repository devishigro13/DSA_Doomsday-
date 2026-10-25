// Runtime: 0 ms
// Memory: 7.8 MB

class Solution {
public:
    int today(string s){
       int days[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
       int month=stoi(s.substr(0, 2));
       int day=stoi(s.substr(3,2));
       int total=0;
       for (int i = 0;i<month-1;i++) {
            total+=days[i];
        }
        return total+day;

    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int astart=today(arriveAlice);
        int aend=today(leaveAlice);
        int bstart=today(arriveBob);
        int bend=today(leaveBob);
        int start=max(astart,bstart);
        int end=min(aend,bend);
        if ((end-start+1)<0){
            return 0;
        }
        return end-start+1;
    }
};
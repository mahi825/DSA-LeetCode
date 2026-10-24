class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int days[]={31,28,31,30,31,30,
                    31,31,30,31,30,31};

        auto convert=[&](string date){
            int month=stoi(date.substr(0,2));
            int day=stoi(date.substr(3,2));
            for(int i=0;i<month-1;i++){
                day+=days[i];

            }
            return day;
        };
         int aliceArrive = convert(arriveAlice);
        int aliceLeave = convert(leaveAlice);
        int bobArrive = convert(arriveBob);
        int bobLeave = convert(leaveBob);
        
        int start=max(aliceArrive,bobArrive);
        int end=min(aliceLeave,bobLeave);

        if(start>end)
          return 0;
        return end-start+1;

    }
};
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        for(string str:operations){
            char c = str[0];
            int i=0, sum=0;
            switch(c){
                case 'D':
                    s.push(s.top() * 2); 
                    break;
                case 'C':
                    s.pop(); 
                    break;
                case '+':
                    i = s.top();
                    s.pop();
                    sum = i+s.top();
                    s.push(i);
                    s.push(sum);
                    break;
                default:
                    s.push(stoi(str));
            }
        }
        int sum=0;
        while(!s.empty()){
            sum += s.top();
            s.pop();
        }
        return sum;
    }
};
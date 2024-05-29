// exercicio usando queue e stack;
// https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack st;
        queue q;
        reverse(sandwiches.begin(), sandwiches.end());
        for(auto it1 = students.begin(), auto it2 = sandwiches.begin; 
            it1!=studentes.end() and it2!=sandwiches.end(); it1++, it2++){
            st.push(*it1);
            q.push(*it2);
            }
            int x = st.size();
            while(!st.empty()){
                if(x==0)    break;
                if(st.top()==q.next()){
                    st.pop();
                    q.pop();
                    x = st.size();
                }
                else{
                    int aux = q.next();
                    q.pop();
                    q.push(aux);
                    x--;
                }
            }
            return q.size();
    }
};

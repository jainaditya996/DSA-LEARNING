class Solution {
public:
    int countStudents(vector<int>& stu, vector<int>& sand) {
        int i=0,j=0; 
        int count=0;
        while(j<sand.size()){
                  
            if(sand[j]==stu[i]){
                i++,j++;
            count=0;
            }else{
                stu.push_back(stu[i]);
                i++;
                count++;
            }

            if(count>sand.size()-j){
                return sand.size()-j;
            }

        }

        return 0;

        }
    
};
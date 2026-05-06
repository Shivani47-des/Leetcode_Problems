class Solution {
public:
    string removeDuplicates(string s) {
        int len=s.size();
        while(true){
            bool found=false;
            for(int i=0;i<len-1;i++){
                if(s[i]==s[i+1]){
                    s.erase(i,2);
                    found=true;
                    break;
                }
            }
            if(!found){
                break;
            }
            
        }
        return s;
    }
};

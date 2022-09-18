class Solution {
    public int solution(int n) {
        int answer = 0;

        int sum = 0;
        int left =1, right = 1;
        while(right <= n+1){
            if(sum < n){
                sum += right++;
            }
            else if(sum == n){
                answer++;
                sum += right++;
            }
            else{
                sum -= left++;
            }
        }
        return answer;
    }
}
import java.util.*;

public class code42 {
    public static void solution(int n, int k){

        ArrayList<Integer> princes= new ArrayList<>();
        for(int i =0; i < n; i++)   princes.add(i+1);

        int cur = 0, cnt = 0;
        while(princes.size() != 1){
            if(cnt == k-1) {
                princes.remove(cur);
                cnt = 0;
                continue;
            }
            cur = (cur+1)%princes.size();
            cnt = (cnt +1)%k;
        }

        System.out.println(princes.get(0));
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        int K = s.nextInt();
        solution(N,K);
    }
}

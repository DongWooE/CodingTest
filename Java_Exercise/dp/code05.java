import java.util.*;

public class code76 {
    private int [] d = new int [501];
    private int N;
    private Integer [] change;

    private int dp(int cur){
        if(cur == 0) return 0;
        if(d[cur] != 0) return d[cur];
        d[cur] = 501;
        for(int i =0; i < N; i++) {
            if (cur > change[i]) {
                int t1 = cur / change[i];
                int t2 = cur % change[i];
                d[cur] = Math.min(d[cur], t1*dp(change[i]) +dp(t2));
            }
        }
        return d[cur];
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        code76 code = new code76();
        code.N = scan.nextInt();
        code.change = new Integer [code.N];
        for(int i =0; i < code.N; i++){
            int tmp = scan.nextInt();
            code.change[i] = tmp;
            code.d[tmp] = 1;
        }
        int M = scan.nextInt();

        Arrays.sort(code.change, Collections.reverseOrder());

        System.out.println(code.dp(M));
    }
}


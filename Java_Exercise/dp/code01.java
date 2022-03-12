import java.util.*;

public class code72 {

    private int n;
    private int [] dp = new int [36];

    private int dp(int cur){
        if(cur == 1)    return dp[1] = 1;
        if(cur == 2)    return dp[2] = 2;
        if(dp[cur] != 0) return dp[cur];
        return dp[cur] = dp(cur-1) + dp(cur-2);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        code72 code = new code72();
        System.out.println(code.dp(N));
    }
}

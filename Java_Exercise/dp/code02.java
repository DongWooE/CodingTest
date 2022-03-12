import java.util.*;

public class code73 {

    private int [] d = new int [36];
    private int n;

    private int dp(int cur){
        if(cur == 1) return 2;
        if(cur == 2) return 3;
        if(d[cur] != 0) return d[cur];
        return d[cur] = dp(cur-1) + dp(cur-2);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        code73 code = new code73();
        System.out.println(code.dp(N));
    }
}

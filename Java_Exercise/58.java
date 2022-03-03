import java.util.*;

public class code59 {

    private int answer = 0;

    private int combination(int n, int r){
        if(r == 1) return n;
        if(n == r) return 1;
        return combination(n-1, r-1) + combination(n-1, r);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int r = scan.nextInt();
        code59 code = new code59();
        System.out.println(code.combination(n, r));
    }
}

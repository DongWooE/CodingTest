import java.util.*;

public class code01 {
    public static void solve(String s, char c){
        int cnt = 0;
        s = s.toUpperCase();
        c = Character.toUpperCase(c);

        for(char x : s.toCharArray()){
            if(x == c) cnt++;
        }
        System.out.print(cnt);
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String str = scan.next();
        char c = scan.next().charAt(0);
        solve(str, c);
    }
}


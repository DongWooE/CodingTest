import java.util.*;

public class PG_다음큰숫자 {
    public static int convertToBinary(int n){
        int cnt = 0;
        while(n != 1 && n != 0){
            int i = n % 2;
            if(i == 1) cnt++;
            n/=2;
        }
        if(n == 1) cnt++;
        return cnt;
    }

    public int solution(int n){
        int cnt = convertToBinary(n);
        int cur = n+1;
        while(convertToBinary(cur) != cnt) cur++;
        return cur;
    }

    public static void main(String[] args) {
        PG_다음큰숫자 ps = new PG_다음큰숫자();
        System.out.println(ps.solution(78));
        System.out.println(ps.solution(15));
    }
}

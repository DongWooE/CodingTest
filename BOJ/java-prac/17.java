import java.util.*;

public class code17 {
    public static Boolean solution(int N){
        if(N <2) return false;
        for(int i = 2; i <= Math.sqrt(N); i++){
            if(N%i == 0) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int cnt = 0;
        for(int i = 1; i <= N ; i++){
            if(solution(i)){
                cnt++;
            }
        }
        System.out.print(cnt);
    }
}

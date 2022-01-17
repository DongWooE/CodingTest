import java.util.*;

public class code17 {
    //에라토스테네스의 체 풀이
    public static int solution(int n){
        int cnt = 0;
        int array [] = new int[n+1];    //n도 포함해야하므로 주의
        for(int i =2; i<= n; i++){
            if(array[i] == 0){
                cnt++;
                for(int j = i; j <= n; j=j+i){  // i의 배수만큼 증가
                    array[j] = 1;
                }
            }
        }
        return cnt;
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        System.out.print(solution(N));
    }


    //제곱근 풀이
    //    public static Boolean solution(int N){
//        if(N <2) return false;
//        for(int i = 2; i <= Math.sqrt(N); i++){
//            if(N%i == 0) return false;
//        }
//        return true;
//    }
//    public static void main(String[] args) {
//        Scanner scan = new Scanner(System.in);
//        int N = scan.nextInt();
//        int cnt = 0;
//        for(int i = 1; i <= N ; i++){
//            if(solution(i)){
//                cnt++;
//            }
//        }
//        System.out.print(cnt);
//    }
}

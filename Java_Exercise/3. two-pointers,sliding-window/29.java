import java.util.*;

public class code30 {
    public static void solution(int n){
        int answer = 0, cnt = 1;
        n--;
        while(n > 0){
            cnt++;
            n = n - cnt;
            if(n%cnt == 0) answer++;
        }
        System.out.println(answer);
    }

//    public static void solution(int n){
//        int sum = 0, cnt = 0;
//        for(int i =1, j = 1; i <= n/2+1; i++){
//            sum += i;
//            if(sum > n){
//                while(sum > n){
//                    sum -= j++;
//                }
//            }
//            if(sum == n){
////                for(int k =j; k <= i; k++)
////                    System.out.print(k + " ");
////                System.out.println();
//                cnt++;
//            }
//        }
//        System.out.println(cnt);
//    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        solution(N);
    }
}

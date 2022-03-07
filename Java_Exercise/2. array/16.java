import java.util.*;

public class code16 {
    public static void solution(int n){
        //배열로 푸는 방법
//        int answer[] = new int[n];
//        answer[0] = 1;
//        answer[1] = 1;
//        for(int i =2; i < n; i++)
//            answer[i] = answer[i-2] + answer[i-1];

        int fir = 0, sec = 1;
        System.out.print(sec + " ");
        for(int i =0; i < n-1; i++){
            int cur = fir + sec;
            fir = sec;
            sec = cur;
            System.out.print(cur + " ");
        }
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        solution(N);
    }
}

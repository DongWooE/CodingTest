import java.util.*;
public class code29 {
    public static void solution(int [] array, int n, int m){
        int sum = 0,answer = 0;
        for(int i =0, cnt = 0; i < n; i++) {
            sum += array[i];
            if(sum > m) {
                while(sum > m){
                    sum -= array[cnt++];
                }
            }
            if(sum == m) answer++;
        }
        System.out.println(answer);
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int M = scanner.nextInt();
        int [] array = new int [N];
        for(int i =0; i < N; i++){
            int tmp = scanner.nextInt();
            array[i]= tmp;
        }
        solution(array, N, M);
    }
}

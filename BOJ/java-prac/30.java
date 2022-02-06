import java.util.*;

public class code31 {
    public static void solution(int [] arr, int n, int k){
        int answer = 0, cnt = 0;
        for(int rt = 0, lt =0; rt < n; rt++){
            if(arr[rt] == 0) cnt++;
            while(cnt > k){
                if(arr[lt] == 0) cnt--;
                lt++;
            }
            answer = Math.max(answer, rt-lt+1);
        }
        System.out.println(answer);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int K = scanner.nextInt();

        int [] arr = new int [N];
        for(int i =0; i < N; i++){
            int tmp = scanner.nextInt();
            arr[i] = tmp;
        }
        solution(arr, N, K);
    }
}

import java.util.*;

public class code28 {
    //sliding window
    public static void solution(int n, int k, int [] array){
        int sum = 0;
        for(int i = 0; i < k; i++) sum += array[i];
        int max = sum;
        for(int i = k; i< n; i++){
            sum += (array[i] - array[i-k]);
            max = Math.max(max, sum);
        }
        System.out.println(max);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int K = scanner.nextInt();
        int [] array = new int[N];
        for(int i =0; i < N; i++){
            array[i] = scanner.nextInt();
        }
        solution(N, K, array);
    }
}

import java.util.*;

public class code47 {
    public static void solution(int [] arr, int n){
        for(int i =1; i < n; i++){
            int tmp = arr[i];
            int j = i-1;
            for(; j >= 0 && tmp < arr[j] ; j--){
                arr[j+1] = arr[j];
            }
            arr[j+1] = tmp;
        }

        for(int a : arr)
            System.out.print(a + " ");
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        int [] arr = new int [N];
        for(int i =0; i < N; i++)
            arr[i] = s.nextInt();
        solution(arr, N);
    }
}

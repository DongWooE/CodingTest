import java.util.*;

public class code46 {
    public static void solution(int [] arr, int n){
        for(int i =0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(arr[i] > arr[j]){
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }

        for(int i : arr)
            System.out.print(i + " ");
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

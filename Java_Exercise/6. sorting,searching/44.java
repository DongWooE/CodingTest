import java.util.*;

public class code45 {
    public static void solution(int [] arr, int n){
        for(int i =0; i < n; i++) {
            int front = i;
            for (int j = i+1; j < n; j++) {
                if(arr[front] > arr[j]){
                    front = j;
                }
            }
            if(front != i){
                int tmp = arr[front];
                arr[front] = arr[i];
                arr[i] = tmp;
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

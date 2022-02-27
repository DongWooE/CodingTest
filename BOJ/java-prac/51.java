import java.util.*;

public class code52 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        int M = s.nextInt();

        int arr [] = new int [N];
        for(int i =0; i < N; i++)
            arr[i] = s.nextInt();
        solution(N, M, arr);
    }

    private static void solution(int n, int m, int[] arr) {

        Arrays.sort(arr);

        int rt = arr.length-1, lt = 0;
        int result = 0;
        while(rt > lt){
            int middle = (lt+rt)/2;
            if(arr[middle] == m){
                result = middle;
                break;
            }
            else if(arr[middle] > m) rt = middle;
            else lt = middle;
        }
        System.out.println(result+1);
    }
}

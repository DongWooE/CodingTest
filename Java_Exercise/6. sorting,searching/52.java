import java.util.*;

public class code53 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        int M = s.nextInt();
        int arr [] = new int [N];
        for(int i =0; i < N; i++) {
            arr[i] = s.nextInt();
        }
        solution(N, M, arr);
    }

    private static void solution(int n, int m, int[] arr){

        int lt = 0, rt = 0;
        for(int a : arr){
            lt = Math.max(lt, a);
            rt += a;
        }

        // stream으로 구하기
        // int lt = Arrays.stream(arr).max().getAsint().
        // int rt = Arrays.stream(arr).sum();

        int answer = 0;
        while(lt <= rt){
            int mid = (lt + rt)/2;

            int cnt = 1, sum = 0;
            for(int a : arr){
                if(sum + a > mid){
                    sum = 0;
                    cnt++;
                }
                sum += a;
            }
            if(cnt <=  m){
                answer = mid;
                rt = mid -1;
            }
            else lt = mid + 1;
        }
        System.out.println(answer);
    }
}

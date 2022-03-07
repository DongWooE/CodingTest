import java.util.*;

public class code54 {

    private static void solution(int[] arr, int n, int c){
        Arrays.sort(arr);
        
        int lt = 200000;
        for(int i =1; i < n; i++) lt = Math.min(lt, arr[i] - arr[i-1]);
        
        int rt = arr[n-1];
        int answer = 0;
        while(lt <= rt){
            int middle = (lt+rt)/2;
            int last = arr[0], cnt = 1;
            for(int i =1; i < n; i++){
                if(arr[i] - last >= middle){
                    cnt++;
                    last = arr[i];
                }
            }
            if(cnt >= c){
                answer = middle;
                lt = middle+1;
            }
            else rt = middle-1;
        }
        
        System.out.println(answer);
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int C = scanner.nextInt();
        int arr [] = new int [N];
        for(int i =0; i < N; i++)
            arr[i]= scanner.nextInt();
        solution(arr, N, C);
    }
}

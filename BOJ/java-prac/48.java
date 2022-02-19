import java.util.*;

public class code49 {
    public static void solution(int [] arr, int n){
        HashSet<Integer> set = new HashSet<>();
        String answer = "U";
        for(int i =0; i < n; i++){
            if(set.contains(arr[i])){
                answer = "D";
                break;
            }
            set.add(arr[i]);
        }

        System.out.println(answer);
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        int [] arr = new int[N];
        for(int i =0; i < N; i++)
            arr[i] = s.nextInt();
        solution(arr, N);
    }
}

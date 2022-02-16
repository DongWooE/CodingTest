import java.util.*;

public class code48 {
    public static void solution(int[] arr, int s, int n){

        Deque<Integer> dq = new LinkedList<>();

        for(int i =0; i < n; i++){
            int cur = arr[i];
            // miss
            if(dq.size() < s){
                dq.push(cur);
                continue;
            }

            if(!dq.contains(cur)){
                dq.removeLast();
                dq.addFirst(cur);
            }
            else{
                dq.remove(cur);
                dq.addFirst(cur);
            }

        }

        for(Integer i : dq)
            System.out.print(i + " ");
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int S = s.nextInt();
        int N = s.nextInt();
        int [] arr = new int[N];

        for(int i =0; i < N; i++)   arr[i] = s.nextInt();

        solution(arr, S, N);
    }
}

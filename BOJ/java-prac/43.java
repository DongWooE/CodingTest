import java.util.*;

public class code44 {
    static class Pair{
        private int danger;
        private int order;

        public Pair(int danger, int order) {
            this.danger = danger;
            this.order = order;
        }
    }
    public static void  solution(int n, int m, int[] arr){

        Queue<Pair> q = new LinkedList<>();

        for(int i =0; i < n; i++)
            q.add(new Pair(arr[i], i));

        int cnt = 0;
        while(!q.isEmpty()){
            int cur = q.peek().danger;

            boolean status = false;
            for(Pair p : q){
                if(cur < p.danger){
                    Pair tmp = q.poll();
                    q.add(tmp);
                    status = true;
                    break;
                }
            }

            if(!status){
                cnt++;
                Pair tmp = q.poll();
                if(tmp.order == m){
                    System.out.println(cnt);
                    break;
                }
            }
        }
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        int M = s.nextInt();
        int [] arr = new int [N];
        for(int i =0; i < N; i++) arr[i] = s.nextInt();
        solution(N,M,arr);
    }
}

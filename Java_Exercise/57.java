import java.util.*;

public class code58 {

    private int [] c = new int [501];

    private static class Pair {
        private int price;
        private int cnt;

        public Pair(int price, int cnt) {
            this.price = price;
            this.cnt = cnt;
        }

        public Pair() {
        }
    }

    private void BFS(int[] arr, int n, int m){
        Queue<Pair> Q = new LinkedList<>();
        Q.add(new Pair(0,0));
        Pair tmp = null;
        while(!Q.isEmpty()){
            tmp = Q.poll();
            if(tmp.price == m) break;
            for(int x : arr){
                int curPrice = tmp.price + x;
                if(curPrice <= m && c[curPrice] == 0){
                    Q.add(new Pair(curPrice, tmp.cnt+1));
                    c[curPrice] = 1;
                }
            }
        }
        System.out.println(tmp.cnt);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int [] arr = new int [N];
        for(int i =0; i < N; i++)
            arr[i] = scan.nextInt();
        int M = scan.nextInt();
        code58 code = new code58();
        code.BFS(arr, N, M);
    }
}

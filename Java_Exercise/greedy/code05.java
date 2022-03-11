import java.util.*;

public class code70 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int M = scanner.nextInt();

        ArrayList<ArrayList<Integer>> friends = new ArrayList<ArrayList<Integer>>();

        for(int i =0; i <= N; i++)
            friends.add(new ArrayList<Integer>());

        for(int i =0; i < M; i++){
            int e1 = scanner.nextInt();
            int e2 = scanner.nextInt();
            friends.get(e1).add(e2);
            friends.get(e2).add(e1);
        }

        int f1 = scanner.nextInt();
        int f2 = scanner.nextInt();

        int [] visited = new int [N+1];
        Queue<Integer> Q = new LinkedList<>();
        Q.add(f1);
        visited[f1] = 1;

        while(!Q.isEmpty()){
            Integer poll = Q.poll();
            for(Integer i : friends.get(poll)){
                if(visited[i] == 0){
                    Q.add(i);
                    visited[i] = 1;
                }
            }
        }
        if(visited[f2] == 1) System.out.println("YES");
        else System.out.println("NO");
    }
}

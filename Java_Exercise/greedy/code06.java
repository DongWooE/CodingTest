import java.util.*;

public class code71 {

    public static class Edge implements Comparable<Edge>{
        private int v;
        private int cost;

        Edge(int v,int cost){
            this.v = v;
            this.cost = cost;
        }

        @Override
        public int compareTo(Edge o) {
            return this.cost - o.cost;
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int v = scan.nextInt();
        int e = scan.nextInt();

        int [] visited = new int [v+1];
        PriorityQueue<Edge> pq = new PriorityQueue<>();
        ArrayList<ArrayList<Edge>> arr = new ArrayList<ArrayList<Edge>>();
        for(int i =0; i <= v; i++)
            arr.add(new ArrayList<Edge>());

        for(int i =0; i <e; i++){
            int v1 = scan.nextInt();
            int v2 = scan.nextInt();
            int cost = scan.nextInt();
            arr.get(v1).add(new Edge(v2, cost));
            arr.get(v2).add(new Edge(v1, cost));
        }

        int cnt = 0, sum = 0;

        pq.add(new Edge(1, 0));

        while(cnt <= v-1){
            Edge poll = pq.poll();
            if(visited[poll.v] == 1) continue;
            visited[poll.v] = 1;
            for(Edge E : arr.get(poll.v)){
                if(visited[E.v] == 0){
                    pq.add(E);
                }
            }
            cnt++;
            sum += poll.cost;
        }
        System.out.println(sum);
    }
}

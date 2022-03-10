import java.util.*;

public class code69 {

    public static class Lecture implements Comparable<Lecture>{
        private final int m;
        private final int d;

        public Lecture(int m, int d){
            this.m = m;
            this.d = d;
        }

        @Override
        public int compareTo(Lecture o) {
            return o.d - this.d;
        }
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int N = scan.nextInt();

        ArrayList<Lecture> arr = new ArrayList<>();

        int maxDate = 0;
        for(int i =0; i < N; i++){
            int m = scan.nextInt();
            int d = scan.nextInt();
            maxDate = Math.max(maxDate, d);
            arr.add(new Lecture(m,d));
        }

        Collections.sort(arr);

        PriorityQueue<Integer> pq = new PriorityQueue<>();

        int sum = 0, j = 0;
        for(int i =maxDate; i>=1; i--){
            for(; j < N; j++){
                if(arr.get(j).d < i) break;
                pq.offer(arr.get(j).m * -1);
            }
            if(!pq.isEmpty()){
                sum += pq.poll() * -1;
            }
        }
        System.out.println(sum);
    }
}

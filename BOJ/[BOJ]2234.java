import java.io.InputStream;
import java.util.*;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class BJ_22234 {

    private static class P implements Comparable<P>{
        Long id;
        Long time;
        Long enter;

        public P(Long id, Long time, Long enter) {
            this.id = id;
            this.time = time;
            this.enter = enter;
        }

        @Override
        public int compareTo(P o) {
            return (int)(this.enter - o.enter);
        }
    }
    public static void main(String[] args) {
        int N,T,W;
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        T = sc.nextInt();
        W = sc.nextInt();

        Queue<P> q = new LinkedList<>();
        for(int i =0; i<N; i++){        // 0초 일떄 손님들
            Long id = (long) sc.nextInt();
            Long time = (long) sc.nextInt();
            q.add(new P(id,time,0L));
        }

        ArrayList<P> array = new ArrayList<>();
        int M = sc.nextInt();
        for(int i =0; i < M; i++){
            Long id = (long) sc.nextInt();
            Long time = (long) sc.nextInt();
            Long enter = (long) sc.nextInt();
            array.add(new P(id,time,enter));
        }

        ArrayList<P> sortedA = array.stream().sorted().collect(Collectors.toCollection(ArrayList::new));

        P poll = q.poll();
        Long timePerP = 0L;
        for(int i =0; i < W; i++){

            // 큐에 넣기
            if(!sortedA.isEmpty() && sortedA.get(0).enter == i){
                q.add(sortedA.get(0));
                sortedA.remove(0);
            }

            if(poll.time == 0L){    // 시간이 다 지났다면
                poll = q.poll();
                timePerP = 1L;
                System.out.println(poll.id);
                poll.time--;
            }
            else if(poll.time > 0 && timePerP < T){     // 1인당 시간이 T보다 작다면
                timePerP++;
                System.out.println(poll.id);
                poll.time--;
            }
            else{       // 1인당 시간이 T보다 크다면 1인당 시간을 초기화해주고
                q.add(poll);
                poll = q.poll();
                timePerP = 1L;
                System.out.println(poll.id);
                poll.time--;
            }
        }
    }
}

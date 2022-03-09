import java.util.*;

public class code68 {

    public static class Time implements Comparable<Time>{
        private int time;
        private char state;

        Time(int time, char state){
            this.time = time;
            this.state = state;
        }
        Time(){}

        @Override
        public int compareTo(Time o) {
            if(o.time == this.time)   return this.state - o.state;
            else return this.time - o.time;
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();

        ArrayList<Time> arr = new ArrayList<>();

        for(int i =0; i < N; i++){
            int t1 = scan.nextInt();
            int t2 = scan.nextInt();

            arr.add(new Time(t1, 's'));
            arr.add(new Time(t2, 'e'));
        }

        Collections.sort(arr);

        int cnt =0, maxCnt = 0;
        for(Time t : arr){
            if(t.state == 's') cnt++;
            else cnt--;
            maxCnt = Math.max(cnt, maxCnt);
        }

        System.out.println(maxCnt);
    }
}

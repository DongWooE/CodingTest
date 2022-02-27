import java.util.*;


public class code51 {

    public static class Pair implements Comparable<Pair>
    {
        private int x,y;

        public Pair(int x, int y) {
            this.x = x;
            this.y = y;
        }

        @Override
        public int compareTo(Pair o) {
            if(o.x == this.x)    return this.y - o.y;        //음수가 나오니까 순서를 바꾸지 x,양수가 나오면 순서를 바꾼다
            else    return this.x - o.x;
        }
    }

//    public static class Pair{
//        private int x_pos;
//        private int y_pos;
//
//        Pair(int x, int y){
//            x_pos = x;
//            y_pos = y;
//        }
//    }
//    //정렬기준은 먼저 x값의 의해서 정렬하고, x값이 같을 경우 y값에 의해 정렬합니다.
//    public static class sorting implements Comparator<Pair>{
//
//        @Override
//        public int compare(Pair o1, Pair o2) {
//            if(o1.x_pos == o2.x_pos)    return o1.y_pos - o2.y_pos;
//            else return o1.x_pos - o2.x_pos;
//        }
//    }

    public static void solution(Pair[] arr, int n){
        Arrays.sort(arr);

        for(Pair p : arr){
            System.out.println(p.x + " " + p.y);
        }
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        Pair [] arr = new Pair [N];
        for(int i =0; i < N; i++){
            int tmp1 = s.nextInt();
            int tmp2 = s.nextInt();
            Pair tmp = new Pair(tmp1, tmp2);
            arr[i] = tmp;
        }
        solution(arr, N);
    }
}

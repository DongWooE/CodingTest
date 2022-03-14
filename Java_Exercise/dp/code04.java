import java.util.*;

public class code75 {

    public static class Brick implements Comparable<Brick>{
        private int u;
        private int h;
        private int w;

        Brick(int u, int h, int w){
            this.u = u;
            this.h = h;
            this.w = w;
        }

        @Override
        public int compareTo(Brick o) {
            return o.u - this.u;
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();

        Brick [] b = new Brick [N];
        int [] height = new int[N];

        for(int i =0; i < N; i++){
            int u = scan.nextInt();
            int h = scan.nextInt();
            int w = scan.nextInt();
            b[i] = new Brick(u,h,w);
        }

        Arrays.sort(b);

        int result = 0;
        height[0] = b[0].h;
        for(int i =1; i < N; i++){
            height[i] = b[i].h;
            for(int j = i-1; j >=0; j--){
                if(b[i].w < b[j].w){
                    height[i] = Math.max(height[i], height[j] + b[i].h);
                }
            }
            result = Math.max(result, height[i]);
        }

        System.out.println(result);
    }
}

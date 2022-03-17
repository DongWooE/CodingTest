import java.util.*;
public class bj2667 {

    static int n;
    static int [][] house;
    static int groupCnt = 0;

    static int [] moveX = {-1,0,1,0};
    static int [] moveY = {0,1,0,-1};
    static ArrayList<Integer> result = new ArrayList<>();

    static class Pair{
        private int x;
        private int y;

        Pair(int x, int y){
            this.x = x;
            this.y = y;
        }
        Pair(){}
    }

    static void bfs(){

        for(int i =0; i < n; i++){
            for(int j =0; j < n; j++){
                if(house[i][j] == 1){
                    Queue<Pair> Q = new LinkedList<>();

                    Q.add(new Pair(i,j));
                    house[i][j] = 0;
                    groupCnt++;
                    int cnt = 0;
                    while(!Q.isEmpty()){
                        Pair p  = Q.poll();
                        cnt++;
                        for(int k =0; k < 4; k++){

                            int tX = p.x + moveX[k];
                            int tY = p.y + moveY[k];

                            if(tX < 0 || tX >= n) continue;
                            if(tY <0 || tY >= n) continue;
                            if(house[tX][tY] == 0) continue;

                            Q.add(new Pair(tX, tY));
                            house[tX][tY] = 0;
                        }
                    }
                    result.add(cnt);
                }
            }
        }

        Collections.sort(result);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        String [] str = new String[n];
        house = new int [n][n];

        for(int i =0; i < n; i++)   str[i] = scan.next();

        for(int i =0; i < n; i++){
            for(int j =0; j < n; j++){
                house[i][j] = str[i].charAt(j) - '0';
            }
        }

        bfs();
        System.out.println(groupCnt);
        for(Integer i : result) System.out.println(i);
    }
}

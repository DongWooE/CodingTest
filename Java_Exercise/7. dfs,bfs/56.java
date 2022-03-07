import java.util.Scanner;

public class code57 {

    private int pCnt = 0;
    private int pTime = 0;
    private int maxScore = 0;

    private void DFS(int cur, Pair p, Pair arr []){
        if(p.time > pTime) return;
        if(cur == pCnt){
            maxScore = Math.max(maxScore,p.score);
        }
        else{
            Pair tmp = new Pair();
            tmp.time = arr[cur].time + p.time;
            tmp.score = arr[cur].score + p.score;
            DFS(cur+1, tmp, arr);
            DFS(cur+1, p, arr);
        }
    }

    public static class Pair{
        private int score;
        private int time;
        public Pair(){}
        public Pair(int score,int time){
            score = score;
            time = time;
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        code57 c = new code57();
        c.pCnt = scan.nextInt();
        c.pTime = scan.nextInt();
        Pair [] arr = new Pair [c.pCnt];
        for(int i =0; i < c.pCnt; i++){
            Pair tmp = new Pair();
            tmp.score = scan.nextInt();
            tmp.time = scan.nextInt();
            arr[i] = tmp;
        }
        c.DFS(0, new Pair(arr[0].time, arr[0].score), arr);
        System.out.println(c.maxScore);
    }

}

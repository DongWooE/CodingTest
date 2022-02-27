import java.util.*;

public class code25 {

    public static void solution(int[][] score, int n, int m){
        int answer =0;

        for(int i =1; i <= n; i++){
            for(int j =1; j <= n; j++){
                if(i == j) continue;
                int cnt = 0;
                for(int k =0; k < m; k++){
                    int pi=0,pj=0;
                    for(int s =0; s < n; s++){
                        if(score[k][s] == i) pi = s;
                        if(score[k][s] == j) pj = s;
                    }
                    if(pi > pj) cnt++;
                }
                if(cnt == m) answer++;
            }
        }
        System.out.println(answer);
    }


//    public static void solution(int[][] score, int n, int m){
//        ArrayList<ArrayList<Integer>> mentee = new ArrayList<ArrayList<Integer>>();
//        for(int i =0; i < n; i++){
//            mentee.add(new ArrayList<Integer>());
//        }
//
//
//        // 첫번째 탐색 - 삽입
//        for(int i = 1; i < n; i++){
//            for(int j =0; j < i; j++) {
//                mentee.get(score[0][j]-1).add(score[0][i]-1);
//            }
//        }
//
//        // 두번쨰 탐색 - 삭제
//        for(int i =1; i < m;i++){
//            for(int j = 0; j < n; j++){
//                for(int k =0; k < j; k++){
//                    int tmp = score[i][j] -1;
//                    int comp = score[i][k] -1;
//                    for(int index = 0; index < mentee.get(tmp).size(); index++){
//                        if(comp == mentee.get(tmp).get(index)){
//                            mentee.get(tmp).remove(index);
//                        }
//                    }
//                }
//            }
//        }
//
//        int cnt =0;
//        for(int i =0; i < n; i++)
//            cnt += mentee.get(i).size();
//        System.out.println(cnt);
//
//    }


    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int M = scanner.nextInt();
        int[][] score = new int[M][N];
        for(int i =0; i < M; i++)
            for(int j =0; j < N; j++){
                int tmp = scanner.nextInt();
                score[i][j] = tmp;
            }
        solution(score, N, M);
    }
}

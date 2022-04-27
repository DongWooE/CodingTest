import java.util.*;

public class bj11098 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        ArrayList<String> result = new ArrayList<>();

        for(int i =0; i < n; i++){

            int p = sc.nextInt();

            int maxMoney = 0;
            String bestPlayer = "";

            for(int j = 0; j < p; j++){
                int t1 = sc.nextInt();
                String t2 = sc.next();

                if(maxMoney < t1) {
                    bestPlayer = t2;
                    maxMoney = t1;
                }
            }

            result.add(bestPlayer);
        }

        for(String s : result)
            System.out.println(s);
    }
}

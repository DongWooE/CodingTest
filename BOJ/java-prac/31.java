import java.util.*;

public class code32 {
    public static void solution(int n , String str){
        HashMap<Character, Integer> map = new HashMap<>();

        for(char x : str.toCharArray()){
            map.put(x, map.getOrDefault(x,0)+1);
        }

        char tmp = ' ';
        int max = 0;
        for(char x : map.keySet()){
            if(map.get(x) > max){
                max = map.get(x);
                tmp = x;
            }
        }

        System.out.println(tmp);
    }

//    public static void solution(int n, String str){
//        HashMap<String, Integer> m = new HashMap<>();
//        String [] cand = {"A","B","C","D","E"};
//        for(int i =0; i < 5; i++){
//            m.put(cand[i], 0);
//        }
//
//        for(int i =1; i <= n; i++){
//            String tmp = str.substring(i-1,i);
//            int value = m.get(tmp);
//            m.put(tmp, value+1);
//        }
//
//        int max = 0, index = 0;
//        for(int i = 0; i < 5; i++){
//            if(m.get(cand[i]) > max){
//                max = m.get(cand[i]);
//                index = i;
//            }
//        }
//
//        System.out.println(cand[index]);
//    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        String str = s.next();
        solution(N, str);
    }
}

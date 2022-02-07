import java.util.*;

public class code33 {

    public static String solution(String str1, String str2){
        HashMap<Character, Integer> map = new HashMap<>();

        for(char s : str1.toCharArray()){
            map.put(s, map.getOrDefault(s, 0)+1);
        }

        for(char x : str2.toCharArray()){
            if(!map.containsKey(x) || map.get(x) == 0) return "NO";
            else map.put(x, map.get(x) -1);
        }

        return "YES";
    }

//    public static String solution(String str1, String str2){
//        HashMap<Character, Integer> map1 = new HashMap<>();
//        HashMap<Character, Integer> map2 = new HashMap<>();
//
//        for(char c : str1.toCharArray()){
//            map1.put(c, map1.getOrDefault(c, 0) +1);
//        }
//
//        for(char c : str2.toCharArray()){
//            map2.put(c, map2.getOrDefault(c, 0) +1);
//        }
//
//        String answer = "YES";
//        for(char x : map1.keySet()){
//            if(!map2.containsKey(x)){
//                answer = "NO";
//                break;
//            }
//            else if(!map1.get(x).equals(map2.get(x))){
//                answer = "NO";
//                break;
//            }
//        }
//        return answer;
//    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String s1 = s.next();
        String s2 = s.next();
        System.out.println(solution(s1, s2));
    }
}

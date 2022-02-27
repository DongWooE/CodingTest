import java.util.*;

public class code35 {
    public static void solution(String s, String t){

        HashMap<Character, Integer> map = new HashMap<>();
        for(char c : t.toCharArray()){
            map.put(c, map.getOrDefault(c,0)+1);
        }

        int n = t.length();
        int cnt = 0;

        HashMap<Character, Integer> mapRep = new HashMap<>();
        int rt = 0;
        for(; rt < n-1; rt++)
            mapRep.put(s.charAt(rt), mapRep.getOrDefault(s.charAt(rt), 0)+1);
        for(int lt = 0; rt < s.length(); rt++){
            mapRep.put(s.charAt(rt), mapRep.getOrDefault(s.charAt(rt), 0)+1);
            if(map.equals(mapRep)) cnt++;
            if(mapRep.get(s.charAt(lt)) > 1) mapRep.put(s.charAt(lt), mapRep.get(s.charAt(lt))-1);
            else mapRep.remove(s.charAt(lt));
            lt++;
        }

        System.out.println(cnt);

    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String S = s.next();
        String T = s.next();
        solution(S,T);
    }
}

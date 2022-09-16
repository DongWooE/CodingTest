import java.util.*;

public class PG_성격유형검사하기 {

    public String solution(String[] survey, int[] choices) {

        char[][] array = {{'R', 'T'}, {'C', 'F'}, {'J', 'M'}, {'A', 'N'}};

        // Map 만들기
        HashMap<Character, Integer> hashMap = new HashMap<Character, Integer>();

        for(int i = 0; i < 4; i++){
            for(int j =0; j < 2; j++){
                hashMap.put(array[i][j], 0);
            }
        }

        // 탐색 하면서 Map에 점수 더하기
        for(int i =0; i < survey.length; i++){
            int choice = choices[i] - 4;
            if(choice < 0){
                Integer o = hashMap.get(survey[i].charAt(0));
                hashMap.put(survey[i].charAt(0), o + choice*-1);
            }
            else{
                Integer o = hashMap.get(survey[i].charAt(1));
                hashMap.put(survey[i].charAt(1), o + choice);
            }
        }

        StringBuilder sb = new StringBuilder();

        for(int i = 0; i < 4; i++){
            Integer i1 = hashMap.get(array[i][0]);
            Integer i2 = hashMap.get(array[i][1]);
            if(i1 > i2) sb.append(array[i][0]);
            else sb.append(array[i][1]);
        }

        return sb.toString();
    }

    public static void main(String[] args) {

        PG_성격유형검사하기 ps = new PG_성격유형검사하기();

    }
}

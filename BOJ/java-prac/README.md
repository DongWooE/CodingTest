#  문제풀이 시에 유의사항, 모범답안 간략 정리

## 7.java (회문 문자열)
### 모범답안 #1 .
- for문을 str.length()/2 만큼 돌면서 현재 위치와 len-현재위치-1을 비교
### 모범답안 #2.
- StringBuilder를 reverse() 후에 equalsIgnoreCase로 비교
### 유의사항
- 하나의 String 자체를 toUpperCase(), toLowerCase()를 통해서 조작할 수 있다 
- String 비교 시에 '=='와 'equals'의 차이점을 인식하고 되도록 'equals'를 사용한다 

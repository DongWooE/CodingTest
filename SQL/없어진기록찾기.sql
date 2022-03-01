-- 코드를 입력하세요
SELECT ANIMAL_ID , NAME
FROM ANIMAL_OUTS 
WHERE ANIMAL_ID NOT IN (
    SELECT O.ANIMAL_ID
    FROM ANIMAL_OUTS AS O
    INNER JOIN ANIMAL_INS AS I
    ON O.ANIMAL_ID = I.ANIMAL_ID
)
ORDER BY ANIMAL_ID
ASC
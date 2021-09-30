# 1. Array and String

## Hash Table

효율적인 탐색을 위한 자료구조로써, 키와 값에 대응되는 구조이다. 해시테이블을 구성하는 방식은 연결리스트와 해시코드 함수 두 가지만 있으면 된다.

**해시테이블에 값을 넣는 경우**

1. 키의 해시코드를 계산, 키의 자료형은 보통 정수 자료형을 가진다. 키의 개수는 무한하지만, int의 유효 범위는 유한하기 때문에 서로 다른 두 개의 키가 같은 해시코드를 가리킬 수 있음.

2. hash(key) % array_length의 방식으로 해시코드 함수를 이용해 배열의 인덱스를 구함.

3. 각 인덱스에는 키와 값으로 이루어진 연결리스트가 존재하기에 키와 값을 해당 인덱스에 저장. 충돌에 대비하여 반드시 연결리스트를 이용해야 함.

## ArrayList와 가변 크기 배열
특정 언어에서 배열의 크기를 자동으로 조절할 수 있다. 데이터를 덧붙일 때마다 배열 혹은 리스트의 크기가 증가하며, 
동적 가변 크기 기능이 내재되어 있는 배열과 비슷한 자료구조를 원할 때에는 보통 ArrayList를 사용한다. 
이는 필요에 따라 크기를 변화시킬 수 있으면서도 O(1)의 접근 시간을 유지한다. 통상적으로 배열이 가득차는 순간 배열의 크기를 두 배로 늘린다.

```java
ArrayList merge(Stirng[] words, String[] more) {
    ArrayList sentence = new ArrayList();
    for (String w : words) sentence.add(2);
    for (String w : more) sentence.add(2);
    return sentence;
}
```

## StringBuilder
문자열의 리스트가 주어졌을 때 이 문자열들을 하나로 이어 붙이려고 한다. 이때의 시간 복잡도는 O(xn^2)가 된다. 
StringBuilder는 이 시간 복잡도를 단순하게 가변 크기 배열을 이용하여 해결을 해준다.

```java
Stirng joinWords(String[] words) {
    StringBuilder sentence = new StringBuilder();
    for (String w : words) {
        sentence.append(w);
    }
    return sentence.toString();
}
```

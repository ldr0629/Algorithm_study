# 3.Stack
데이터를 쌓아 올린다는 의미로 스택은 LIFO(Last-In-First-Out)에 따라 자료를 배열한다.
접시를 쌓아 두었다가 사용할 때와 마찬가지로, 가장 최근에 스택에 추가한 항목이 가장 먼저 제거될
항목이라는 것이다.

스택에는 다음과 같은 연산이 존재한다.

- pop() : 스택에서 가장 위에 있는 항목을 제거한다.

- push(item) : item 하나를 스택의 가장 윗 부분에 추가한다.

- peek() : 스택의 가장 위에 있는 항목을 반환한다.

- isEmpty() : 스택이 비어 있을 때에 true를 반환한다.

배열과 달리 스택은 상수 시간에 i번째 항목에 접근할 수 없지만 스택에서 데이터를 추가하거나 삭제하는 
연산은 상수 시간에 가능하다. 배열처럼 원소들을 하나씩 옆으로 밀어 줄 필요가 없기 때문이다.

## 스택 구현

스택은 같은 방향에서 아이템을 추가하고 삭제한다는 조건하에 연결리스트로 구현할 수도 있다.


>스택이 유용한 경우는 재귀 알고리즘을 사용할 때이며, 재귀적으로 함수를 호출해야 하는 경우에
임시 데이터를 스택에 넣어주고, 재귀 함수를 빠져 나와 퇴각 검색을 할 때는 스택에 넣어 두었던
임시 데이터를 빼줘야 한다. 스택은 이러한 일련의 행위를 직관적으로 가능하게 해준다.

```java
public class MyStack {
	private static class StackNode {
		private T data;
		private StackNode next;
		public StackNode(T data) {
			this.data = data;
		}
	}

	private StackNode top;
	public T pop() {
		if(top == null) throw new EmptyStackException();
		T item = top.data;
		top = top.next;
		return item;
	}

	public void push(T item) {
		StackNode t = new StackNode(item);
		t.next = top;
		top = t;
	}

	public T peek() {
		if(top == null) throw new EmptyStackException();
		return top.data;
	}

	public boolean isEmpty() {
		return top == null;
	}
}
```

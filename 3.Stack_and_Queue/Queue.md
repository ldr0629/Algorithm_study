# 3.Queue
큐는 FIFO(First-In-First-Out) 순서를 따른다. 매표소 앞에 서 있는 사람들이 움직이는
형태와 같이, 큐에 저장되는 항목들은 큐에 추가되는 순서대로 제거된다.

큐에는 다음과 같은 연산이 존재한다.

- add(item) : item을 리스트의 끝 부분에 추가한다.

- remove() : 리스트의 첫 번째 항목을 제거한다.

- peek() : 큐에서 가장 위에 있는 항목을 반환한다.

- isEmpty() : 큐가 비어 있을 때에 true를 반환한다.

## 큐 구현

큐 또한 연결리스트로 구현할 수 있으며, 연결리스트의 반대 방향에서 항목을 추가하거나 제거하도록
구현한다면 근본적으로 큐와 같다.

>큐는 너비 우선 탐색(breadth-first search)을 하거나 캐시를 구현하는 경우에 종종 사용된다.

```java
public class MyQueue {
	private static class QueueNode {
		private T data;
		private QueueNode next;
		public QueueNode(T data) {
			this.data = data;
		}
	}

	private QueueNode first;
	private QueueNode last;
	public void add(T item) {
		QueueNode t = new QueueNode(item);
		if(last != null) {
			last.next = t;
		}
		last = t;
		if(first == null) {
			first = last;
		}
	}

	public T remove() {
		if(first == null) throw new NoSuchElementException();
		T data = first.data;
		first = first.next;
		if(first == null) {
			last = null;
		}
		return data;
	}

	public T peek() {
		if(first == null) throw new NoSuchElementException();
		return first.data;
	}

	public boolean isEmpty() {
		return first == null;
	}
}
```

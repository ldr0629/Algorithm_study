# 2.Linked list

## 연결리스트 만들기

this 포인터를 통해 head 노드의 주소를 참조하는 방법을 사용하였지만 여러 객체들이 동시에 연결리스트를 참조하는 도중에 head가 바뀌게 되면 어떤 방법을 사용해야 하는지 생각해보아야 한다.

```java
class Node {
    Node next = null;
    int data;
    public Node(int d) {
        data = d;
    }
    
    void appendToTail(int d) {
        Node end = new Node(d);
        Node n = this;
        while (n.next != null) {
            n = n.next;
        }
        n.next = end;
    }
}
```

## 단방향 연결리스트에서 노드 삭제
연결리스트에서 노드를 삭제하는 연산은 꽤 직관적이다. 노드 n이 주어지면 그 이전 노드인 prev를 찾아 prev.next 가 n.next와 같도록 설정하는 방법이다. 
양방향 연결리스트인 경우에는 조금 다르다. 앞에 있는 즉, n.next의 prev가 n.prev와 이어지도록 하면 된다. 따라서 n.next.prev == n.prev라는 의미가 된다.

```java
Node deleteNode(Node head, int d) {
    Node n = head;
    if (n.data == d) {
        return head.next;
    }
    
    while (n.next != null) {
        if (n.next.data == d) {
            n.next = n.next.next;
            return head;
        }
        n = n.next;
    }
    return head;
}
```
## Runner 기법

Runner은 부가 포인터라고도 한다. 이는 연결리스트 문제에서 많이 활용되는 기법이며, 연결리스트를 순회할 때 두 개의 포인터를 동시에 사용하는 것이다. 
한 포인터가 다른 포인터보다 앞서도록 해야하며, 앞선 포인터가 뒤에 따라오는 포인터보다 항상 지정된 개수만큼을 앞서도록 할 수도 있고, 
아니면 따라오는 포인터를 여러 노드를 한 번에 뛰어넘도록 설정할 수도 있다.

## 재귀 문제

연결리스트 관련 문제 가운데 상당수는 재귀 호출에 의존하기 때문에 문제를 푸는 데 어려움을 겪고 있다면, 재귀적 접근법은 통할지 확인해봐아야 한다. 
재귀 호출 깊이가 n이 될 경우, 해당 재귀 알고리즘이 적어도 O(n) 만큼의 공간을 사용한다는 특징이 있다.

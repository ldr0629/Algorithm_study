# 4.Tree
사이클이 존재하지 않는 비순환 그래프로, 각 노드들은 어떤 자료형으로도 표현 가능하다.

- 트리는 노드로 이루어진 자료구조로써, 하나의 루트 노드를 갖는다.

- 루트 노드는 0개 이상의 자식 노드를 갖고 있다.

- 그 자식 노드 또한 0개 이상의 자식 노드를 갖고 있고, 이는 반복적으로 정의된다.

## Node 클래스
```java
class Node {
	public String name;
	public Node[] children;
}

class Tree {
	public Node root;
}
```

## 트리 vs 이진 트리

이진 트리는 각 노드가 최대 두 개의 자식을 갖는 트리를 말하며, 모든 트리가 이진 트리는 아니다.
종종 이진 트리가 아닌 트리가 있는데 예컨대, 전화번호를 표현할 때 각 노드가 11개의 자식(하나당 숫자 하나)를
갖는 11차 트리를 사용해야 할 것이다. 자식이 없는 노드는 **'말단'** 노드라고 부른다.

## 이진 트리 vs 이진 탐색 트리

이진 탐색 트리는 모든 노드가 다음과 같은 특정 순서를 따르는 속성이 있는 이진 트리를 일컫는다.
'모든 왼쪽 자식들 <= n < 모든 오른쪽 자식들'에 대한 속성은 모든 노드 n에 대해서 반드시 참이어야 한다.

## 완전 이진 트리

트리의 모든 높이에서 노드가 꽉 차 있는 이진 트리를 말한다. 마지막 단계는 꽉 차 있지 않아도
되지만 노드가 왼쪽에서 오른쪽으로 채워져 있어야 한다.

## 전 이진 트리

모든 노드의 자식이 없거나 정확히 두 개 있는 경우를 말한다. 즉, 자식이 하나만 있는 노드가
존재해서는 안 된다.

## 포화 이진 트리

모든 말단 노드는 같은 높이에 있어야 하며, 마지막 단계에서 노드의 개수가 최대가 되어야 한다. 포화 이진 트리는 노드의 개수가 2^k-1개(k는 트리의 높이)여야 한다는 점에서 흔히 나타나는 경우는 아니다.

## 이진 트리 순회

순회 방법은 preorder, inorder, postorder가 있으며 가장 빈번하게 사용되는 순회 방식은 중위 순회이다.

## 전위 순회

>자식 노드보다 현재 노드를 먼저 방문하는 방법을 말한다. 전위 순회에서 가장 먼저 방문하게 될 노드는
언제나 루트이다.

```java
void preOrderTraversal(TreeNode node) {
	if(node != null) {
		visit(node);
		preOrderTraversal(node.left);
		preOrderTraversal(node.right);
	}
}
```

## 중위 순회

>왼쪽 서브트리, 현재 노드, 오른쪽 서브 트리 순서로 노드를 방문하고 출력하는 방법을 말한다.
이진 탐색 트리를 중위 순회로 방문한다면 오름차순으로 방문하게 된다.

```java
void inOrderTraversal(TreeNode node) {
	if(node != null) {
		preOrderTraversal(node.left);
		visit(node);
		preOrderTraversal(node.right);
	}
}
```

## 후위 순회

>모든 자식 노드들을 먼저 방문한 뒤 마지막에 현재 노드를 방문하는 방법을 말한다. 후위 순회에서 
가장 마지막에 방문하게 될 노드는 언제나 루트이다.

```java
void postOrderTraversal(TreeNode node) {
	if(node != null) {
		preOrderTraversal(node.left);
		preOrderTraversal(node.right);
		visit(node);
	}
}
```

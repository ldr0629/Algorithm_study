# 그래프 탐색
그래프를 탐색하는 일반적인 방법 두 가지로 깊이 우선 탐색(Depth-First-Search)과 
너비 우선 탐색(Breadth-First-Search)이 있다. 

깊이 우선 탐색은 루트 노드에서 시작해서 다음 분기로 넘어가기 전에 해당 분기를 완벽하게 탐색하는 방법을 말하며, 깊게 탐색한다는 뜻이다.
너비 우선 탐색은 루트 노드에서 시작해서 인접한 노드를 먼저 탐색하는 방법을 말하며, 넓게 탐색한다는 뜻이다.

DFS는 그래프에서 모든 노드를 방문하고자 할 때 더 선호되는 편이다. 둘 중 아무거나 사용해도
상관은 없지만,  DFS가 좀 더 간단하다. 하지만 두 노드 사이의 최단 경로 혹은 임의의 경로를 찾고 싶을 때는
BFS가 일반적으로 더 낫다.

## 깊이 우선 탐색(DFS)
>a라는 노드를 방문한 뒤 a와 인접한 노드들을 차례로 순회한다. a와 이웃한 노드 b를 방문했다면,
a와 인접한 또 다른 노드를 방문하기 전에 b의 이웃 노드들을 전부 방문해야 한다. 즉, b의 분기를 전부
완벽하게 탐색한 뒤에서야 a의 다른 이웃 노드를 방문할 수 있다는 의미이다.
그래프 탐색의 경우 어떤 노드를 방문했었는지 여부를 반드시 검사해야 한다. 이를 검사하지 않을 경우
무한루프에 빠질 위험이 있다.

```java
void search(Node root) {
	if(root == null) return;
	visit(root);
	root.visited = true;
	for each (Node n in root.adjacent) {
		if(n.visited == false) {
			search(n);
		}
	}
}
```

## 너비 우선 탐색(BFS)
>BFS는 재귀적으로 동작하지 않고 큐를 사용한다. a 노드에서 시작한다고 했을 때, a 노드의 이웃 노드를
모두 방문한 다음에 이웃의 이웃들을 방문한다. 일반적으로 큐를 이용해서 반복적 형태로 구현하는 것이
가장 잘 동작한다.

```java
void search(Node root) {
	Queue queue = new Queue();
	root.marked =true;
	queue.enqueue(root); // 큐의 끝에 추가한다.
	
	while (!queue.isEmpty()) {
		Node r = queue.dequeue(); // 큐의 앞에서 뽑아낸다.
		visit(r);
		for each (Node n in r.adjacent) {
			if(n.marked == false) {
				n.marked = true;
				queue.enqueue(n);
			}
		}
	}
}
```

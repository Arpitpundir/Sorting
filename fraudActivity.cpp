static int activityNotifications(int[] arr, int d) {
		
		PriorityQueue<Integer> leftHeap = new PriorityQueue<Integer>(new Comparator<Integer>() {
			public int compare(Integer a, Integer b) {
				return a.compareTo(b) * -1;
			}
		});
		PriorityQueue<Integer> rightHeap = new PriorityQueue<Integer>();
		
		double median = 0;
		int count = 0;
		
		for (int i = 0; i < arr.length; i++) {
			if (i < d) {
				if (leftHeap.size() == rightHeap.size()) {
					rightHeap.add(arr[i]);
					leftHeap.add(rightHeap.poll());
					rightHeap.add(leftHeap.poll());
					median = (double)rightHeap.peek();
				} else {
					rightHeap.add(arr[i]);
					leftHeap.add(rightHeap.poll());
					median = (double)(rightHeap.peek() + leftHeap.peek())/2;
				}
			} 
      else {
				if ((double)arr[i] >= median*2)
					count++;
				if (arr[i - d] >= rightHeap.peek()) {
					rightHeap.remove(arr[i - d]);
					rightHeap.add(arr[i]);
					leftHeap.add(rightHeap.poll());
					rightHeap.add(leftHeap.poll());
					if (leftHeap.size() == rightHeap.size()) {
						median = (double)(rightHeap.peek() + leftHeap.peek())/2;
					} else {
						median = (double)rightHeap.peek();
					}
				} else {
					leftHeap.remove(arr[i - d]);
					leftHeap.add(arr[i]);
					rightHeap.add(leftHeap.poll());
					leftHeap.add(rightHeap.poll());
					if (leftHeap.size() == rightHeap.size()) {
						median = (double)(rightHeap.peek() + leftHeap.peek())/2;
					} else {
						median = (double)rightHeap.peek();
					}
				}
			}
		}
		
		return co
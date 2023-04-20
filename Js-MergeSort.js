function mergeSortedArrays(left, right){
  let n1 = left.length, n2  = right.length, i = 0, j = 0, ans = [];
  while(i<n1 || j<n2){
    if(i<n1 && j<n2){
      if(left[i]<=right[j]){
        ans.push(left[i]);
        i++;
      }else{
        ans.push(right[j]);
        j++;
      }
    }else if(i<n1){
      ans.push(left[i]);
      i++;
    }else{
      ans.push(right[j]);
      j++;
    }
  }
  return ans;
}
function mergeSortRecursive(arr, st, end){
  if(st === end) return [arr[st]];
  let mid = st + Math.floor((end-st)/2);
  if(Number.isInteger(mid) === false){
    return;
  }
  let left = mergeSortRecursive(arr, st, mid);
  let right = mergeSortRecursive(arr, mid+1, end);
  return mergeSortedArrays(left, right);
}
function mergeSort(arr){
  return mergeSortRecursive(arr, 0, arr.length-1);
}

let a1 = [4,2];
console.log(mergeSort(a1));

let a2 = [1,2,3];
console.log(mergeSort(a2));

let a3 = [1];
console.log(mergeSort(a3));
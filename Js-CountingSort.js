function finMinMax(arr){
  let min = Number.MAX_VALUE, max = Number.MIN_VALUE;
  for(const i = 0;i<arr.length;i++){
    if(arr[i] > max){
      max = arr[i];
    }
    if(arr[i] < min){
      min = arr[i];
    }
  }

  return {min, max};
}
function CountingSort(arr){
  const {min, max} = finMinMax(arr);
  
}
function bubbleSort(array){
  let swaps = 1;
  while(swaps){
    swaps=0;
    for(let i = 0;i<array.length-1;i++){
      if(array[i] > array[i+1]){
        const temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
        swaps++;
      }
    }
  }
  return array;
};

let a1 = [4,2,1];
console.log(bubbleSort(a1));

let a2 = [1,2,3];
console.log(bubbleSort(a2));

let a3 = [1];
console.log(bubbleSort(a3));

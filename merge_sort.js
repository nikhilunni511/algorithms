function merge(arr, l, m, r) {
    console.log(`l: ${l}, m: ${m}, r: ${r}`)
    const lNewArr = [], rNewArr = [], n1 = m - l + 1, n2 = r - m;
    for (let i = 0; i < n1; i++) {
        lNewArr.push(arr[l + i]);
    }
    for (let i = 0; i < n2; i++) {
        rNewArr.push(arr[m + 1 + i]);
    }
    console.log('l array : ', n1);
    console.log('R array : ', n2);
    let i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (lNewArr[i] <= rNewArr[j]) {
            arr[k] = lNewArr[i];
            
            i++;
        }
        else {
            arr[k] = rNewArr[j];
            
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = lNewArr[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = rNewArr[j];
        j++;
        k++;
    }
    console.log('left : ', lNewArr)
    console.log('right : ', rNewArr)
    console.log('full : ', arr)
}

function mergeSort(arr, l, r) {
    if (l >= r) {
        return;
    }
    const m = l + parseInt((r - l) / 2);
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}

const arr = [2, 6, 4, 3, 1, 5];
mergeSort(arr, 0, arr.length - 1);
console.log(arr);
// merge(arr, 0, 2, 5);

# Running for Ubuntu

This is example 2 of Algorithm and Complexity Course in VNU - HCMUS

## Command for someSum

To running someSum.cpp and visualization.py you just do it

```bash
bash someSum.sh
```

## Visualization for someSum

![Result](image/someSum.png)

## Explain 

We are easy to predict complexity of someSum is  n<sup>3</sup> ( O(n<sup>3</sup>)). In first loop, we i variable is from 1 to n. Morever, j variable is from (n - i)  to 
i<sup>2</sup> . Therefore, someSum's number of operation is equal or less than n<sup>3</sup> operations.

``` C++
int SomeSum(int n, int& countAssign, int& countCompare){
    int sum = 0, i = 1;
    countAssign += 2;
    int j;

    while (++countCompare && i <= n){
        j = n - i;
        countAssign++;
        while (++countCompare && j < i*i){
            sum = sum + i*j;
            countAssign++;
            j = j+1;
            countAssign++;
        }
        i = i + 1;
        countAssign++;
    }

    return sum;
}
```


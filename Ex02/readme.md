# Running for Ubuntu

This is example 2 of Algorithm and Complexity Course in VNU - HCMUS

## Command for someSum

To running someSum.cpp and visualization.py you just do it

```bash
cd AlgorithmsAndComplexity/Ex02/src
bash someSum.sh
```

## Visualization for someSum

Compare your result with this image.

![Result](image/someSum.png)

## Inference 

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

## Prove by limit 

**Common orders of growth.**

|Code   | Notation | Code|
|-----  | -------- | :--- |
|Linear | <img src="https://render.githubusercontent.com/render/math?math=O(n^3)">| for (int i = 0; i < n; ++i) { </br> &nbsp; &nbsp; &nbsp; op();</br>&nbsp; &nbsp; &nbsp; for (int j = n-i; j < i*i; ++j) </br> &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; op(); </br> }|

**Function of number of opertions**

<img src="https://render.githubusercontent.com/render/math?math=f(n) = g(n) %2B h(n)">

**Function of number of assign**

<img src="https://render.githubusercontent.com/render/math?math=g(n) = 2 %2B \sum_{i=1}^{n} ( 2 %2B \sum_{j=n-i}^{ i^2 }2)">

</br>

<img src="https://render.githubusercontent.com/render/math?math=\lim_{n \to \infty} (g(n)) = 2n^3">

**Function of number of compare**

<img src="https://render.githubusercontent.com/render/math?math=h(n) = \sum_{i=1}^{n}\sum_{j=n-i}^{i^2}1">

</br>
<img src="https://render.githubusercontent.com/render/math?math=\lim_{n \to \infty} (h(n)) = n^3">

**Comapre with <img src="https://render.githubusercontent.com/render/math?math=n^3">**

<img src="https://render.githubusercontent.com/render/math?math=\lim_{n \to \infty} (f(n)) =  \lim_{n \to \infty} (g(n) %2B h(n))">

</br>

<img src="https://render.githubusercontent.com/render/math?math=\lim_{n \to \infty} (f(n)) = 3n^3">

</br>

<img src="https://render.githubusercontent.com/render/math?math=\lim_{n \to \infty} (\frac{f(n)}{n^3}) = 3">

</br>

Therefore, Big-O of someSum is  <img src="https://render.githubusercontent.com/render/math?math=n^3">

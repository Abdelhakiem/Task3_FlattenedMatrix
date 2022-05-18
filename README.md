# Task3_FlattenedMatrix
A c++ program for flattening a 3 d matrix to a 1d vector.

## Code Explaination:
**The whole code is encapsulated in MatrixFlatteing class, which has the following methods:**

 There are two major methods **(the required in the task)** which are: 

> ConvertIndex and Create1DVec. 

And four minor methods which are:

> Fill3DMatrix, Print3D, Print1D, Run.

```
1- Fill3DMatrix : assigning values in the 3d matrix.

2- Create1DVec : Intializing and filling 1d vector from values in 3d matrix.

3- ConvertIndex : converts the indexes of the 3d matrix to an equivelant index in the 1d vector.

4- Print3D : prints the 3d matrix.

5- Print1D : prints the 1d vector

6- Run : an algorithm for calling other methods in MatrixFlatteing class for getting the desired task done.  
```
## Testing:

Two test samples are provided in cmake-build-debug directory with the following names:
input1.txt, input2.txt, output1.txt, output2.txt.

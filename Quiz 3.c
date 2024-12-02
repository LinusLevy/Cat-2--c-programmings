An arrays is powerful data structure in c programming language that allows users to store data elements

Required:

       i.          Define an array data structure                                                                       

     ii.          Declare an  initialize a 2D array named scores with 2 rows and 2 columns using the following values  ,



   iii.          Print the elements of the above array using a nested for loop


Answer text Question 3
i.An array is a data structure that stores a collection of elements of the same data type in the contiguous memory location.

ii.The code declares two 2D array called scores with two rows and columns.The data types of the elements in the array is int which means they are integers.the values are initialized using curly braces, with each row enclosed in its own set of braces.

iii.    #include <stdio .h>

      

       int main()  {

               int scores[2] [2] = { {65, 92} },

                //print the  elements of the 

                for (int i =0; i<2;i++) {

                      for (int  j =0;j<2; j+

                            print f ("%d",scores [

                       }

                       print f  ("/n");

               }

               

                return  0;

        }











The output are :

        65  92

        84   72
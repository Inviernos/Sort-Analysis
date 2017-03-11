#include <iostream>
#include <vector>
#include <time.h>
#include <cstdlib>

using namespace std;

//function prototypes
void insertionSort(vector<int> &,int,int);
void quickSort(vector<int> &,int,int);
int selectPivot(vector<int> &,int,int);
void Swapping(vector<int> &,int,int);

//global variables
int step = 0;

int main()
{
    //make variables
    srand(time(NULL));
    int randomnum;

    vector<int> random1(100);
    vector<int> random2(100);

    //input integers for first data set
   for(unsigned int n = 0;n<random1.size();n++)
   {
       randomnum = rand() % 20000 + 1;
       random1[n] = randomnum;
       random2[n] = randomnum;
   }



   std::cout << "n = 100 \n";


   //use the insertionSort algorithm
   insertionSort(random1,0,random1.size()-1);
   std::cout << "Insertion Steps: " << step << "\n";


   step = 0;

    //use the QuickSort algorithm
   quickSort(random2,0,random2.size()-1);

   std::cout << "QuickSort Steps: " << step << "\n";

   //resize the vectors
   random1.resize(200);
   random2.resize(200);

   //input integers for first data set
   for(unsigned int n = 0;n<random1.size();n++)
   {
       randomnum = rand() % 20000 + 1;
       random1[n] = randomnum;
       random2[n] = randomnum;
   }

   std::cout << "n = 200 \n";

   step = 0;

   //use the insertionSort algorithm
   insertionSort(random1,0,random1.size()-1);
   std::cout << "Insertion Steps: " << step << "\n";


   step = 0;

    //use the QuickSort algorithm
   quickSort(random2,0,random2.size()-1);
   std::cout << "QuickSort Steps: " << step << "\n";

   //resize the vectors
   random1.resize(400);
   random2.resize(400);

   //input integers for first data set
   for(unsigned int n = 0;n<random1.size();n++)
   {
       randomnum = rand() % 20000 + 1;
       random1[n] = randomnum;
       random2[n] = randomnum;
   }

   std::cout << "n = 400 \n";

   step = 0;

   //use the insertionSort algorithm
   insertionSort(random1,0,random1.size()-1);
   std::cout << "Insertion Steps: " << step << "\n";


   step = 0;

    //use the QuickSort algorithm
   quickSort(random2,0,random2.size()-1);
   std::cout << "QuickSort Steps: " << step << "\n";

   //resize the vectors
   random1.resize(800);
   random2.resize(800);

   //input integers for first data set
   for(unsigned int n = 0;n<random1.size();n++)
   {
       randomnum = rand() % 20000 + 1;
       random1[n] = randomnum;
       random2[n] = randomnum;
   }

   std::cout << "n = 800 \n";

   step = 0;

   //use the insertionSort algorithm
   insertionSort(random1,0,random1.size()-1);
   std::cout << "Insertion Steps: " << step << "\n";


   step = 0;

    //use the QuickSort algorithm
   quickSort(random2,0,random2.size()-1);
   std::cout << "QuickSort Steps: " << step << "\n";

    //resize the vectors
   random1.resize(1600);
   random2.resize(1600);

   //input integers for first data set
   for(unsigned int n = 0;n<random1.size();n++)
   {
       randomnum = rand() % 20000 + 1;
       random1[n] = randomnum;
       random2[n] = randomnum;
   }

   std::cout << "n = 1600 \n";

   step = 0;

   //use the insertionSort algorithm
   insertionSort(random1,0,random1.size()-1);
   std::cout << "Insertion Steps: " << step << "\n";


   step = 0;

    //use the QuickSort algorithm
   quickSort(random2,0,random2.size()-1);
   std::cout << "QuickSort Steps: " << step << "\n";

    //resize the vectors
   random1.resize(3200);
   random2.resize(3200);

   //input integers for first data set
   for(unsigned int n = 0;n<random1.size();n++)
   {
       randomnum = rand() % 20000 + 1;
       random1[n] = randomnum;
       random2[n] = randomnum;
   }

   std::cout << "n = 3200 \n";

    step = 0;

   //use the insertionSort algorithm
   insertionSort(random1,0,random1.size()-1);
   std::cout << "Insertion Steps: " << step << "\n";


   step = 0;

    //use the QuickSort algorithm
   quickSort(random2,0,random2.size()-1);
   std::cout << "QuickSort Steps: " << step << "\n";

   //resize the vectors
   random1.resize(6400);
   random2.resize(6400);
   //input integers for first data set
   for(unsigned int n = 0;n<random1.size();n++)
   {
       randomnum = rand() % 20000 + 1;
       random1[n] = randomnum;
       random2[n] = randomnum;
   }

   std::cout << "n = 6400 \n";

   step = 0;

   //use the insertionSort algorithm
   insertionSort(random1,0,random1.size()-1);
   std::cout << "Insertion Steps: " << step << "\n";


   step = 0;

    //use the QuickSort algorithm
   quickSort(random2,0,random2.size()-1);
   std::cout << "QuickSort Steps: " << step << "\n";

    //resize the vectors
   random1.resize(12800);
   random2.resize(12800);

   //input integers for first data set
   for(unsigned int n = 0;n<random1.size();n++)
   {
       randomnum = rand() % 20000 + 1;
       random1[n] = randomnum;
       random2[n] = randomnum;
   }

   std::cout << "n = 12800 \n";

   step = 0;

   //use the insertionSort algorithm
   insertionSort(random1,0,random1.size()-1);
   std::cout << "Insertion Steps: " << step << "\n";


   step = 0;

    //use the QuickSort algorithm
   quickSort(random2,0,random2.size()-1);
   std::cout << "QuickSort Steps: " << step << "\n";


}
void Swapping(vector<int> &v,int firstindex,int secondindex)
{
    int temp = v[firstindex];
    v[firstindex] = v[secondindex];
    v[secondindex] = temp;
}
void insertionSort(vector<int> &v,int left,int right)
{
    //go to the next element in the data set
    for(int i = left;i <= right;i++)
    {
        step += 1;

        //compare this element to the other elements on the left.
        for(int j = i; j > 0 && v[j] < v[j-1]; j--)
        {
            Swapping(v,j,j-1);
            step += 1;
        }
    }


}


void quickSort(vector<int> &v,int left,int right)
{
    //do 10 elements at a time
    if(left + 10 <= right)
    {
        int pivot = selectPivot(v,left,right);

        int i = left;
        int j = right-1;

        //did the index i pass j
       while(i < j)
      {

        //find a value that is less than the pivot
        while( v[ ++i ] < pivot)
        {
            step+=1;

        }

        //find a value that is greater than the pivot
        while( pivot < v[ --j ])
        {
            step+=1;

        }

        //did the index pass each other
        if(i<j)
        {
            step+=1;
            Swapping(v, i , j);
        }


      }

      step+=1;

      //switch the pivot
      Swapping(v,i, right-1);

      //sort the rest of the array
      quickSort( v, left, i-1);
      quickSort( v,i+1,right);

    }
    else
    {
        //use the insertion sort after cutoff
        insertionSort( v, left, right-1);
    }

}


//select the pivot for quicksort
int selectPivot(vector<int> &v,int left,int right)
{
    int center = (left+right)/2;

    //the first element is bigger than the center
    if(v[center] < v[left])
    {
        step+=1;
        Swapping(v,left,center);
    }

    //the last element is bigger than the first element
    if(v[right] < v[left])
    {
        step+=1;
        Swapping(v,left,right);
    }

    //the center element is bigger than the center
    if(v[right] < v[center])
    {
        step+=1;
        Swapping(v,center,right);
    }


    step+=1;

    //swap the pivot
    Swapping(v,center,right-1);

    return v[right-1];

}

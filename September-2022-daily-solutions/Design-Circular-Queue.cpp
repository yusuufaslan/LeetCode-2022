/*
    author: @yusuufaslan
    Date: 25 September 2022
    Problem number at LeetCode: 622
    Problem name: Design Circular Queue
    level: medium
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <bits/stdc++.h>
#include <queue>

using namespace std;

class MyCircularQueue {
public:
    int size;
    int* arr; 
    int front;
    int rear;

    MyCircularQueue(int k) {
        front = -1;
        rear = -1;
        size = k;
        arr = new int[k];
    }

    ~MyCircularQueue() {
        delete [] arr;
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        else if (front == -1){
            front = 0;
            rear = 0;
            arr[rear] = value;
        }
        else if (rear == size - 1 && front != 0){
            rear = 0;
            arr[rear] = value;
        }
        else {
            arr[++rear] = value;
        }
        return true;
    }
    
    bool deQueue() {
        if (front == -1)
            return false;
        
        int value = arr[front];
        arr[front] = -1;

        if(front == rear) {
            front = -1;
            rear = -1;
        }
        else if (front == size - 1) {
            front = 0;
        }
        else {
            front++;
        }
        return true;
    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }
        else {
            return arr[front];
        }
    }
    
    int Rear() {
        if(isEmpty()){
            return -1;
        }
        else {
            return arr[rear];
        }
    }
    
    bool isEmpty() {
        if (front == -1)
            return true;
        else return false;
    }
    
    bool isFull() {
        if ((front == 0 && rear == size - 1) || (rear == front - 1))
            return true;
        else return false;
    }
};

int main(int argc, char const *argv[])
{
    MyCircularQueue* obj = new MyCircularQueue(2);
    cout << obj->enQueue(1) << endl;
    cout << obj->enQueue(2) << endl;
    cout << obj->deQueue() << endl;
    cout << obj->enQueue(3) << endl;
    cout << obj->deQueue() << endl;
    cout << obj->enQueue(3) << endl;
    cout << obj->deQueue() << endl;
    cout << obj->enQueue(3) << endl;
    cout << obj->deQueue() << endl;
    cout << obj->Front() << endl;

    return 0;
}

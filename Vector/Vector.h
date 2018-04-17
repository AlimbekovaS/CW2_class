#pragma once
#include<iostream>
#include<iomanip>
using namespace std;
class vector
{
private:
	int cur_size;
	int buf_size;
	int *els;

public:
	vector() {  //констр по умолчанию
		cur_size = 0;
		buf_size = 0;
		els = nullptr;
	}
	vector(int size) //параметризованный констр
	{
		this->cur_size = size;
		this->buf_size = size;
		this->els = new int[buf_size];
		for (int i = 0;i < buf_size;i++)
		{
			els[i] = 0;
		}
	
	}
	vector(const vector&src) //копирование 
	{
		this -> cur_size = src.cur_size;
		this->buf_size = src.cur_size;
		this->els = new int[cur_size];
		for (int i = 0;i < cur_size;i++)
		{
			els[i] = src.els[i];
		}
	}
	void print()
	{
		for (int i = 0;i < cur_size; i++)
		{
			cout <<right<<setw(5) <<els[i];
		}
		
	}

	void push_back(const int &e) //метод расширения массива в конце
	{
		
		if (cur_size >= buf_size)
		{
			int *temp;
			buf_size *= 2;
			temp = new int[buf_size];
			for (int i = 0;i < cur_size;i++)
				temp[i] = els[i];
			delete[] els;
			els = temp;	
		}
		els[cur_size++] = e;
	}
	void insert(const int &el, const int &index)
	{
		int *temp;
		if (cur_size >= buf_size)
		{	
			buf_size += 5;
			temp = new int[buf_size];
			for (int i = 0;i < index;i++)
			{
				temp[i] = els[i];
			}
			els[index] = el;
			for (int i = index + 1;i < buf_size;i++)
				temp[i] = els[i];
			delete[] els;

			els = temp;
		}
	}

	void pop_back() //удаление эл с конца
	{
		if (cur_size > 0)
			cur_size--;
	}
	int & at(int pos)
	{	
		els[cur_size++] = 0;
		return els[pos - 1];
	}
	~vector()
	{
		delete[] els;
		els = nullptr;

	}
};
//akbayanb
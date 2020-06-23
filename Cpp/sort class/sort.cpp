#include <string.h>
#include <iostream>
#include <string>

using namespace std;




int length(int a)
{
	if (a == 0)
		return 1;

	int i=0;

	while ( a != 0 )
	{
		i=i+1;
		a=a/10;
	}

	return i;
}

int length(int a[])
{
	int i=0;

	while ( a[i] != '\0' )
	{
		i=i+1;
	}

	return i;
}

int length(float a[])
{
	int i=0;

	while ( a[i] != '\0' )
	{
		i=i+1;
	}

	return i;
}

int length(double a[])
{
	int i=0;

	while ( a[i] != '\0' )
	{
		i=i+1;
	}

	return i;
}

int length(char a[])
{
	int i=0;

	while ( a[i] != '\0' )
	{
		i=i+1;
	}

	return i;
}

int length(string a)
{
	int i=0;

	while ( a[i] != '\0' )
	{
		i=i+1;
	}

	return i;
}

int length ( string a[] )
{

	int i=0;

	while ( a[i].length() > 0 )
	{
		i=i+1;
	}

	return i;
}



void swap (int &a, int &b)
{
	int aux;

	aux = a;
	a = b;
	b = aux;
}

void swap (float &a, float &b)
{
	float aux;

	aux = a;
	a = b;
	b = aux;
}

void swap (double &a, double &b)
{
	double aux;

	aux = a;
	a = b;
	b = aux;
}

void swap (char &a, char &b)
{
	char aux;

	aux = a;
	a = b;
	b = aux;
}

void swap (string a, string b)
{
	string aux;

	aux = a;
	a = b;
	b = aux;
}


void sort (int a[]) 
{
	int size = length (a);
	
	for (int i=0; i<size-1; i=i+1)
		for (int k=i+1; k<size; k=k+1)
			if ( a[i] > a[k] )
				{
					swap(a[i], a[k]);
				}
}

void sort_invert (int a[]) 
{
	int size = length (a);
	
	for (int i=0; i<size-1; i=i+1)
		for (int k=i+1; k<size; k=k+1)
			if ( a[i] < a[k] )
				{
					swap(a[i], a[k]);
				}
}


void sort (float a[]) 
{
	int size = length (a);
	
	for (int i=0; i<size-1; i=i+1)
		for (int k=i+1; k<size; k=k+1)
			if ( a[i] > a[k] )
				{
					swap(a[i], a[k]);
				}
}

void sort_invert (float a[]) 
{
	int size = length (a);
	
	for (int i=0; i<size-1; i=i+1)
		for (int k=i+1; k<size; k=k+1)
			if ( a[i] < a[k] )
				{
					swap(a[i], a[k]);
				}
}


void sort (double a[]) 
{
	int size = length (a);
	
	for (int i=0; i<size-1; i=i+1)
		for (int k=i+1; k<size; k=k+1)
			if ( a[i] > a[k] )
				{
					swap(a[i], a[k]);
				}
}

void sort_invert (double a[]) 
{
	int size = length (a);
	
	for (int i=0; i<size-1; i=i+1)
		for (int k=i+1; k<size; k=k+1)
			if ( a[i] < a[k] )
				{
					swap(a[i], a[k]);
				}
}

void sort (char a[]) 
{
	int size = length (a);
	
	for (int i=0; i<size-1; i=i+1)
		for (int k=i+1; k<size; k=k+1)
			if ( a[i] > a[k] )
				{
					swap(a[i], a[k]);
				}
}

void sort_invert (char a[]) 
{
	int size = length (a);
	
	for (int i=0; i<size-1; i=i+1)
		for (int k=i+1; k<size; k=k+1)
			if ( a[i] < a[k] )
				{
					swap(a[i], a[k]);
				}
}



void sort (string &a)
{
	int size = length (a);
	
	for (int i=0; i<size-1; i=i+1)
		for (int k=i+1; k<size; k=k+1)
			if ( a[i] > a[k] )
				{
					swap(a[i], a[k]);
				}
}

void sort_invert (string &a) 
{
	int size = length (a);
	
	for (int i=0; i<size-1; i=i+1)
		for (int k=i+1; k<size; k=k+1)
			if ( a[i] < a[k] )
				{
					swap(a[i], a[k]);
				}
}







int a_is_in_b ( int a, int b )
{
	int a_digits[10];
	int b_digits[10];

	int size_a = length(a);
	int size_b = length(b);

	for ( int i=0; i<size_a; i=i+1 )
	{
		a_digits[ size_a - i - 1 ] = a%10;
		a=a/10;
	}

	for ( int i=0; i<size_b; i=i+1 )
	{
		b_digits[ size_b - i - 1 ] = b%10;
		b=b/10;
	}


	if ( size_a > size_b )
	{
		for ( int i=0; i<size_a; i=i+1 )
			if (a_digits[i] == b_digits[0])
			{
				int verif = 1;

				for ( int r=1; r<size_b; r=r+1 )
					if ( a_digits[ r+i ] != b_digits[r] )
						verif = 0;

				if (verif == 1)
				{
					return 1;
					break;
				}
			}
	}
	else
	{
		for ( int i=0; i<size_b; i=i+1 )
			if (b_digits[i] == a_digits[0])
			{
				int verif = 1;

				for ( int r=1; r<size_a; r=r+1 )
					if ( b_digits[ r+i ] != a_digits[r] )
						verif = 0;

				if (verif == 1)
				{
					return 1;
					break;
				}
			}
	}

	return 0;
}

int a_is_in_b ( int a[], int b[] )
{
	int size_a = length(a);
	int size_b = length(b);

	if ( size_a > size_b )
	{
		for ( int i=0; i<size_a; i=i+1 )
			if (a[i] == b[0])
			{
				int verif = 1;				

				for ( int r=1; r<size_b; r=r+1 )
					if ( a[ r+i ] != b[r] )
						verif = 0;

				if (verif == 1)
				{
					return 1;
					break;
				}
			}
	}
	else
	{
		for ( int i=0; i<size_b; i=i+1 )
			if (a[i] == b[0])
			{
				int verif = 1;

				for ( int r=1; r<size_a; r=r+1 )
					if ( a[ r+i ] != b[r] )
						verif = 0;

				if (verif == 1)
				{
					return 1;
					break;
				}
			}
	}

	return 0;
}


int a_is_in_b ( char a[], char b[] )
{
	int size_a = length(a);
	int size_b = length(b);

	if ( size_a > size_b )
	{
		for ( int i=0; i<size_a; i=i+1 )
			if (a[i] == b[0])
			{
				int verif = 1;

				for ( int r=0; r<size_b; r=r+1 )
					if ( a[ r+i ] != b[r] )
						verif = 0;

				if (verif == 1)
				{
					return 1;
					break;
				}
			}
	}
	else
	{
		for ( int i=0; i<size_b; i=i+1 )
			if (b[i] == a[0])
			{
				int verif = 1;

				for ( int r=0; r<size_a; r=r+1 )
					if ( b[ r+i ] != a[r] )
						verif = 0;

				if (verif == 1)
				{
					return 1;
					break;
				}
			}
	}

	return 0;
}



int a_is_in_b ( string a, string b )
{
	if (a == b)
		return 1;

	int min_length;

	if ( a.length() < b.length() )
		min_length = a.length();
	else
		min_length = b.length();

	for (int i=0; i<min_length; i=i+1)
	{
		if ( a[i] != b[i] )
		{
			return -1;
			break;
		}
	}

	return 1;

}


string string_max ( string a, string b )
{
	if (a == b)
		return a;

	int min_length;

	if ( a.length() < b.length() )
		min_length = a.length();
	else
		min_length = b.length();

	if ( a_is_in_b (a, b) == 1 && min_length == a.length() )
		return b;

	if ( a_is_in_b (a, b) == 1 && min_length == b.length() )
		return a;


	for (int i=0; i<min_length; i=i+1)
	{
		if ( a[i] > b[i] )
			return a;
		if ( a[i] < b[i] )
			return b;
	}

}



void sort (string a[]) 
{
	int size = length (a);
	
	for (int i=0; i<size-1; i=i+1)
		for (int k=i+1; k<size; k=k+1)
			if ( string_max( a[i], a[k] ) == a[i] )
				{
					swap(a[i], a[k]);
				}
}

void sort_invert (string a[]) 
{
	int size = length (a);
	
	for (int i=0; i<size-1; i=i+1)
		for (int k=i+1; k<size; k=k+1)
			if ( a[i] < a[k] )
				{
					swap(a[i], a[k]);
				}
}









void invert (int a[])
{
	int size = length(a);

	int invert[10000]; // does not want invert[ length(a) + 1 ]; - Segm. Fault

	for (int i=0; i<size; i=i+1)
		invert[ size - i - 1 ] = a[i];

	for (int i=0; i<size; i=i+1)
		a[i] = invert[i];
}

void invert (float a[])
{
	int size = length(a);

	float invert[10000]; // does not want invert[ length(a) + 1 ]; - Segm. Fault

	for (int i=0; i<size; i=i+1)
		invert[ size - i - 1 ] = a[i];

	for (int i=0; i<size; i=i+1)
		a[i] = invert[i];
}

void invert (double a[])
{
	int size = length(a);

	double invert[10000]; // does not want invert[ length(a) + 1 ]; - Segm. Fault

	for (int i=0; i<size; i=i+1)
		invert[ size - i - 1 ] = a[i];

	for (int i=0; i<size; i=i+1)
		a[i] = invert[i];
}

void invert (char a[])
{
	int size = length(a);

	char invert[10000]; // does not want invert[ length(a) + 1 ]; - Segm. Fault

	for (int i=0; i<size; i=i+1)
		invert[ size - i - 1 ] = a[i];

	for (int i=0; i<size; i=i+1)
		a[i] = invert[i];
}

void invert (string &a)
{
	int size = length(a);

	char invert[10000]; // does not want invert[ length(a) + 1 ]; - Segm. Fault

	for (int i=0; i<size; i=i+1)
		invert[ size - i - 1 ] = a[i];

	for (int i=0; i<size; i=i+1)
		a[i] = invert[i];
}

void invert (string a[])
{
	int size = length(a);

	string invert[10000]; // does not want invert[ length(a) + 1 ]; - Segm. Fault

	for (int i=0; i<size; i=i+1)
		invert[ size - i - 1 ] = a[i];

	for (int i=0; i<size; i=i+1)
		a[i] = invert[i];
}

void initialise (int a[], int init)
{
	int size = length(a);

	for (int i=0; i<size; i=i+1)
		a[i] = init;
}

void initialise (float a[], float init)
{
	int size = length(a);

	for (int i=0; i<size; i=i+1)
		a[i] = init;
}

void initialise (double a[], double init)
{
	double size = length(a);

	for (int i=0; i<size; i=i+1)
		a[i] = init;
}

void initialise (char a[], char init)
{
	char size = length(a);

	for (int i=0; i<size; i=i+1)
		a[i] = init;
}

int appears (int a[], int item) 
{
	int size = length(a);
	int counter = 0;

	for (int i=0; i<size; i=i+1)
	{
		if ( a[i] == item )
			counter = counter + 1;
	}

	return counter;
}

int appears (float a[], float item) 
{
	int size = length(a);
	int counter = 0;

	for (int i=0; i<size; i=i+1)
	{
		if ( a[i] == item )
			counter = counter + 1;
	}

	return counter;
}

int appears (double a[], double item) 
{
	int size = length(a);
	int counter = 0;

	for (int i=0; i<size; i=i+1)
	{
		if ( a[i] == item )
			counter = counter + 1;
	}

	return counter;
}

int appears (char a[], char item) 
{
	int size = length(a);
	int counter = 0;

	for (int i=0; i<size; i=i+1)
	{
		if ( a[i] == item )
			counter = counter + 1;
	}

	return counter;
}

int appears (string a, char item) 
{
	int size = length(a);
	int counter = 0;

	for (int i=0; i<size; i=i+1)
	{
		if ( a[i] == item )
			counter = counter + 1;
	}

	return counter;
}

void sort_by_freq (int a[]) 
{
	int size = length(a);
	int freq[ size + 1 ];

	initialise(freq, 0);

	for (int i=0; i<size; i=i+1)
		freq[i] = appears(a, a[i]);

	for (int i=0; i<size-1; i=i+1)
		for (int k=i+1; k<size; k=k+1)
		{
			if ( freq[i] == freq [k] && a[i] > a[k] )
			{
				swap(a[i], a[k]);
				continue;
			}

			if ( freq[i] > freq[k] )
			{
				swap(freq[i], freq[k]);
				swap(a[i], a[k]);
			}
		}
}


void sort_by_freq_invert (int a[]) 
{
	sort_by_freq(a);

	invert(a);
}


void sort_by_freq (float a[]) 
{
	int size = length(a);
	int freq[ size + 1 ];

	initialise(freq, 0);

	for (int i=0; i<size; i=i+1)
		freq[i] = appears(a, a[i]);

	for (int i=0; i<size-1; i=i+1)
		for (int k=i+1; k<size; k=k+1)
		{			
			if ( freq[i] == freq [k] && a[i] > a[k] )
			{
				swap(a[i], a[k]);
				continue;
			}

			if ( freq[i] > freq[k] )			
			{
				swap(freq[i], freq[k]);
				swap(a[i], a[k]);
			}

		}

}

void sort_by_freq_invert (float a[]) 
{
	sort_by_freq(a);

	invert(a);
}

void sort_by_freq (double a[]) 
{
	int size = length(a);
	int freq[ size + 1 ];

	initialise(freq, 0);

	for (int i=0; i<size; i=i+1)
		freq[i] = appears(a, a[i]);

	for (int i=0; i<size-1; i=i+1)
		for (int k=i+1; k<size; k=k+1)
		{			
			if ( freq[i] == freq [k] && a[i] > a[k] )
			{
				swap(a[i], a[k]);
				continue;
			}

			if ( freq[i] > freq[k] )			
			{
				swap(freq[i], freq[k]);
				swap(a[i], a[k]);
			}

		}

}

void sort_by_freq_invert (double a[]) 
{
	sort_by_freq(a);

	invert(a);
}



void sort_by_freq (char a[]) 
{
	int size = length(a);
	int freq[ size + 1 ];

	initialise(freq, 0);

	for (int i=0; i<size; i=i+1)
		freq[i] = appears(a, a[i]);

	for (int i=0; i<size-1; i=i+1)
		for (int k=i+1; k<size; k=k+1)
		{			
			if ( freq[i] == freq [k] && a[i] > a[k] )
			{
				swap(a[i], a[k]);
				continue;
			}

			if ( freq[i] > freq[k] )			
			{
				swap(freq[i], freq[k]);
				swap(a[i], a[k]);
			}

		}
}

void sort_by_freq_invert (char a[]) 
{
	sort_by_freq(a);

	invert(a);
}

void sort_by_freq (string &a) 
{
	int size = length(a);
	int freq[ size + 1 ];

	initialise(freq, 0);

	for (int i=0; i<size; i=i+1)
		freq[i] = appears(a, a[i]);

	for (int i=0; i<size-1; i=i+1)
		for (int k=i+1; k<size; k=k+1)
		{			
			if ( freq[i] == freq [k] && a[i] > a[k] )
			{
				swap(a[i], a[k]);
				continue;
			}

			if ( freq[i] > freq[k] )			
			{
				swap(freq[i], freq[k]);
				swap(a[i], a[k]);
			}

		}
}

void sort_by_freq_invert (string &a) 
{
	sort_by_freq(a);

	invert(a);
}







int num_digits (int a)
{
	int counter = 0;
	
	while (a != 0)
	{
		a=a/10;
		counter = counter + 1;
	}

	return counter;
}

//void sort_by_size (int a[])




//int num_chars (string a)

//int size_string (string a[])

void sort_by_size (string a[])
{
	int size = length(a);

	int words[ size + 1 ];

	for (int i=0; i<size; i=i+1)
		words[i] = a[i].length();

	for (int i=0; i<size; i=i+1)
		cout << words[i] << " ";
	cout << endl;

	for (int i=0; i<size-1; i=i+1)
		for (int k=i+1; k<size; k=k+1)
		{			
			if ( words[i] == words[k] && a[i] > a[k] )
			{
				swap(a[i], a[k]);
				continue;
			}

			if ( words[i] > words[k] )			
			{
				swap(words[i], words[k]);
				swap(a[i], a[k]);
			}
		}
}


void sort_by_size_invert (string a[])
{
	sort_by_size(a);

	invert(a);
}

void sort_partial (int a[], int a1, int a2) 
{
	if ( a1 < 0 or a2 < 0 )
		return;

	int size = length (a);
	
	if ( a2 > size - 1 )
		return;

	for (int i=a1; i<a2; i=i+1)
		for (int k=i+1; k<=a2; k=k+1)
			if ( a[i] > a[k] )
			{
				swap(a[i], a[k]);
			}
}

void sort_partial_invert (int a[], int a1, int a2) 
{
	if ( a1 < 0 or a2 < 0 )
		return;

	int size = length (a);
	
	if ( a2 > size - 1 )
		return;

	for (int i=a1; i<a2; i=i+1)
		for (int k=i+1; k<=a2; k=k+1)
			if ( a[i] < a[k] )
			{
				swap(a[i], a[k]);
			}
}



void sort_partial (float a[], int a1, int a2) 
{
	if ( a1 < 0 or a2 < 0 )
		return;

	int size = length (a);
	
	if ( a2 > size - 1 )
		return;

	for (int i=a1; i<a2; i=i+1)
		for (int k=i+1; k<=a2; k=k+1)
			if ( a[i] > a[k] )
			{
				swap(a[i], a[k]);
			}
}

void sort_partial_invert (float a[], int a1, int a2) 
{
	if ( a1 < 0 or a2 < 0 )
		return;

	int size = length (a);
	
	if ( a2 > size - 1 )
		return;

	for (int i=a1; i<a2; i=i+1)
		for (int k=i+1; k<=a2; k=k+1)
			if ( a[i] < a[k] )
			{
				swap(a[i], a[k]);
			}
}

void sort_partial (double a[], int a1, int a2) 
{
	if ( a1 < 0 or a2 < 0 )
		return;

	int size = length (a);
	
	if ( a2 > size - 1 )
		return;

	for (int i=a1; i<a2; i=i+1)
		for (int k=i+1; k<=a2; k=k+1)
			if ( a[i] > a[k] )
			{
				swap(a[i], a[k]);
			}
}

void sort_partial_invert (double a[], int a1, int a2) 
{
	if ( a1 < 0 or a2 < 0 )
		return;

	int size = length (a);
	
	if ( a2 > size - 1 )
		return;

	for (int i=a1; i<a2; i=i+1)
		for (int k=i+1; k<=a2; k=k+1)
			if ( a[i] < a[k] )
			{
				swap(a[i], a[k]);
			}
}

void sort_partial (char a[], int a1, int a2) 
{
	if ( a1 < 0 or a2 < 0 )
		return;

	int size = length (a);
	
	if ( a2 > size - 1 )
		return;

	for (int i=a1; i<a2; i=i+1)
		for (int k=i+1; k<=a2; k=k+1)
			if ( a[i] > a[k] )
			{
				swap(a[i], a[k]);
			}
}

void sort_partial_invert (char a[], int a1, int a2) 
{
	if ( a1 < 0 or a2 < 0 )
		return;

	int size = length (a);
	
	if ( a2 > size - 1 )
		return;

	for (int i=a1; i<a2; i=i+1)
		for (int k=i+1; k<=a2; k=k+1)
			if ( a[i] < a[k] )
			{
				swap(a[i], a[k]);
			}
}




void partial_invert (int a[], int a1, int a2)
{
	if ( a1 < 0 or a2 < 0 )
		return;

	int size = length (a);
	
	if ( a2 > size - 1 )
		return;


	int b[ a2 - a1 + 1 ];

	int l = a2 - a1;

	for (int i=a1; i<=a2; i=i+1)
	{	
		b[l] = a[i];
		l=l-1;
	}

	l=0;
	for (int i=a1; i<=a2; i=i+1)
	{	
		a[i] = b[l];
		l=l+1;
	}
}


void partial_invert (float a[], int a1, int a2)
{
	if ( a1 < 0 or a2 < 0 )
		return;

	int size = length (a);
	
	if ( a2 > size - 1 )
		return;


	float b[ a2 - a1 + 1 ];

	int l = a2 - a1;

	for (int i=a1; i<=a2; i=i+1)
	{	
		b[l] = a[i];
		l=l-1;
	}

	l=0;
	for (int i=a1; i<=a2; i=i+1)
	{	
		a[i] = b[l];
		l=l+1;
	}
}


void partial_invert (double a[], int a1, int a2)
{
	if ( a1 < 0 or a2 < 0 )
		return;

	int size = length (a);
	
	if ( a2 > size - 1 )
		return;


	double b[ a2 - a1 + 1 ];

	int l = a2 - a1;

	for (int i=a1; i<=a2; i=i+1)
	{	
		b[l] = a[i];
		l=l-1;
	}

	l=0;
	for (int i=a1; i<=a2; i=i+1)
	{	
		a[i] = b[l];
		l=l+1;
	}
}


void partial_invert (char a[], int a1, int a2)
{
	if ( a1 < 0 or a2 < 0 )
		return;

	int size = length (a);
	
	if ( a2 > size - 1 )
		return;


	char b[ a2 - a1 + 1 ];

	int l = a2 - a1;

	for (int i=a1; i<=a2; i=i+1)
	{	
		b[l] = a[i];
		l=l-1;
	}

	l=0;
	for (int i=a1; i<=a2; i=i+1)
	{	
		a[i] = b[l];
		l=l+1;
	}
}


void partial_invert (string a[], int a1, int a2)
{
	if ( a1 < 0 or a2 < 0 )
		return;

	int size = length (a);
	
	if ( a2 > size - 1 )
		return;


	string b[ a2 - a1 + 1 ];

	int l = a2 - a1;

	for (int i=a1; i<=a2; i=i+1)
	{	
		b[l] = a[i];
		l=l-1;
	}

	l=0;
	for (int i=a1; i<=a2; i=i+1)
	{	
		a[i] = b[l];
		l=l+1;
	}
}



void count_data (char a[], int &numeric_counter, int &writing_counter, int &sign_counter)
{
	int size = length(a);
	
	numeric_counter = 0;
	for (int i=0; i<size; i=i+1)
		if ( a[i] >= '1' && a[i] <= '9' )
			numeric_counter = numeric_counter+1;

	writing_counter = 0;
	for (int i=0; i<size; i=i+1)
		if ( (a[i] >= 'a' && a[i] <= 'z') or (a[i] >= 'A' && a[i] <= 'Z') )
			writing_counter = writing_counter+1;

	sign_counter = 0;
	for (int i=0; i<size; i=i+1)
		if ( (a[i] >= ' ' && a[i] <= '/') or (a[i] >= ':' && a[i] <= 64) or (a[i] >= '[' && a[i] <= 96) or (a[i] >= '{' && a[i] <= 126) )
			sign_counter = sign_counter+1;

}


void sort_by_data (char a[], int numeric[],  char writing[], char signs[] )
{
	int size = length(a);
	
	int r=0;
	for (int i=0; i<size; i=i+1)
		if ( a[i] >= '1' && a[i] <= '9' )
		{
			numeric[r] = a[i] - 48;
			r=r+1;
		}

	r=0;
	for (int i=0; i<size; i=i+1)
		if ( (a[i] >= 'a' && a[i] <= 'z') or (a[i] >= 'A' && a[i] <= 'Z') )
		{
			writing[r] = a[i];
			r=r+1;
		}

	r=0;
	for (int i=0; i<size; i=i+1)
		if ( (a[i] >= ' ' && a[i] <= '/') or (a[i] >= ':' && a[i] <= 64) or (a[i] >= '[' && a[i] <= 96) or (a[i] >= '{' && a[i] <= 126) )
		{
			signs[r] = a[i];
			r=r+1;
		}

}




void merge_sort (int a[])
{

}

void quick_sort (int a[]) 
{
	
}


int main () 
{

	// easy sorting

	int a[9] = { 4, 1, 2, 5, 3, 8, 6, 7 };
	int size = length(a);



	cout << length(a) << endl;
	sort(a);
	sort_invert(a);
	
	for (int i=0; i<size; i=i+1)
		cout << a[i] << " ";
	cout << endl;


	
	char s[9] = { 'q', 'w', 'f', 's', 'b', 'a', 'g', 'l' };

	sort(s);
	for (int i=0; i<size; i=i+1)
		cout << s[i] << " ";
	cout << endl;

	string k = "qwfsbagl";

	cout << length(k) << endl;
	sort(k);
	for (int i=0; i<size; i=i+1)
		cout << k[i] << " ";
	cout << endl;

	float f[9] = { 1.34, 4.28, 8.12, 98, 7, 72.01, 3.010210, 9.21 };

	cout << length(f) << endl;
	sort(f);
	for (int i=0; i<size; i=i+1)
		cout << f[i] << " ";
	cout << endl;

	double d[9] = { 1.34, 4.28, 8.12, 98, 7, 72.01, 3.010210, 9.21 };

	cout << length(d) << endl;
	sort(d);
	for (int i=0; i<size; i=i+1)
		cout << d[i] << " ";
	cout << endl;

	string strngs[9] = { "a", "w2rd", "w2rd", "strings", "qwe", "l", "strings", "w2rd" };

//	sort(strngs);
	for (int i=0; i<size; i=i+1)
		cout << strngs[i] << " ";
	cout << endl;

	

	// sort freq

	int ints[9] = { 1, 4, 20, 40, 10, 2, 1, 1 };

	sort_by_freq_invert(ints);

	for (int i=0; i<size; i=i+1)
		cout << ints[i] << " ";
	cout << endl;

	float floats[9] = { 1.04, 4.1, 2, 4.1, 1.04, 2, 1.04, 1.04 };

	sort_by_freq(floats);

	for (int i=0; i<size; i=i+1)
		cout << floats[i] << " ";
	cout << endl;

	double doubles[9] = { 1.04, 4.1, 2, 4.1, 1.04, 2, 1.04, 1.04 };

	sort_by_freq_invert(doubles);

	for (int i=0; i<size; i=i+1)
		cout << doubles[i] << " ";
	cout << endl;

	char chars[9] = { 'q', 'l', 'q', 'l', 'b', 'b', 'q', 'b' };

	sort_by_freq_invert(chars);

	for (int i=0; i<size; i=i+1)
		cout << chars[i] << " ";
	cout << endl;

	string strings = "qlqlbbqb";

	sort_by_freq(strings);

	for (int i=0; i<size; i=i+1)
		cout << strings[i] << " ";
	cout << endl;


	// sort size

//	sort_by_size(ints);

	for (int i=0; i<size; i=i+1)
		cout << ints[i] << " ";
	cout << endl;
	
	sort_by_size_invert( strngs );

	for (int i=0; i<size; i=i+1)
		cout << strngs[i] << " ";
	cout << endl;

	// sort partial

	sort_partial_invert(ints, 2, 6);

	for (int i=0; i<size; i=i+1)
		cout << ints[i] << " ";
	cout << endl;



	for (int i=0; i<size; i=i+1)
		cout << floats[i] << " ";
	cout << endl;

	sort_partial(floats, 2, 6);

	for (int i=0; i<size; i=i+1)
		cout << floats[i] << " ";
	cout << endl;



	for (int i=0; i<size; i=i+1)
		cout << doubles[i] << " ";
	cout << endl;

	sort_partial_invert(doubles, 2, 6);

	for (int i=0; i<size; i=i+1)
		cout << doubles[i] << " ";
	cout << endl;




	for (int i=0; i<size; i=i+1)
		cout << chars[i] << " ";
	cout << endl;

	sort_partial_invert(chars, 2, 6);

	for (int i=0; i<size; i=i+1)
		cout << chars[i] << " ";
	cout << endl;


	// partial invert

	for (int i=0; i<size; i=i+1)
		cout << ints[i] << " ";
	cout << endl;

	partial_invert(ints, 2, 6);

	for (int i=0; i<size; i=i+1)
		cout << ints[i] << " ";
	cout << endl;
	

	for (int i=0; i<size; i=i+1)
		cout << floats[i] << " ";
	cout << endl;

	partial_invert(floats, 2, 6);

	for (int i=0; i<size; i=i+1)
		cout << floats[i] << " ";
	cout << endl;
	

	for (int i=0; i<size; i=i+1)
		cout << doubles[i] << " ";
	cout << endl;

	partial_invert(doubles, 2, 6);

	for (int i=0; i<size; i=i+1)
		cout << doubles[i] << " ";
	cout << endl;
	

	for (int i=0; i<size; i=i+1)
		cout << chars[i] << " ";
	cout << endl;

	partial_invert(chars, 2, 6);

	for (int i=0; i<size; i=i+1)
		cout << chars[i] << " ";
	cout << endl;
	

	for (int i=0; i<size; i=i+1)
		cout << strngs[i] << " ";
	cout << endl;

	partial_invert(strngs, 2, 6);

	for (int i=0; i<size; i=i+1)
		cout << strngs[i] << " ";
	cout << endl;
	

	// sort by data

	char datas[9] = { '1', 'r', '/', '?', '\"', '4', '!', '>' };

	int numeric_counter;
	int writing_counter;
	int sign_counter;

	count_data( datas, numeric_counter, writing_counter, sign_counter );

	cout << numeric_counter << ' ' << writing_counter << ' ' << sign_counter << endl;

	int numeric[1000];
	char writing[1000];
	char signs[1000];

	sort_by_data( datas, numeric, writing, signs );

	for (int i=0; i<length(numeric); i=i+1)
		cout << numeric[i] << " ";
	cout << endl;

	for (int i=0; i<length(writing); i=i+1)
		cout << writing[i] << " ";
	cout << endl;

	for (int i=0; i<length(signs); i=i+1)
		cout << signs[i] << " ";
	cout << endl;

	cout << string_max("a", "ab") << endl;

	// a is in b

	cout << a_is_in_b ( 0, 190 ) << endl;

	cout << a_is_in_b ( 4, 10 ) << endl;

	int a_nums[9] = { 4, 1, 2, 5, 3, 8, 6, 7 };
	int b_nums[4] = { 3, 8, 6 };

	cout << a_is_in_b ( a_nums, b_nums ) << endl;

	int char_a[9] = { 'q', 'l', 'q', 'l', 'b', 'b', 'q', 'b' };
	int char_b[4] = { 'l', 'b', 'b' };

	cout << 4 << endl << 4 << endl << 4 << endl << 4 << endl << 4 << endl << 4 << endl;

	cout << a_is_in_b ( char_a, char_b ) << endl;


	return 0;
}

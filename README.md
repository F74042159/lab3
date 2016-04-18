# lab3
compile:make(compile both question A and B)

size value:1000
result:
	sort():0 seconds
	v1 and v2 are different.
	insertion_sort():0.01 seconds
	v1 and v2 are the same.

size value:10000
result:
	sort():0 seconds
	v1 and v2 are different.
	insertion_sort():1.32 seconds
	v1 and v2 are the same.

size value:100000
result:
	sort():0.05 seconds
	v1 and v2 are different.
	insertion_sort():128.03 seconds
	v1 and v2 are the same.

size value:1000000
result:
	sort():0.52 seconds
	v1 and v2 are different.
	insertion_sort():12847 seconds
	v1 and v2 are the same.
Difference:
	sort():O(n log n)較快 且資料量乘以10倍時 所需秒數約是10倍
	insertion_sort():O(n^2)較慢 且資料量乘以10倍時 所需秒數約是100倍

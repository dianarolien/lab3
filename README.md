# lab3
1.compile for question A: make
2.n = 1000:
        sort = 0 seconds.
        insertion sort = 0.01 seconds.
  n = 10000:
        sort = 0 seconds.
        insertion sort = 1.28 seconds.
  n = 100000:
        sort = 0.04 seconds.
        insertion sort =  128.32 seconds.
  n = 1000000:
        sort = 0.52 seconds.
        insertion sort =   12739.61 seconds.

insertion sort 每當n相差10倍時，所花時間為10^2倍----符合時間 = n^2。
(因為insertion sort 幾乎每筆資料會互相比對)

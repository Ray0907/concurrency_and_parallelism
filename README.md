# Concurrency and Parallelism Programming

- [link](https://www.youtube.com/watch?v=7kImoW_hISE)

- Concurrent(並行) 中，工作可拆分成**_ 獨立執行_** 的部份，於是 **_可以_** 讓很多事情一起做，但 **_不一定_** 要真的同時做
- Parallelism(平行) 著重規劃，將能夠並行的程式，分配給不同硬體單元，使其 **_同時_** 執行。
- Synchronization(同步處理) 確保多個執行單元運作並存取資源時，執行結果會因為執行單元的時間先後影響導致錯誤。
  - mutex
    - process 使用 mutex 運作方式為持有 mutex 執行 cs 來存取資源，然後釋放 mutex
  - semaphere
    - process 使用 semaphore 時， process 總是發出信號 (signal) 或是總是擔任接收信號(wait)，同一個 process 不會先後進行 signal 與 wait，也就是說，process 只能擔任 producer 或 consumer 其中之一。 semaphore 是為了保護 process 的執行同步正確。

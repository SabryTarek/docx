Compititive Programming
========================
contest time in codeforces  is 2 hours
ACM Egyptian Collegiate Programming Contest (ECPC)

- codeforces round
ACPCNews
ICPCNews
Coach Academy
PST
Algorithms With Rachit Jain
AbdurRahman ElGammal


- ACM:
    - ECPC
    - ACPC 2 dayes at acadmia elbaharia first day training for how to summit and rules second 5 hours for 8:12 problem in hardcopy(paper sheet) 
    - ICPC (ACM International Collegiate Programming Contest)


WF => World Final
Baloons


Problem setter

trick or observation


https://kontests.net/
clists.by

cscompete.com


* Online Judages:
    - leetcode
    - Codeforces
    - hackerearth
    - UVA
    - Spoj
    - codewars
    - CS Academy
    - hackerranck
    - top coder

* Onsite Contests:
    - IEEExtreme
    - Google code jam
	- google kickstart contest
    - A2oj



---

# Codeforeses
- Tourist "Legendary Grand Master" (the highest rank on Codeforces)
- Mike Mirzayanov (the founder of the website)
- when someone creates a new Codeforces account, the initial rating is 1500



Does practising questions increase codeforces rankings or winning contests
-> only winning contest your increase codeforces rank
---
Codeforces Problem tags 
- Implementation
    - constructive (استنتاجي)
- Greedy
- Sorting
- string
- math
- geometry -> observe mathmatical equation
- Bruteforce -> loop
- two pointer
---
-  *800
---
# repl.it

$ clang++-7 -pthread -std=c++17 -o main main.cpp
$ ./main

---

- Accepted
- Wrong answer on test 4
- copilation error
- runtime error
- memory limit
- time limit
---
> Number Theory

- even +- even = even
- odd +- odd = even
- even +- odd = odd

- even */ even = even
- odd * odd = odd
- even * odd = even
---
- factorial
- fibonacci

- GCD
- LC


---
- ceil
- floor
- round
- truncate
---
- team = 3 members
- 8 problem
- one pc
---
programming Challenges The programming Contest Training Manual


---
- club
- diamond
- heart
- spade
---


Redundant code -> sub routine
Sentinel  - MAXINT
#define ll long long

unsolved problems


problem statement
sample test cases


- onsite
- online


- Study
- Solve
    - topic
    - sheet
- contest



- Topic-based training style
- Blinding style


Assiut beginners sheet === Level 0 Training  (NewComers)


السحابة تعني الموارد الحاسوبية المعرفة برمجيا وتقسم 3 اقسام

الحوسبة المعرفة برمجيا والشبكة المعرفة برمجيا والتخزين المعرف برمجيا وكلها معا تكون البنية التحتية المعرفة برمجيا 

وكتقريب عبارة المعرف برمجيا قريبة من عبارة افتراضي حتى وقت قريب.







طيب لنأخذ مثال في مكتبي في عمان هناك 3 خوادم واحد عليه قاعدة البيانات وآخر عليه التطبيق وثالث نخزن عليه النسخ الاحتياطية هذه حوسبة تنكية bare metal.

إن حصلت أي مشكلة على الجهاز الأول تعطل كل شيء وإذا حصلت مشكلة على الثاني تعطل كل شيء.

في حالة الحوسبة السحابية يتم تحويل الأجهزة الثلاثة التي عندك إلى عنقود cluster
قدرته مجموع الأجهزة الثلاثة. الآن تعمل نفس الشيء قاعدة بيانات وتطبيق وتخزين على هذه السحابة وليس على التنك

إذا حصلت مشكلة في الجهاز الأول يتم إخلاء التطبيق لجهاز آخر. التطبيق لا يتعطل لأنه لا يعمل على التنك بل على السحابة المكونة من جهازين. صحيح أن قدرة السحابة أصبحت أضعف بتعطل أحد عناصرها لكنها لا تزال تعمل.

الآن أين الأجهزة؟ في مكتبي في عمان. من يمتلكها؟ أنا.



### automation for CP
- code editor
    - code formater
    - auto save
    - code linter
    - debugger

    - keyboared shortcuts
        - run makefile
        - debug
        - generate new boilerplate
        - 
- mkakefile
- boilerplate (C++, C)
    - info section
        - author
        - date
        - probem source
        - excution time
        - used memory
        - running time
        - complexity
        - compiler version
        - C++ version
        - techniqe
    - contain #define
        - output
        - input
        - for loop
        - infinte while loop
        - def type
        - comon variables
            - int count
            - bool flag
            - ans
            - arr[n]
            - 
- gnerate flow chart
- docmentation


##### tasks
- C++ revesion
- segmat tree
- Edu on coedforces


> 10^9 no loop think at equation




void miniMaxSum(vector<int> arr)
{
    unsigned long long int  min = arr[0],
                            max = arr[0],
                            tempMin,
                            arrSum = 0;
    for(int i=0; i<arr.size(); i++)
    {
        arrSum +=arr[i];
        if(min>arr[i])
            min = arr[i];
        if(max<arr[i])
            max = arr[i];
    
    }
    tempMin = min;
    min = arrSum - max;
    max = arrSum - tempMin;
    cout<<min << ' ' <<max <<"\n\n";
}


int birthdayCakeCandles(vector<int> candles) {
    int  max = candles[0],
         count = 0;
    for(int i=0; i<candles.size(); i++)
    {
        if(max<candles[i])
            max = candles[i];
    }
    for(int i=0; i<candles.size(); i++)
    {
        if(max==candles[i])
            count++;
    }
    return count;
}
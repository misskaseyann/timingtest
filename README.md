# Sort Timing Tests
Test different data structure timings.
The celebrity class contains:

* Name.
* How badly you want to meet them.
* Area they are involved in (movies, music, standup, etc).
* Whether or not you have met them before.

Celebrities are sorted by:

1. How badly you want to meet them.
2. Whether or not you have met them.
3. Alphabetically by name.

The timing tests ran on the following sorts:

* Bubble Sort
* Selection Sort
* Insertion Sort
* Merge Sort
* Quick Sort

### Results

The first tests all report a value of 0.005 seconds runtime:

<img src="http://i64.tinypic.com/2dlumaw.png" width=400/>

The reason for this is because the amount of data being sorted is arbitrary and only includes 10 individual items. Their performance is all the same at the beginning if we look at a graph that shows different Big-O operations. The true nature of each algorithm is shown once it is given larger amounts of data.

<img src="http://i65.tinypic.com/118zw1v.png" width=400/>

The second tests ran ranged from 10 items to 1,000,000 items. Not all algorithms were given that same maximum though since they ran extremely slowly. Following is a table of the results and some graphs showing how well each one did comparatively.

<img src="http://i63.tinypic.com/jgtpw6.png" width=600/>

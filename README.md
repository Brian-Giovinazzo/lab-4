# Lab 4: Cache and memory performance evaluation

## Student Name: Brian Giovinazzo

Video instruction: https://youtu.be/SxdnvwPi3LE

### Task 1. Cache performance for matrix multiplication

In class, you have learned how different stride arrangement can lead to different performance. 
In directory `matrix`, there are three files: `matrix_ijk.c`, `matrix_kij.c`, and `matrix_jki.c`. The `matrix_ijk.c` file
is completed and implemented using the first striding approach. The other two files are incomplete, and they implement 
the second and third striding approaches, respectively. 

- You are to finish implementing `matrix_kij.c` and `matrix_jki.c`, then run the `eval.sh` script, which will compile 
and run these files. Take a screenshot(s) of the reported run time. 

- Use the reported run times to create a line graph. The graph should have the x-axix represents the trial index in the 
order of execution, and the y-axis represents the run time. There should be three lines, each represent the run time 
collection from each matrix file. Take a screenshot of the graph. 

### Task 2: Rebuilding the memory mountain graph 

- Run `make` inside directory `mountain`, then run the resulting executable file named `mountain`. Take a screenshot of 
the resulting output. 
- Recreate the memory mountain graph shown in the last slide of the memory lecture and take a screenshot of this graph.

## Submission:

- Submit the link to the lab's Git repo to D2L. 
- The README.md file should contain the student's name. 
- The completed matrix implemetations, `matrix_ijk.c`, `matrix_kij.c`, and `matrix_jki.c`, should be 
committed and pushed to the lab's Git repo. 
- The lab's Git repo should also contain the lab report, which is a single PDF document containing the followings:
  - The screenshot(s) of the three matrix implementations' run times (Task 1). 
  - The screenshot of the graph comparing runtimes of different matrix implementations (Task 1)
  - The screenshot of the memory mountain run time results (Task 2).
  - The screenshot of the recreated memory mountain graph (Task 2). 


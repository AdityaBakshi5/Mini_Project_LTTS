# SDLC_Activity_Based_Learning
Build | Code Quality | Unity | [Git Inspector](using github.io option)|Valgrind|
|---------|--------------|-----------|------------------|----------------------|
[![C/C++ CI](https://github.com/AdityaBakshi5/Mini_Project_LTTS/actions/workflows/C-build.yml/badge.svg)](https://github.com/AdityaBakshi5/Mini_Project_LTTS/actions/workflows/C-build.yml)|[![Static Check](https://github.com/AdityaBakshi5/Mini_Project_LTTS/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/AdityaBakshi5/Mini_Project_LTTS/actions/workflows/cppcheck.yml)  [![Codacy Badge](https://app.codacy.com/project/badge/Grade/21c5cae1b5844158b9eb3d4c80125c89)](https://app.codacy.com/gh/AdityaBakshi5/Mini_Project_LTTS/dashboard?branch=main=Badge_Grade) |[![Unit Testing](https://github.com/AdityaBakshi5/Mini_Project_LTTS/actions/workflows/Unity%20Testing1.yml/badge.svg)](https://github.com/AdityaBakshi5/Mini_Project_LTTS/actions/workflows/Unity%20Testing1.yml) | [![git inspector CI](https://github.com/AdityaBakshi5/Mini_Project_LTTS/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/AdityaBakshi5/Mini_Project_LTTS/actions/workflows/gitinspector.yml)|[![Valgrind](https://github.com/AdityaBakshi5/Mini_Project_LTTS/actions/workflows/ValgrindTest.yml/badge.svg)](https://github.com/AdityaBakshi5/Mini_Project_LTTS/actions/workflows/ValgrindTest.yml)|

## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Design`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_Test_plan`      | Documents with test plans and procedures

## Contributors List and Summary

SF Id. |  Name   |    Features    | Issuess Raised |Issues Resolved|No Test Cases|Test Case Pass
-------|---------|----------------|----------------|---------------|-------------|--------------
`260010` | Aditya Bakshi  | Calculates BMI, BMR, Fat Percentage indices   | -     | -   | 3   | 3  

## Challenges Faced and How Was It Overcome
1.  Unit testing was not able to work as functions had pointer arguments.
     * Parameters to be tested were then defined in the test.c file and then addresses of those parameters were passed as arguments which worked successfully !
       
2.  Unit testing was not working for one of the functions. 
     * Modified the function as a return type function as previously it took arguments and printed results in the function itself without returning anything.

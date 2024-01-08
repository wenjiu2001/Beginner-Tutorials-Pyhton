# Beginner-Tutorials-Pyhton

"beginner_tutorials" serves as a rudimentary Python program within the realm of ROS, designed as an introductory illustration for neophyte coders.

## Environment

- Ubuntu 20.04
- ROS Noetic

## Install

1. Navigating to the "src" directory within your catkin workspace :
   ```
   cd ~/catkin_ws/src
   ```
2. Clone beginner_tutorials package for github :
   ```
   git clone https://github.com/wenjiu2001/Beginner-Tutorials-Pyhton.git beginner_tutorials
   ```

## How to Use

Note: Execute these two commands separately in different terminal windows.

1. The roscore can be launched using the roscore executable :
   ```
   roscore
   ```
2. Run Beginner Tutorials :
   ```
   roscd beginner_tutorials/scripts/ && python beginner_tutorials.py
   ```
   
## References

- Ubuntu install of ROS Noetic (https://wiki.ros.org/noetic/Installation/Ubuntu)
- roscore (https://wiki.ros.org/roscore)
- WritingImagePublisherSubscriber (https://wiki.ros.org/rospy_tutorials/Tutorials/WritingImagePublisherSubscriber)

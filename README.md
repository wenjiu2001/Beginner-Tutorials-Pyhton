# Beginner-Tutorials-ROS

[![License: CC BY-NC-SA 4.0](https://img.shields.io/badge/License-CC_BY--NC--SA_4.0-lightgrey.svg)](https://creativecommons.org/licenses/by-nc-sa/4.0/)
[![Ubuntu:Focal](https://img.shields.io/badge/Ubuntu-Focal-brightgreen)](https://releases.ubuntu.com/focal/)
[![ROS:Noetic](https://img.shields.io/badge/ROS-Noetic-blue)](https://wiki.ros.org/noetic/Installation/Ubuntu)

"beginner_tutorials" is a fundamental program within the realm of ROS, designed to furnish neophyte coders with introductory elucidation.

## Install and Build

1. Navigating to the "src" directory within your catkin workspace :
   ```
   cd ~/catkin_ws/src
   ```
2. Clone beginner_tutorials package for github :

   - Programming languages

      - Python
        ```
        git clone https://github.com/wenjiu2001/Beginner-Tutorials-ROS.git beginner_tutorials
        ```
      - C++
        ```
        git clone -b cpp-devel https://github.com/wenjiu2001/Beginner-Tutorials-ROS.git beginner_tutorials
        ```
3. Build beginner_tutorials package :
   ```
   cd ~/catkin_ws && catkin_make
   ```
4. Package environment setup :
   ```
   source ./devel/setup.sh
   ```

## How to Use

- Launch the beginner's tutorial :
   ```
   roslaunch beginner_tutorials beginner_tutorials.launch
   ```

## References

- [Ubuntu install of ROS Noetic](https://wiki.ros.org/noetic/Installation/Ubuntu)
- [WritingImagePublisherSubscriber](https://wiki.ros.org/rospy_tutorials/Tutorials/WritingImagePublisherSubscriber)

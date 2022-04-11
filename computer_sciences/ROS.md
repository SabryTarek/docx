[ROS](http://www.ros.org)
===
* ROS (Robot Oprating System) = Libraries + Tools for Robots
* ROS work over OS can't work over Microcontroller directly
* you can Develop ROS Application by [C++ - Python - Java - ]
    - Send data from process to process
* Hardware Abstraction
* ROS Versions:
- ROS
- ROS2:: The goal of ROS2 is to overcome the limitations of ROS1, putting special attention to the creation of robotics products. For instance, ROS2 includes realtime features, embedded security and doesn't require a roscore (relies on DDS communication).



Definition: Robotics Framework
meta-operating system or Framework
rostopic pub /cmd-vel geometry-msgs/twist


concepts:
- Topics (pub/sub) -> many to many
- Services (server/client) -> one to one
- Actions
- Debugging: RViz


ROS Master -> entry point

nodes .. messages .. bag files (log files)


manual vs autonomous



- Google autonomous cars

- sudo apt-get install ros-<ROS_DISTRIBUTION_NAME>-<PACKAGE_NAME>
- rosrun PACKAGE_NAME NODE_NAME


EX:
- sudo apt-get install ros-indigo-rospy-tutorials || sudo apt-get install ros-kinetic-rospy-tutorials`
- rosrun rospy_tutorials talker



- rostopic:
    - bw
    - echo
    - find
    - hz
    - info
    - list
    - pub
    - type

catkin -> Build System for ROS





- [ROSCON](http://roscon.ros.org/2016/)
- ROS Meetup
- [ROS Answers](http://answers.ros.org/questions/)
- [ROS Planet](http://planet.ros.org/)
- [Mailing Lists](http://lists.ros.org/mailman/listinfo/ros-users)




* [[theconstructsim][https://theconstructsim.com]]
** TheConstructsim Machine (web shell) Specs:
    + CPU Family: Intel(R) Xeon(R) CPU E5-2666 v3 @ 2.90GHz
    + Cores:      8
    + RAM:        14G
    + storage:    70G HDD
** ROS2 Basics in 5 days (Python)
***  you will be using a simulated MARA robot, developed by Erle Robotics, which is running in ROS2
** how to develop interfaces for ROS
    + custom RViz template for your solution
    + RQT library to build interfaces as ROS packages
    + develop your own application that connects to a ROS Core network(desktop apps, Android/iOS apps, etc.)
    *** Developing Web Interfaces for ROS (you will be using a simulated robot to see the interaction between a web page and ROS)
    **** WebSockets
        + interface to operate ROS

Basically, during this course, you will address the following topics:

Basic Concepts of ROS2: Packages, Launch Files, Nodes, Client Libraries, etc...
How Topics work: Publishers and Subscribers
How Services work: Clients and Servers
How Actions work: Clients and Servers
Basic Debugging Tools: Logging system, RViz2.



Gazebo simulation

```
 rosbridge websocket server
$ roslaunch course_web_dev_ros web.launch
```


```
2. Get the ROSBridge address of the computer assigned to you
Every time you open the academy, our platform assigns to you a different remote computer. In order to connect to it through web pages, we need to know the ROSBridge server address. It's a very simple step in our platform. Go to web shell #2 and execute the following:
$ rosbridge_address
```

- Motion/Path Planner: MoveIt[1, 2]




Core Robotics Problems:
- Navigation
- Mapping
- Pick(grasp) and Place
- Data Communication




* ROS WIKI
    ** ROS Consepts
        *** ROS Package (Structure of our ROS code -Dual WorkSpace-)
        *** ROS MetaPackage Package that contains other packages




Structure of Any ROS Packages:
- package.xml
- CMakeList.txt





ROS Master Node (Controller-plane)

    - Initiate the commmunication channel between Publishers and subcscribers
ROS Data Transimation:
- Publish/Subscribe Model (Many-to-Many) (One-Way Communication)
    - ROS Topics + ROS Messages
    - Publishing Frequancy

- Server/Client (Request/Response) Model
    - ROS Services
    - ROS Actions






1. Nodes
2. Topics
3. Messages
4. Master Node
5. Services
6. Actions
7. Parameter Server
8. Bags


$ roscore
$ rosnode list
$ rostpic list



ROS Support Python2 only not Python3
# opendds-ros2
This is a setup of a simple DDS talker to ROS2 

This project uses the meson build system https://mesonbuild.com/Quick-guide.html

On Ubuntu meson can be installed using `sudo apt-get install python3 python3-pip python3-setuptools \
                       python3-wheel ninja-build`

From the working directory install openDDS with the install script `install_opendds.sh`

From the working directory setup the build folder with `meson setup build`

Inside the build folder compile with `ninja`

Return to the working directory and launch with program with `./build/Opendds-ros2`

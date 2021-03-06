# Project LD explanation and theory of operation

Project LD is our attempt at Augmented Reality (AR) assisted beer pong (minus the beer). The goal was to track a bouncing ping pong ball using a camera in 3-dimensions in realtime and then superimpose the path of the bouncing ball on the video feed as well as superimpose the path that should have been taken to get the ball into the cup. We were able to get a successful 2D track of the ball's position and scale, but did not have time to work on the 3D track.

For this project, we used the DE2-115 expansion board with the Altera Cyclone IV E FPGA. We were provided with the 1.3 megapixel camera module, and spent a majority of the project interfacing the camera with the FPGA. By the end of 2 weeks, we were able to have a fully functioning 1.3 megapixel camera outputting its feed via VGA to a computer monitor. In addition, we were able to interface the NIOS II E microcontroller as a System-on-chip to toggle the camera settings. We made heavy use of exposure, red gain, blue gain, and green gain settings to achieve the best picture quality we could. 

The tracking was done very similar to how the visual effects software Adobe After Effects achieves its 2D motion track: In After Effects, you choose the point you want to track, and it generates a small box on the screen. Frame-by-frame, it then tracks the change in position and scale by looking at the change in high contrast points within the box. We made an FPGA-module to do the exact same thing, except in realtime. It worked rather well, but could not keep the track if the ball was dropped. 

The reason for this is we need to add a module that accomplishes frame interpolation. Since a falling ball falls very fast relative to the frame, comparing the frame before the drop to the frame after the drop will show a large vertical change between frames. Frame interpolation will guess where the ball would have been between the frames, and would allow for a much better track. 

# Interfaces/Devices used 

* VGA 
* Camera Module (1.3 MP TRDB_DC2)
* USB Mouse (via EZ-OTG)
* DE2-115 Expansion Board (with Altera Cyclone IV E)

# Demonstration 

A video of the process involved in making and the final demo can be found [here](https://www.youtube.com/watch?v=chocc--7Fws&t=6s)

# Authors 

* Harris Mohamed (Camera, configuration, conceptualization of match moving algorithm) - [Website](https://batman-wayne.github.io/website/)
* Neeloy Chakraborty (Mouse, realization of match moving algorithm) - [Git](https://github.com/TheNeeloy)

# Acknowledgement

* Professor [Zuofu Cheng](https://ece.illinois.edu/directory/profile/zcheng1) for giving valuable advice and being a great professor 
* TA David Zhang for believing in us 
* [Andrew Smith](https://github.com/atsmith3) for helping optimize the match move algorithm

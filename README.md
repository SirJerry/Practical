# Practical
Jerry's DIY phy

So the whole idea of the project is trying to make some physics practicals better with the help of technology.
What I’m working on is using Arduino to measure the speed of a DIY car without a stopwatch but the ultrasonic sensor. 
So in physics practicals, there’s always one factor that changes as you know. Here, what I would be changing is the size of the wheels, to show that bigger wheels = more speed.

I am using the wall as a reference point, so I push the car,  and the sensor starts reading when the car is about 20cm away from the wall and stops about 12cm away from the wall to get the time taken to cover that 8cm distance


## Suggesiton
I am a bit rusty with Arduino now, especially without the device itself. But, I caught wind of what you were trying to do. I am not sure the arduino system time functions will be flexible enough to get it done without writing higher level functions. Try using the Chrono library; works like a stopwatch. I attached screenshots of its functions as well as how to include it. The idea is just like a stopwatch. You might want to reset the chrono before using it because it starts timing once you initialize the object. So, once you are ready to time, you can call it to restart like a stopwatch and when you are ready to end timing you can call the time or stop it. Should work ideally, if you account for the delay offsets to a microsecond. I couldn't add to the code without knowing if I broke it with no device at hand. Check out this link for more info on the library. [Chrono Library](http://sofapirate.github.io/Chrono/)

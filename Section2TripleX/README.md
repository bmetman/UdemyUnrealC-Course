# Triple X Hacking Game
A game where you have to hack your way through five doors.
Made for [Udemy Unreal C++ course](https://www.udemy.com/course/unrealcourse/)

## How to Build
Open up in Visual Studio 2019. Uses C++17 for std::optional support. Only tested on Windows. 

**src** directory contains the source project.
**test** directory contains unit tests. Can be loaded dynamically (no precompiled headers).

## Remarks
* Visual Studio CPPunit tests doesn't have mocking support. Needed to build my own. Should have used [GoogleTest](https://github.com/google/googletest)
* Architecture follows [DDD principles](https://en.wikipedia.org/wiki/Domain-driven_design).
 * __resource__ directory contains user interactions
 * __usecase__ directory contains the usecases
 *__domain__ directory contains all domain objects
 *__data__ directory contains gateways for boundary communication



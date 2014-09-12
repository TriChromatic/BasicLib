/* 
 * File:   GridPoint.h
 * Author: Weaponized Jerk
 *
 * Created on May 20, 2014, 9:35 PM
 * 
Licensed to the Apache Software Foundation (ASF) under one
or more contributor license agreements.  See the NOTICE file
distributed with this work for additional information
regarding copyright ownership.  The ASF licenses this file
to you under the Apache License, Version 2.0 (the
"License"); you may not use this file except in compliance
with the License.  You may obtain a copy of the License at

  http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing,
software distributed under the License is distributed on an
"AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
KIND, either express or implied.  See the License for the
specific language governing permissions and limitations
under the License.
 */

#ifndef GRIDPOINT_H
#define	GRIDPOINT_H

class GridPoint {
public:
    GridPoint(int newXCord, int newYCord); //Defualt constructor creates a point with an x and y cord
    int GetX(); //Gets the x value of the point
    int GetY(); //Gets the y value of the point
    void SetX(int newXValue);
    void SetY(int newYValue);
    bool WhoAmI(int xCheck, int yCheck); //Answeres the great exestenial question of "Who am I?"... Your just a pointer and in a few seconds all you will be is a new space in memory waiting to be overriden, waiting to be deleted, holding onto your data member variables, trying not to forget your address which you hold onto for dear life. Then its all gone. You no longer are there, and a new brother takes your place, the same but different. This is your life. This is your destiny.
private:
    int xValue;
    int yValue;
};

#endif	/* GRIDPOINT_H */

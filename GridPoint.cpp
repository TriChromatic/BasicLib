/* 
 * File:   GridPoint.cpp
 * Author: Weaponized Jerk
 * 
 * This is a grid point object. It represents one point on a grid with an X and Y value.
 * It is represented as an int at this stage.
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
 * 
 * Created on May 20, 2014, 9:35 PM
 */

#include "GridPoint.h"

GridPoint::GridPoint ( int newXValue, int newYValue) {
    this->xValue = newXValue;
    this->yValue = newYValue;
}

int GridPoint::GetX () {
    return this->xValue;
}

int GridPoint::GetY () {
    return this->yValue;
}

void GridPoint::SetX (int newXValue) {
    this->xValue = newXValue;
}

void GridPoint::SetY (int newYValue) {
    this->yValue = newYValue;
}

bool GridPoint::WhoAmI(int xCheck, int yCheck) {
    if(this->xValue == xCheck && this->yValue == yCheck) {
        return true;
    } else {
        return false;
    }
}

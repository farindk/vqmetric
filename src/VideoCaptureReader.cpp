/*
 *
 * Copyright (c) 2015, Stefan Petscharnig. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301 USA
 */

#include "VideoCaptureReader.hpp"

bool VideoCaptureReader::nextFrame(cv::Mat& theFrame){
	return this->cap.read(theFrame);	
}
int VideoCaptureReader::getFps(){
	return this->cap.get(CV_CAP_PROP_FPS);
}
int VideoCaptureReader::getVideoWidth(){
	return this->cap.get(CV_CAP_PROP_FRAME_WIDTH);
}
int VideoCaptureReader::getVideoHeight(){
	return this->cap.get(CV_CAP_PROP_FRAME_HEIGHT);
}
int VideoCaptureReader::getNFrames(){
	return this->cap.get(CV_CAP_PROP_FRAME_COUNT);
}
std::string VideoCaptureReader::getVideoFilePath(){
	return VideoReader::getVideoFilePath();
}

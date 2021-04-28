/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Versions/A/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Espresso/Espresso-Structs.h>
@interface EspressoFaceLandmarkDetector : NSObject {

	vImage_Buffer* crop_scaled;
	vImage_Buffer* crop_192;
	shared_ptr<Espresso::net>* net;
	shared_ptr<Espresso::net>* net_detect;
	vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net>>>* nets_sub_landmark;
	CGRect _newface;

}

@property (assign) CGRect newface;              //@synthesize newface=_newface - In the implementation block
-(void)dealloc;
-(id)init;
-(CGRect)newface;
-(vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint>>*)extractSubLandmarksFromCrop192:(vImage_Buffer*)arg1 centers192:(vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint>>*)arg2 ;
-(vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint>>*)detect:(vImage_Buffer*)arg1 face:(CGRect)arg2 sublandmark:(char)arg3 doFaceRectFix:(char)arg4 ;
-(vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint>>*)detectInImageRect:(vImage_Buffer*)arg1 face:(CGRect)arg2 sublandmark:(char)arg3 ;
-(id)initWithNetworkAtPath:(id)arg1 context:(shared_ptr<Espresso::abstract_context>*)arg2 platform:(int)arg3 computePath:(int)arg4 ;
-(id)initWithNetworkAtPath:(id)arg1 contextObjC:(id)arg2 platform:(int)arg3 computePath:(int)arg4 ;
-(void)commonInit:(id)arg1 context:(shared_ptr<Espresso::abstract_context>*)arg2 platform:(int)arg3 computePath:(int)arg4 ;
-(void)setNewface:(CGRect)arg1 ;
@end


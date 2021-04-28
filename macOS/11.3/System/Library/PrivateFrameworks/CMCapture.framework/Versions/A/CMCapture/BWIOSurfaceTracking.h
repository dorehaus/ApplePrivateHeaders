/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSMutableArray;

@interface BWIOSurfaceTracking : NSObject {

	os_unfair_lock_s _trackedSurfacesLock;
	NSMutableArray* _trackedSurfaces;

}
+(void)initialize;
+(void)trackPixelBuffer:(CVBufferRef)arg1 surfaceUseCountIsZeroHandler:(/*^block*/id)arg2 ;
+(id)defaultSurfaceTracking;
+(void)noteSurfaceIDInUse:(unsigned)arg1 byClient:(id)arg2 ;
+(void)noteSurfaceIDNoLongerInUse:(unsigned)arg1 byClient:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)trackPixelBuffer:(CVBufferRef)arg1 surfaceUseCountIsZeroHandler:(/*^block*/id)arg2 ;
-(void)noteSurfaceIDInUse:(unsigned)arg1 ;
-(void)noteSurfaceIDNoLongerInUse:(unsigned)arg1 ;
@end

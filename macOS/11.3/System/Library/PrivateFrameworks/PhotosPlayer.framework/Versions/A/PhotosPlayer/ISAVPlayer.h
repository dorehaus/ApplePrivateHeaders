/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/Versions/A/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <AVFCore/AVPlayer.h>

@protocol OS_dispatch_queue;
@class ISRateCurveRequest, NSObject;

@interface ISAVPlayer : AVPlayer {

	ISRateCurveRequest* _currentRequest;
	NSObject*<OS_dispatch_queue> _initializedDispatchQueue;
	NSObject*<OS_dispatch_queue> _actualDispatchQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> actualDispatchQueue;              //@synthesize actualDispatchQueue=_actualDispatchQueue - In the implementation block
+(char)isAppleInternal;
+(char)isSpringBoard;
-(void)dealloc;
-(id)init;
-(id)dispatchQueue;
-(void)setRate:(float)arg1 ;
-(void)_setRate:(float)arg1 ;
-(id)initWithDispatchQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)actualDispatchQueue;
-(void)playToTime:(SCD_Struct_IS0)arg1 withInitialRate:(float)arg2 overDuration:(double)arg3 progressHandler:(/*^block*/id)arg4 ;
-(void)_cancelRateCurveRequest;
@end

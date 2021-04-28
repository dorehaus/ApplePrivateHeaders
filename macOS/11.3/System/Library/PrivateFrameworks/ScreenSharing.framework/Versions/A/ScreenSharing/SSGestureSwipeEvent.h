/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenSharing/ScreenSharing-Structs.h>
#import <ScreenSharing/SSGestureEvent.h>

@interface SSGestureSwipeEvent : SSGestureEvent {

	float _progress;
	float _positionX;
	float _positionY;
	float _velocityX;
	float _velocityY;
	float _velocityZ;
	long long _motion;
	long long _swipeMask;
	long long _flags;
	long long _flavor;

}

@property (assign) long long motion;                 //@synthesize motion=_motion - In the implementation block
@property (assign) long long swipeMask;              //@synthesize swipeMask=_swipeMask - In the implementation block
@property (assign) float progress;                   //@synthesize progress=_progress - In the implementation block
@property (assign) float positionX;                  //@synthesize positionX=_positionX - In the implementation block
@property (assign) float positionY;                  //@synthesize positionY=_positionY - In the implementation block
@property (assign) float velocityX;                  //@synthesize velocityX=_velocityX - In the implementation block
@property (assign) float velocityY;                  //@synthesize velocityY=_velocityY - In the implementation block
@property (assign) float velocityZ;                  //@synthesize velocityZ=_velocityZ - In the implementation block
@property (assign) long long flags;                  //@synthesize flags=_flags - In the implementation block
@property (assign) long long flavor;                 //@synthesize flavor=_flavor - In the implementation block
+(id)gestureSwipeEventWithCoordinates:(SSPoint)arg1 subType:(long long)arg2 motion:(long long)arg3 swipeMask:(long long)arg4 progress:(float)arg5 positionX:(float)arg6 positionY:(float)arg7 velocityX:(float)arg8 velocityY:(float)arg9 velocityZ:(float)arg10 flags:(long long)arg11 flavor:(long long)arg12 ;
-(long long)flags;
-(float)progress;
-(void)setFlags:(long long)arg1 ;
-(void)setProgress:(float)arg1 ;
-(long long)motion;
-(long long)flavor;
-(void)setFlavor:(long long)arg1 ;
-(void)setMotion:(long long)arg1 ;
-(void)setSwipeMask:(long long)arg1 ;
-(void)setPositionX:(float)arg1 ;
-(void)setPositionY:(float)arg1 ;
-(void)setVelocityX:(float)arg1 ;
-(void)setVelocityY:(float)arg1 ;
-(void)setVelocityZ:(float)arg1 ;
-(id)initWithCoordinates:(SSPoint)arg1 subType:(long long)arg2 motion:(long long)arg3 swipeMask:(long long)arg4 progress:(float)arg5 positionX:(float)arg6 positionY:(float)arg7 velocityX:(float)arg8 velocityY:(float)arg9 velocityZ:(float)arg10 flags:(long long)arg11 flavor:(long long)arg12 ;
-(long long)swipeMask;
-(float)positionX;
-(float)positionY;
-(float)velocityX;
-(float)velocityY;
-(float)velocityZ;
@end


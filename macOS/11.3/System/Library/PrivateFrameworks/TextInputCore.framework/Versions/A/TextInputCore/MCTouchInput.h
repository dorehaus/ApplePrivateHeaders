/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/MCKeyboardInput.h>

@interface MCTouchInput : MCKeyboardInput {

	double _radius;
	double _timestamp;
	CGPoint _touchPoint;

}

@property (nonatomic,readonly) CGPoint touchPoint;              //@synthesize touchPoint=_touchPoint - In the implementation block
@property (nonatomic,readonly) double radius;                   //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) double timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(double)timestamp;
-(double)radius;
-(char)canComposeNew:(id)arg1 ;
-(id)initWithTouchPoint:(CGPoint)arg1 radius:(double)arg2 timestamp:(double)arg3 ;
-(CGPoint)touchPoint;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/Versions/A/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TVRCGameControllerEvent : NSObject <NSSecureCoding> {

	char _down;
	double _timestamp;
	CGPoint _joystickLocation;

}

@property (nonatomic,readonly) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (getter=isDown,nonatomic,readonly) char down;               //@synthesize down=_down - In the implementation block
@property (nonatomic,readonly) CGPoint joystickLocation;              //@synthesize joystickLocation=_joystickLocation - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(char)isDown;
-(id)_initWithTimestamp:(double)arg1 isDown:(char)arg2 joystickLocation:(CGPoint)arg3 ;
-(CGPoint)joystickLocation;
@end


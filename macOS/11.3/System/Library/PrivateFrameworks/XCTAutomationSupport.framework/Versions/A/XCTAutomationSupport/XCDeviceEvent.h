/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XCTAutomationSupport.framework/Versions/A/XCTAutomationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <XCTAutomationSupport/XCTAutomationSupport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface XCDeviceEvent : NSObject <NSSecureCoding> {

	unsigned char _buttonMask;
	unsigned _eventPage;
	unsigned _usage;
	long long _displayID;
	double _duration;
	double _rotation;
	long long _clicks;
	unsigned long long _type;
	CGVector _offset;

}

@property (assign) long long displayID;                   //@synthesize displayID=_displayID - In the implementation block
@property (assign) unsigned eventPage;                    //@synthesize eventPage=_eventPage - In the implementation block
@property (assign) unsigned usage;                        //@synthesize usage=_usage - In the implementation block
@property (assign) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (assign) double rotation;                       //@synthesize rotation=_rotation - In the implementation block
@property (assign) unsigned long long type;               //@synthesize type=_type - In the implementation block
@property (assign) long long clicks;                      //@synthesize clicks=_clicks - In the implementation block
@property (assign) unsigned char buttonMask;              //@synthesize buttonMask=_buttonMask - In the implementation block
@property (assign) CGVector offset;                       //@synthesize offset=_offset - In the implementation block
@property (readonly) char isButtonHoldEvent; 
+(char)supportsSecureCoding;
+(id)deviceEventWithPage:(unsigned)arg1 usage:(unsigned)arg2 duration:(double)arg3 ;
+(id)deviceEventWithDisplayID:(long long)arg1 page:(unsigned)arg2 usage:(unsigned)arg3 duration:(double)arg4 ;
+(id)deviceEventForDigitalCrownRotation:(double)arg1 velocity:(double)arg2 ;
+(id)deviceEventWithDisplayID:(long long)arg1 knobOffset:(CGVector)arg2 knobButtons:(unsigned char)arg3 duration:(double)arg4 ;
+(id)deviceEventWithDisplayID:(long long)arg1 knobRotation:(long long)arg2 duration:(double)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(CGVector)offset;
-(void)setUsage:(unsigned)arg1 ;
-(unsigned)usage;
-(double)rotation;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(long long)displayID;
-(void)setButtonMask:(unsigned char)arg1 ;
-(unsigned char)buttonMask;
-(void)setRotation:(double)arg1 ;
-(void)setOffset:(CGVector)arg1 ;
-(void)setDisplayID:(long long)arg1 ;
-(void)setClicks:(long long)arg1 ;
-(long long)clicks;
-(void)setEventPage:(unsigned)arg1 ;
-(unsigned)eventPage;
-(char)isButtonHoldEvent;
@end


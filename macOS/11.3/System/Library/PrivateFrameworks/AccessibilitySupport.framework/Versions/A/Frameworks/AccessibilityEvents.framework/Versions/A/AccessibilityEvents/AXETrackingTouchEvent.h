/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityEvents.framework/Versions/A/AccessibilityEvents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityEvents/AccessibilityEvents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSObjectNSCopying;
@class NSDate;

@interface AXETrackingTouchEvent : NSObject <NSCopying> {

	NSDate* _timestamp;
	NSDate* _touchStartTimestamp;
	id<NSObject><NSCopying> _identity;
	unsigned long long _phase;
	CGPoint _location;
	CGPoint _normalizedLocation;

}

@property (nonatomic,retain) NSDate * timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSDate * touchStartTimestamp;                    //@synthesize touchStartTimestamp=_touchStartTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long phase;                        //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) CGPoint normalizedLocation;                      //@synthesize normalizedLocation=_normalizedLocation - In the implementation block
@property (nonatomic,readonly) id<NSObject><NSCopying> identity;              //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) CGPoint location;                              //@synthesize location=_location - In the implementation block
+(id)touchFromNSTouch:(id)arg1 timestamp:(id)arg2 touchStartTimestamp:(id)arg3 contextOrigin:(CGPoint)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(CGPoint)location;
-(NSDate *)timestamp;
-(id<NSObject><NSCopying>)identity;
-(unsigned long long)phase;
-(void)setPhase:(unsigned long long)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(CGPoint)normalizedLocation;
-(void)setNormalizedLocation:(CGPoint)arg1 ;
-(void)setTouchStartTimestamp:(NSDate *)arg1 ;
-(NSDate *)touchStartTimestamp;
-(id)initWithIdentity:(id)arg1 location:(CGPoint)arg2 normalizedLocation:(CGPoint)arg3 phase:(unsigned long long)arg4 timestamp:(id)arg5 touchStartTimestamp:(id)arg6 ;
-(id)_nameOfPhase:(unsigned long long)arg1 ;
@end


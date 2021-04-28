/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AVHapticPlayerParameterCurve : NSObject <NSSecureCoding> {

	unsigned long long _type;
	double _time;
	unsigned long long _shape;
	NSArray* _controlPoints;

}

@property (assign) unsigned long long type;                //@synthesize type=_type - In the implementation block
@property (assign) double time;                            //@synthesize time=_time - In the implementation block
@property (assign) unsigned long long shape;               //@synthesize shape=_shape - In the implementation block
@property (readonly) NSArray * controlPoints; 
+(char)supportsSecureCoding;
-(id)init;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(double)time;
-(NSArray *)controlPoints;
-(void)setTime:(double)arg1 ;
-(unsigned long long)shape;
-(id)initWithType:(unsigned long long)arg1 relativeTime:(double)arg2 shape:(unsigned long long)arg3 controlPoints:(id)arg4 ;
-(void)setShape:(unsigned long long)arg1 ;
@end


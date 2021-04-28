/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _NS1DVelocityFilter : NSObject {

	double _maxAllowedVelocity;
	double _lastTimestamp;
	id _private;

}

@property (assign) double lastTimestamp;                   //@synthesize lastTimestamp=_lastTimestamp - In the implementation block
@property (readonly) double filteredVelocity; 
@property (assign) double maxAllowedVelocity;              //@synthesize maxAllowedVelocity=_maxAllowedVelocity - In the implementation block
-(void)dealloc;
-(id)init;
-(void)reset;
-(double)filteredVelocity;
-(void)setMaxAllowedVelocity:(double)arg1 ;
-(void)addDelta:(double)arg1 withTimestamp:(double)arg2 ;
-(char)resetIfOutOfDate:(double)arg1 ;
-(char)_isTimestampOutOfDate:(double)arg1 ;
-(double)lastTimestamp;
-(void)setLastTimestamp:(double)arg1 ;
-(double)maxAllowedVelocity;
@end

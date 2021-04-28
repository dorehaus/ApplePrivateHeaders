/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/Versions/A/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FlightUtilities/FlightUtilities-Structs.h>
#import <AppKit/NSView.h>

@protocol FUDotIndicatorTarget;
@class FUStyleProvider;

@interface FUDotIndicator : NSView {

	char _mouseClickStarted;
	id<FUDotIndicatorTarget> _target;
	FUStyleProvider* _provider;
	unsigned long long _selectedSegment;
	unsigned long long _segmentCount;

}

@property (assign,nonatomic,__weak) id<FUDotIndicatorTarget> target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) FUStyleProvider * provider;                          //@synthesize provider=_provider - In the implementation block
@property (assign,nonatomic) unsigned long long selectedSegment;                  //@synthesize selectedSegment=_selectedSegment - In the implementation block
@property (assign,nonatomic) unsigned long long segmentCount;                     //@synthesize segmentCount=_segmentCount - In the implementation block
@property (nonatomic,readonly) long long integerValue; 
-(long long)integerValue;
-(void)setTarget:(id<FUDotIndicatorTarget>)arg1 ;
-(id<FUDotIndicatorTarget>)target;
-(FUStyleProvider *)provider;
-(void)setProvider:(FUStyleProvider *)arg1 ;
-(char)allowsVibrancy;
-(CGSize)intrinsicContentSize;
-(void)mouseDown:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setSegmentCount:(unsigned long long)arg1 ;
-(unsigned long long)selectedSegment;
-(void)mouseUp:(id)arg1 ;
-(void)setSelectedSegment:(unsigned long long)arg1 ;
-(unsigned long long)segmentCount;
@end

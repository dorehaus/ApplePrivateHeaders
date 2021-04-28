/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/Versions/A/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface SPBeaconResult : NSObject {

	char _shouldBeacon;
	NSDate* _nextStateChangeDate;

}

@property (assign,nonatomic) char shouldBeacon;                       //@synthesize shouldBeacon=_shouldBeacon - In the implementation block
@property (nonatomic,copy) NSDate * nextStateChangeDate;              //@synthesize nextStateChangeDate=_nextStateChangeDate - In the implementation block
-(id)description;
-(id)initWithShouldBeacon:(char)arg1 nextStateChangeDate:(id)arg2 ;
-(char)shouldBeacon;
-(void)setShouldBeacon:(char)arg1 ;
-(NSDate *)nextStateChangeDate;
-(void)setNextStateChangeDate:(NSDate *)arg1 ;
@end

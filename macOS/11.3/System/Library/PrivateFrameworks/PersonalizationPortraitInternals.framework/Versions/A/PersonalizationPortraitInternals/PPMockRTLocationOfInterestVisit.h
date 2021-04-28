/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface PPMockRTLocationOfInterestVisit : NSObject {

	NSDate* _entryDate;
	NSDate* _exitDate;

}

@property (nonatomic,retain) NSDate * entryDate;              //@synthesize entryDate=_entryDate - In the implementation block
@property (nonatomic,retain) NSDate * exitDate;               //@synthesize exitDate=_exitDate - In the implementation block
+(id)mockLocationOfInterestVisitWithEntryDate:(id)arg1 exitDate:(id)arg2 ;
-(NSDate *)entryDate;
-(NSDate *)exitDate;
-(void)setEntryDate:(NSDate *)arg1 ;
-(void)setExitDate:(NSDate *)arg1 ;
@end


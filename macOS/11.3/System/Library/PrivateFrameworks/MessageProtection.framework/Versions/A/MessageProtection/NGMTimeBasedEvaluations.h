/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/Versions/A/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface NGMTimeBasedEvaluations : NSObject {

	NSDate* _date;

}

@property (retain) NSDate * date;              //@synthesize date=_date - In the implementation block
+(id)sharedManager;
+(id)nowDate;
+(char)validateFetchedPrekeyTimestamp:(double)arg1 forEvaluationType:(unsigned long long)arg2 ;
+(char)prekeyShouldBeRolled:(id)arg1 ;
+(char)prekeyCanBeDeleted:(id)arg1 ;
+(id)oldestDateAllowedToSendTo;
+(double)timeIntervalAllowedForAction:(unsigned long long)arg1 ;
+(id)debugDescriptionForAction:(unsigned long long)arg1 ;
+(void)setNowDate:(id)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end


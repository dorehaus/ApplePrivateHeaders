/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/Versions/A/IMDPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDPersistence/IMDPersistence-Structs.h>
#import <IMDPersistence/IMAbstractDatabaseTrimmer.h>

@interface IMTrimDatabaseToDays : IMAbstractDatabaseTrimmer {

	long long _newerThanDays;

}

@property (nonatomic,readonly) long long newerThanDays;              //@synthesize newerThanDays=_newerThanDays - In the implementation block
-(id)initWithSourceDatabasePath:(id)arg1 destinationDatabasePath:(id)arg2 newerThanDays:(long long)arg3 ;
-(void)performMessageSelectionWithOperation:(IMDSqlOperation*)arg1 ;
-(long long)newerThanDays;
@end


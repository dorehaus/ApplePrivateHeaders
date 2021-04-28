/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDate;

@interface _DKLocalChanges : NSObject {

	NSArray* _insertedObjects;
	NSArray* _tombstones;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSArray * insertedObjects;              //@synthesize insertedObjects=_insertedObjects - In the implementation block
@property (nonatomic,readonly) NSArray * tombstones;                   //@synthesize tombstones=_tombstones - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                     //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                       //@synthesize endDate=_endDate - In the implementation block
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSArray *)insertedObjects;
-(NSArray *)tombstones;
@end

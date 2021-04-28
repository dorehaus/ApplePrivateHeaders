/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, CLLocation, NSArray, PGManager;

@interface PGFeatureVectorGenerator : NSObject {

	char _isDryTesting;
	NSDate* _localDate;
	CLLocation* _location;
	NSArray* _peopleNames;
	PGManager* _manager;

}

@property (assign) char isDryTesting;                            //@synthesize isDryTesting=_isDryTesting - In the implementation block
@property (nonatomic,retain) NSDate * localDate;                 //@synthesize localDate=_localDate - In the implementation block
@property (nonatomic,retain) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSArray * peopleNames;                //@synthesize peopleNames=_peopleNames - In the implementation block
@property (__weak,readonly) PGManager * manager;                 //@synthesize manager=_manager - In the implementation block
+(id)_calendarEventsBetweenDate:(id)arg1 andDate:(id)arg2 atLocation:(id)arg3 withPeopleUUIDs:(id)arg4 inPhotoLibrary:(id)arg5 ;
-(PGManager *)manager;
-(CLLocation *)location;
-(id)initWithManager:(id)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSArray *)peopleNames;
-(void)setPeopleNames:(NSArray *)arg1 ;
-(NSDate *)localDate;
-(void)setLocalDate:(NSDate *)arg1 ;
-(void)enumerateFeatureVectorsByTypeUsingBlock:(/*^block*/id)arg1 ;
-(char)isDryTesting;
-(void)setIsDryTesting:(char)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/Versions/A/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/STSerializableManagedObject.h>
#import <libobjc.A.dylib/STSyncableSubObject.h>

@class NSDate, STBlueprint, NSString, NSNumber, STBlueprintScheduleRepresentation;

@interface STBlueprintSchedule : NSManagedObject <STSerializableManagedObject, STSyncableSubObject>

@property (nonatomic,retain) NSDate * day0Start; 
@property (nonatomic,retain) NSDate * day1Start; 
@property (nonatomic,retain) NSDate * day2Start; 
@property (nonatomic,retain) NSDate * day3Start; 
@property (nonatomic,retain) NSDate * day4Start; 
@property (nonatomic,retain) NSDate * day5Start; 
@property (nonatomic,retain) NSDate * day6Start; 
@property (nonatomic,retain) NSDate * day0End; 
@property (nonatomic,retain) NSDate * day1End; 
@property (nonatomic,retain) NSDate * day2End; 
@property (nonatomic,retain) NSDate * day3End; 
@property (nonatomic,retain) NSDate * day4End; 
@property (nonatomic,retain) NSDate * day5End; 
@property (nonatomic,retain) NSDate * day6End; 
@property (nonatomic,readonly) STBlueprint * blueprint; 
@property (nonatomic,copy) NSString * calendarIdentifier; 
@property (nonatomic,retain) NSNumber * notificationTimeInterval; 
@property (nonatomic,retain) STBlueprintScheduleRepresentation * scheduleRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<STSerializableManagedObject> syncableRootObject; 
+(id)startDateKeyPaths;
+(id)endDateKeyPaths;
+(id)keyPathsForValuesAffectingScheduleRepresentation;
-(id)dictionaryRepresentation;
-(STBlueprintScheduleRepresentation *)scheduleRepresentation;
-(char)updateWithDictionaryRepresentation:(id)arg1 ;
-(void)setStartTime:(id)arg1 endTime:(id)arg2 ;
-(void)setStartTime:(id)arg1 endTime:(id)arg2 forDay:(unsigned long long)arg3 ;
-(id<STSerializableManagedObject>)syncableRootObject;
-(void)setScheduleRepresentation:(STBlueprintScheduleRepresentation *)arg1 ;
@end


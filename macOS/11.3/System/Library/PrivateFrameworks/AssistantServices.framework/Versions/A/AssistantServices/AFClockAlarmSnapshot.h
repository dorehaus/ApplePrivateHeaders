/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFContextSnapshot.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSDate, NSDictionary, NSOrderedSet, NSString;

@interface AFClockAlarmSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	unsigned long long _generation;
	NSDate* _date;
	NSDictionary* _alarmsByID;
	NSOrderedSet* _notifiedFiringAlarmIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long generation;                           //@synthesize generation=_generation - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * alarmsByID;                          //@synthesize alarmsByID=_alarmsByID - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * notifiedFiringAlarmIDs;              //@synthesize notifiedFiringAlarmIDs=_notifiedFiringAlarmIDs - In the implementation block
+(char)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)generation;
-(NSDate *)date;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)buildDictionaryRepresentation;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(char)hasFiringAlarms;
-(NSOrderedSet *)notifiedFiringAlarmIDs;
-(NSDictionary *)alarmsByID;
-(id)mostRecentFiringAlarm;
-(id)firingAlarms;
-(id)initWithSerializedBackingStore:(id)arg1 ;
-(id)ad_shortDescription;
-(id)serializedBackingStore;
-(id)initWithGeneration:(unsigned long long)arg1 date:(id)arg2 alarmsByID:(id)arg3 notifiedFiringAlarmIDs:(id)arg4 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class NSString, NSDate;

@interface EKSuggestedEventInfo : EKObject {

	NSString* _opaqueKey;
	NSString* _uniqueKey;

}

@property (assign,nonatomic) unsigned long long changedFields; 
@property (nonatomic,copy,readonly) NSString * opaqueKey;                   //@synthesize opaqueKey=_opaqueKey - In the implementation block
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,retain) NSDate * timestampAsDate; 
@property (nonatomic,copy,readonly) NSString * uniqueKey;                   //@synthesize uniqueKey=_uniqueKey - In the implementation block
+(Class)frozenClass;
+(id)uniqueIdentifierForObject:(id)arg1 ;
+(id)knownIdentityKeys;
+(id)knownSingleValueKeys;
+(char)isDerivedRelationship;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)opaqueKey;
-(unsigned long long)changedFields;
-(NSString *)uniqueKey;
-(id)initWithEventStore:(id)arg1 opaqueKey:(id)arg2 uniqueKey:(id)arg3 extractionGroupIdentifier:(id)arg4 ;
-(id)initWithObject:(id)arg1 createPartialBackingObject:(char)arg2 keepBackingObject:(char)arg3 preFrozenRelationshipObjects:(id)arg4 additionalFrozenProperties:(id)arg5 ;
-(void)setChangedFields:(unsigned long long)arg1 ;
-(id)initWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2 extractionGroupIdentifier:(id)arg3 ;
-(void)setTimestampAsDate:(NSDate *)arg1 ;
-(NSDate *)timestampAsDate;
-(id)initWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2 ;
@end


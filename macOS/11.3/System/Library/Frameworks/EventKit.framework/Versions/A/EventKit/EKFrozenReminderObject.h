/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKFrozenObject.h>

@class EKChangeSet, EKReminderStore, NSArray;

@interface EKFrozenReminderObject : EKFrozenObject {

	EKChangeSet* _changeSet;
	EKReminderStore* _reminderStore;
	id _remObject;
	NSArray* _path;

}

@property (nonatomic,readonly) EKChangeSet * uncommittedChanges; 
@property (nonatomic,copy) NSArray * path;                                    //@synthesize path=_path - In the implementation block
+(Class)meltedClass;
+(id)propertiesUnavailableForPartialObjects;
+(Class)frozenClass;
+(id)frozenObjectForObject:(id)arg1 ;
+(char)canCommitSelf;
+(id)uniqueIdentifierForREMObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(NSArray *)path;
-(id)uniqueIdentifier;
-(void)setPath:(NSArray *)arg1 ;
-(id)changeSet;
-(char)isPartialObject;
-(char)isNew;
-(char)canBeConvertedToFullObject;
-(char)isFrozen;
-(char)isPropertyUnavailable:(id)arg1 ;
-(id)preFrozenRelationshipObjects;
-(id)semanticIdentifier;
-(id)frozenObject;
-(id)remObjectID;
-(char)isCompletelyEqual:(id)arg1 ;
-(id)updatedFrozenObjectWithChanges:(id)arg1 ;
-(id)existingMeltedObject;
-(char)isEqual:(id)arg1 ignoringProperties:(id)arg2 ;
-(id)initWithREMObject:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3 ;
-(id)valueForSingleValueKey:(id)arg1 backingValue:(/*^block*/id)arg2 ;
-(id)initWithREMObject:(id)arg1 inStore:(id)arg2 ;
-(id)updateParentToCommitSelf:(id)arg1 ;
-(id)updatedFrozenObjectWithChanges:(id)arg1 updatedChildren:(id)arg2 ;
-(id)REMObject;
-(EKChangeSet *)uncommittedChanges;
-(char)_applyChangesToSaveRequest:(id)arg1 error:(id*)arg2 ;
@end


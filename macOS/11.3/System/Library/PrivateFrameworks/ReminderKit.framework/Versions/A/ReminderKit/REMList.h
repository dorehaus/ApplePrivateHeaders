/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/REMDAChangeTrackableFetchableModel.h>
#import <libobjc.A.dylib/REMDAChangedModelObjectResult.h>
#import <libobjc.A.dylib/_REMDAChangeTrackableModel.h>
#import <libobjc.A.dylib/REMObjectIDProviding.h>
#import <libobjc.A.dylib/REMExternalSyncMetadataProviding.h>

@class REMStore, REMListStorage, REMAccount, NSString, REMObjectID, NSDictionary, NSSet, NSArray, NSOrderedSet, NSData, REMResolutionTokenMap, NSDate, REMListCalDAVNotificationContext, REMListShareeContext, REMColor, REMListAppearanceContext, REMListSublistContext;

@interface REMList : NSObject <REMDAChangeTrackableFetchableModel, REMDAChangedModelObjectResult, _REMDAChangeTrackableModel, REMObjectIDProviding, REMExternalSyncMetadataProviding> {

	REMStore* _store;
	REMListStorage* _storage;
	REMAccount* _account;
	REMList* _parentList;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) REMObjectID * objectID; 
@property (nonatomic,readonly) REMObjectID * accountID; 
@property (nonatomic,readonly) NSString * externalIdentifierForMarkedForDeletionObject; 
@property (nonatomic,readonly) REMObjectID * parentAccountID; 
@property (nonatomic,readonly) NSDictionary * reminderIDsOrderingHints; 
@property (nonatomic,readonly) NSSet * reminderIDsToUndelete; 
@property (nonatomic,readonly) char remindersICSDisplayOrderChanged; 
@property (nonatomic,readonly) NSArray * calDAVNotifications; 
@property (nonatomic,readonly) NSArray * sharees; 
@property (nonatomic,readonly) REMObjectID * sharedOwnerID; 
@property (nonatomic,readonly) NSString * currentUserShareParticipantID; 
@property (nonatomic,copy) REMListStorage * storage;                                                      //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * reminderIDsOrdering; 
@property (nonatomic,readonly) NSOrderedSet * reminderIDsMergeableOrdering; 
@property (nonatomic,readonly) NSData * reminderIDsMergeableOrderingData; 
@property (nonatomic,readonly) char isGroup; 
@property (nonatomic,retain) REMList * parentList;                                                        //@synthesize parentList=_parentList - In the implementation block
@property (nonatomic,readonly) NSString * badgeEmblem; 
@property (nonatomic,readonly) char showingLargeAttachments; 
@property (nonatomic,readonly) REMResolutionTokenMap * resolutionTokenMap; 
@property (nonatomic,readonly) NSData * resolutionTokenMapData; 
@property (nonatomic,readonly) REMObjectID * parentListID; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * sharedOwnerName; 
@property (nonatomic,readonly) NSString * sharedOwnerAddress; 
@property (nonatomic,readonly) long long sharingStatus; 
@property (nonatomic,readonly) char canBeShared; 
@property (nonatomic,readonly) char canBeIncludedInGroup; 
@property (nonatomic,readonly) char isShared; 
@property (nonatomic,readonly) char isOwnedByMe; 
@property (nonatomic,readonly) char isSharedToMe; 
@property (nonatomic,copy,readonly) NSDate * lastUserAccessDate; 
@property (nonatomic,readonly) NSString * daExternalIdentificationTag; 
@property (nonatomic,readonly) NSDictionary * daBulkRequests; 
@property (nonatomic,readonly) long long daDisplayOrder; 
@property (nonatomic,readonly) char daIsEventOnlyContainer; 
@property (nonatomic,readonly) char daIsReadOnly; 
@property (nonatomic,readonly) char daIsImmutable; 
@property (nonatomic,readonly) char daIsNotificationsCollection; 
@property (nonatomic,readonly) REMListCalDAVNotificationContext * calDAVNotificationContext; 
@property (nonatomic,readonly) REMListShareeContext * shareeContext; 
@property (assign,nonatomic) char isPlaceholder; 
@property (nonatomic,readonly) REMStore * store;                                                          //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) REMAccount * account;                                                      //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) REMColor * color; 
@property (nonatomic,readonly) NSString * sortingStyle; 
@property (nonatomic,readonly) REMListAppearanceContext * appearanceContext; 
@property (nonatomic,readonly) REMListSublistContext * sublistContext; 
@property (nonatomic,readonly) REMObjectID * remObjectID; 
@property (nonatomic,readonly) NSString * externalIdentifier; 
@property (nonatomic,readonly) NSString * externalModificationTag; 
@property (nonatomic,readonly) NSString * daSyncToken; 
@property (nonatomic,readonly) NSString * daPushKey; 
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg1 ;
+(id)cdEntityName;
+(id)siriFoundInAppsListID;
+(/*^block*/id)rem_DA_deletedKeyFromTombstoneBlock;
+(char)rem_DA_supportsFetching;
+(char)rem_DA_supportsLazyDelete;
+(id)rem_DA_lazyDeleteProperties;
+(/*^block*/id)rem_DA_deletedKeyFromLazyDeletedModelObjectBlock;
+(/*^block*/id)rem_DA_fetchByObjectIDBlock;
+(/*^block*/id)rem_DA_fetchByObjectIDsBlock;
+(char)isChangeTrackableModel;
+(char)isChangeTrackableFetchableModel;
+(id)localAccountDefaultListID;
+(char)isSharedWithShareeCount:(unsigned long long)arg1 sharingStatus:(long long)arg2 ;
+(id)fetchRequestWithPredicateDescriptor:(id)arg1 sortDescriptors:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(REMListStorage *)storage;
-(id)valueForUndefinedKey:(id)arg1 ;
-(REMStore *)store;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(char)isShared;
-(void)setStorage:(REMListStorage *)arg1 ;
-(REMAccount *)account;
-(char)canBeShared;
-(REMObjectID *)remObjectID;
-(id)ekColor;
-(char)isSharedToMe;
-(REMListShareeContext *)shareeContext;
-(id)fetchRemindersWithError:(id*)arg1 ;
-(id)fetchRemindersWithExternalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)fetchReminderWithExternalIdentifier:(id)arg1 error:(id*)arg2 ;
-(REMListCalDAVNotificationContext *)calDAVNotificationContext;
-(char)isOwnedByMe;
-(REMListSublistContext *)sublistContext;
-(id)optionalObjectID;
-(id)initWithStore:(id)arg1 account:(id)arg2 storage:(id)arg3 ;
-(void)setParentList:(REMList *)arg1 ;
-(NSString *)externalIdentifierForMarkedForDeletionObject;
-(REMList *)parentList;
-(id)formattedSharedOwnerName;
-(REMListAppearanceContext *)appearanceContext;
-(NSOrderedSet *)reminderIDsOrdering;
-(char)canBeIncludedInGroup;
-(id)fetchRemindersAndSubtasksWithError:(id*)arg1 ;
-(id)sharingStatusText;
-(void)hack_overrideReminderIDsOrderingWithOrderedObjectIDs:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/REMConflictResolving.h>
#import <libobjc.A.dylib/REMSaveRequestTrackedValue.h>
#import <libobjc.A.dylib/REMExternalSyncMetadataWritableProviding.h>

@class REMSaveRequest, REMListStorage, REMChangedKeysObserver, REMAccount, REMObjectID, NSData, NSOrderedSet, NSString, NSDictionary, NSSet, NSArray, REMAccountCapabilities, NSDate, REMListCalDAVNotificationContextChangeItem, REMListShareeContextChangeItem, REMColor, REMListAppearanceContextChangeItem, REMListSublistContextChangeItem, REMResolutionTokenMap;

@interface REMListChangeItem : NSObject <REMConflictResolving, REMSaveRequestTrackedValue, REMExternalSyncMetadataWritableProviding> {

	REMSaveRequest* _saveRequest;
	REMListStorage* _storage;
	REMChangedKeysObserver* _changedKeysObserver;
	REMAccount* _parentAccount;

}

@property (nonatomic,retain) REMChangedKeysObserver * changedKeysObserver;                                          //@synthesize changedKeysObserver=_changedKeysObserver - In the implementation block
@property (nonatomic,readonly) REMObjectID * remObjectID; 
@property (nonatomic,retain) REMObjectID * objectID; 
@property (nonatomic,retain) REMObjectID * parentAccountID; 
@property (nonatomic,retain) REMObjectID * accountID; 
@property (nonatomic,readonly) NSData * reminderIDsMergeableOrderingData; 
@property (nonatomic,readonly) NSOrderedSet * reminderIDsMergeableOrdering; 
@property (nonatomic,retain) NSString * badgeEmblem; 
@property (assign,nonatomic) char showingLargeAttachments; 
@property (nonatomic,retain) NSDictionary * reminderIDsOrderingHints; 
@property (nonatomic,retain) NSSet * reminderIDsToUndelete; 
@property (nonatomic,retain) NSArray * calDAVNotifications; 
@property (nonatomic,retain) NSArray * sharees; 
@property (nonatomic,retain) REMObjectID * sharedOwnerID; 
@property (nonatomic,readonly) char isPlaceholder; 
@property (assign,nonatomic) char remindersICSDisplayOrderChanged; 
@property (nonatomic,readonly) REMAccount * parentAccount;                                                          //@synthesize parentAccount=_parentAccount - In the implementation block
@property (nonatomic,copy,readonly) REMListStorage * storage;                                                       //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) REMAccountCapabilities * accountCapabilities; 
@property (nonatomic,readonly) char isGroup; 
@property (nonatomic,retain) REMObjectID * parentListID; 
@property (nonatomic,copy) NSString * sharedOwnerName; 
@property (nonatomic,copy) NSString * sharedOwnerAddress; 
@property (assign,nonatomic) long long sharingStatus; 
@property (nonatomic,readonly) char isShared; 
@property (nonatomic,readonly) char isSharedToMe; 
@property (nonatomic,readonly) char canBeIncludedInGroup; 
@property (nonatomic,readonly) NSString * currentUserShareParticipantID; 
@property (nonatomic,copy) NSDate * lastUserAccessDate; 
@property (nonatomic,retain) NSString * daExternalIdentificationTag; 
@property (nonatomic,retain) NSDictionary * daBulkRequests; 
@property (assign,nonatomic) long long daDisplayOrder; 
@property (assign,nonatomic) char daIsEventOnlyContainer; 
@property (assign,nonatomic) char daIsReadOnly; 
@property (assign,nonatomic) char daIsImmutable; 
@property (assign,nonatomic) char daIsNotificationsCollection; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) REMListCalDAVNotificationContextChangeItem * calDAVNotificationContext; 
@property (nonatomic,readonly) REMListShareeContextChangeItem * shareeContext; 
@property (nonatomic,readonly) REMSaveRequest * saveRequest;                                                        //@synthesize saveRequest=_saveRequest - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) REMColor * color; 
@property (nonatomic,copy) NSString * sortingStyle; 
@property (nonatomic,readonly) REMListAppearanceContextChangeItem * appearanceContext; 
@property (nonatomic,readonly) REMListSublistContextChangeItem * sublistContext; 
@property (nonatomic,retain) REMResolutionTokenMap * resolutionTokenMap; 
@property (nonatomic,retain) NSData * resolutionTokenMapData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * daSyncToken; 
@property (nonatomic,copy) NSString * daPushKey; 
+(void)initialize;
-(char)respondsToSelector:(SEL)arg1 ;
-(NSString *)description;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(REMListStorage *)storage;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(char)isShared;
-(id)changedKeys;
-(REMAccount *)parentAccount;
-(REMSaveRequest *)saveRequest;
-(void)removeFromParent;
-(id)ekColor;
-(void)addReminderChangeItem:(id)arg1 ;
-(char)isSharedToMe;
-(void)setDaDisplayOrder:(long long)arg1 ;
-(REMListShareeContextChangeItem *)shareeContext;
-(void)setDaIsNotificationsCollection:(char)arg1 ;
-(REMListCalDAVNotificationContextChangeItem *)calDAVNotificationContext;
-(id)initWithSaveRequest:(id)arg1 storage:(id)arg2 accountCapabilities:(id)arg3 changedKeysObserver:(id)arg4 ;
-(void)lowLevelAddReminderIDToOrdering:(id)arg1 withParentReminderChangeItem:(id)arg2 ;
-(REMAccountCapabilities *)accountCapabilities;
-(id)initWithSaveRequest:(id)arg1 storage:(id)arg2 accountCapabilities:(id)arg3 observeInitialValues:(char)arg4 ;
-(void)insertReminderChangeItem:(id)arg1 beforeReminderChangeItem:(id)arg2 ;
-(void)insertReminderChangeItem:(id)arg1 adjacentToReminderChangeItem:(id)arg2 isAfter:(char)arg3 withParentReminderChangeItem:(id)arg4 ;
-(REMChangedKeysObserver *)changedKeysObserver;
-(id)lowLevelRemoveReminderIDFromOrdering:(id)arg1 ;
-(id)resolutionTokenKeyForChangedKey:(id)arg1 ;
-(id)shallowCopyWithSaveRequest:(id)arg1 ;
-(void)setChangedKeysObserver:(REMChangedKeysObserver *)arg1 ;
-(void)undeleteReminderWithID:(id)arg1 usingUndo:(id)arg2 ;
-(void)insertReminderChangeItem:(id)arg1 afterReminderChangeItem:(id)arg2 ;
-(REMListSublistContextChangeItem *)sublistContext;
-(void)_lowLevelApplyUndoToOrdering:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 name:(id)arg2 insertIntoAccountChangeItem:(id)arg3 isGroup:(char)arg4 ;
-(id)initWithObjectID:(id)arg1 name:(id)arg2 insertIntoAccountChangeItem:(id)arg3 ;
-(id)initWithObjectID:(id)arg1 name:(id)arg2 insertIntoListSublistContextChangeItem:(id)arg3 ;
-(REMListAppearanceContextChangeItem *)appearanceContext;
-(char)canBeIncludedInGroup;
-(id)initWithObjectID:(id)arg1 name:(id)arg2 insertIntoAccountChangeItem:(id)arg3 isGroup:(char)arg4 withParentList:(id)arg5 ;
-(id)removeFromAccountAllowingUndo;
-(char)_lowLevelAddReminderIDToOrdering:(id)arg1 relativeToSiblingID:(id)arg2 isAfter:(char)arg3 ;
-(void)_editReminderIDsOrderingUsingBlock:(/*^block*/id)arg1 ;
-(void)_reassignReminderChangeItem:(id)arg1 withParentReminderChangeItem:(id)arg2 ;
-(void)_lowLevelAddReminderChangeItemToOrdering:(id)arg1 atIndexOfSibling:(id)arg2 isAfter:(char)arg3 withParent:(id)arg4 ;
-(id)removeFromParentAllowingUndo;
-(char)optimisticallyInsertReminderIDToOrderingForReminderChangeItemBeingSaved:(id)arg1 ;
-(void)undeleteRemindersWithoutUndoWithIDs:(id)arg1 isCalDAV:(char)arg2 ;
-(void)_testingOnly_setReminderIDsMergeableOrder:(id)arg1 ;
-(void)copyListDataFrom:(id)arg1 ;
@end


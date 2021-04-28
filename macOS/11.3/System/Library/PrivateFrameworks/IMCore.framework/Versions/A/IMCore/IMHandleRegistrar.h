/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSHashTable, IMBusinessNameManager;

@interface IMHandleRegistrar : NSObject {

	NSMutableDictionary* _siblingsMap;
	NSHashTable* _allIMHandles;
	NSMutableDictionary* _IDToHandlesMap;
	NSMutableDictionary* _CNIDToHandlesMap;
	IMBusinessNameManager* _businessNameManager;

}
+(id)sharedInstance;
-(id)init;
-(id)businessNameForUID:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(id)allIMHandles;
-(void)_dumpOutAllIMHandlesForAccount:(id)arg1 ;
-(id)handlesForCNIdentifier:(id)arg1 ;
-(void)removeHandleFromCNIDMap:(id)arg1 withCNID:(id)arg2 ;
-(void)clearSiblingCacheForIMHandle:(id)arg1 ;
-(void)registerIMHandle:(id)arg1 ;
-(void)unregisterIMHandle:(id)arg1 ;
-(void)addHandleToCNIDMap:(id)arg1 CNContact:(id)arg2 ;
-(id)_existingAccountSiblingsForHandle:(id)arg1 ;
-(id)_accountSiblingsForHandle:(id)arg1 ;
-(id)_existingChatSiblingsForHandle:(id)arg1 ;
-(id)_chatSiblingsForHandle:(id)arg1 ;
-(id)siblingsForIMHandle:(id)arg1 ;
-(void)_addressBookChanged;
-(id)getIMHandlesForID:(id)arg1 ;
-(void)processContactChangeHistoryEventWithHandleIDs:(id)arg1 andCNContact:(id)arg2 ;
-(void)clearCNIDToHandlesMap;
-(void)_handleAddContactChangeHistoryEvent:(id)arg1 ;
-(void)_handleDeleteContactChangeHistoryEvent:(id)arg1 ;
-(void)_handleUpdateContactChangeHistoryEvent:(id)arg1 ;
-(void)_handleDropEverythingChangeHistoryEvent;
-(void)_emptySiblingCacheForIMHandleGUID:(id)arg1 ;
-(void)_buildSiblingsForIMHandle:(id)arg1 ;
-(void)_clearSiblingsCacheForIMHandle:(id)arg1 rebuildAfter:(char)arg2 ;
-(void)_addIMHandleToIDToHandlesMap:(id)arg1 ;
-(void)_removeIMHandleToIDToHandlesMap:(id)arg1 ;
-(id)getIDsForAllIMHandles;
-(void)_postContactChangeHistoryEventClientNotifications;
-(id)CNIDToHandlesMap;
-(id)IDToHandlesMap;
-(id)getIDsForInitialBatch;
-(id)getIDsForFinalBatch;
-(void)_dumpOutAllIMHandles;
@end

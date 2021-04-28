/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ISyncSessionCallback;
@class ISDClient, NSString, NSArray, NSMutableDictionary, NSMutableArray, NSMutableSet, NSDate, ISDFileReference, NSNumber;

@interface ISDSyncParticipant : NSObject {

	ISDClient* _client;
	NSString* _clientId;
	NSArray* _entityNames;
	NSMutableDictionary* _transientSyncModes;
	NSMutableArray* _entityNamesHavingTruthPulled;
	NSMutableSet* _pushTruthApprovalTable;
	NSArray* _clientSyncStates;
	id<ISyncSessionCallback> _callbackTarget;
	id _clientState;
	int _phase;
	char _alerted;
	NSDate* _responseDate;
	ISDFileReference* _formatterBundle;
	NSNumber* _useLocalIdsForGuids;
	char _synchronizesAllEntities;

}
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)client;
-(id)initWithClient:(id)arg1 ;
-(id)clientId;
-(id)entityNames;
-(void)setEntityNames:(id)arg1 ;
-(id)clientState;
-(void)setClientState:(id)arg1 ;
-(void)setResponseDate:(id)arg1 ;
-(id)responseDate;
-(id)syncStates;
-(char)synchronizesAllEntities;
-(id)formatterBundle;
-(void)setTransientSyncMode:(int)arg1 forEntityName:(id)arg2 ;
-(int)syncModeForEntityName:(id)arg1 ;
-(char)getTransientSyncMode:(int*)arg1 forEntityName:(id)arg2 ;
-(int)syncPhase;
-(id)callbackTarget;
-(void)setCallbackTarget:(id)arg1 ;
-(char)isApprovedToPushTruthForEntityName:(id)arg1 ;
-(void)removeTransientSyncModeForEntityName:(id)arg1 ;
-(id)entityNamesHavingTruthPulled;
-(void)setSyncPhase:(int)arg1 ;
-(id)fastClient;
-(id)fastEntityNames;
-(void)clearSyncStates;
-(void)setSyncMode:(int)arg1 forEntityName:(id)arg2 ;
-(void)setApprovedToPushTruth:(char)arg1 forEntityName:(id)arg2 ;
-(char)alerted;
-(void)setAlerted:(char)arg1 ;
-(char)useLocalIdsForGUIDs;
-(id)newMappingFromEntityNameToFirstCompoundIdentityAlternativeWithPropertiesBeingSynced:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/Versions/A/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFDatabaseObjectObserver.h>
#import <libobjc.A.dylib/VCSpotlightSyncOperationDelegate.h>

@protocol VCDatabaseProvider, OS_dispatch_queue;
@class WFDatabaseResult, WFDebouncer, VCDaemonXPCEventHandler, VCSpotlightSyncOperation, CSSearchableIndex, NSObject, NSString;

@interface VCSpotlightSyncService : NSObject <WFDatabaseObjectObserver, VCSpotlightSyncOperationDelegate> {

	char _isFetchingClientState;
	char _hasAddedXPCEventHandlerObserver;
	WFDatabaseResult* _workflows;
	WFDebouncer* _debouncer;
	VCDaemonXPCEventHandler* _eventHandler;
	VCSpotlightSyncOperation* _syncOperation;
	id<VCDatabaseProvider> _databaseProvider;
	CSSearchableIndex* _index;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) WFDebouncer * debouncer;                              //@synthesize debouncer=_debouncer - In the implementation block
@property (nonatomic,readonly) VCDaemonXPCEventHandler * eventHandler;               //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,retain) VCSpotlightSyncOperation * syncOperation;               //@synthesize syncOperation=_syncOperation - In the implementation block
@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;              //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,readonly) CSSearchableIndex * index;                            //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) WFDatabaseResult * workflows;                         //@synthesize workflows=_workflows - In the implementation block
@property (assign,nonatomic) char isFetchingClientState;                             //@synthesize isFetchingClientState=_isFetchingClientState - In the implementation block
@property (assign,nonatomic) char hasAddedXPCEventHandlerObserver;                   //@synthesize hasAddedXPCEventHandlerObserver=_hasAddedXPCEventHandlerObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)start;
-(CSSearchableIndex *)index;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)sync;
-(VCDaemonXPCEventHandler *)eventHandler;
-(void)requestSync;
-(VCSpotlightSyncOperation *)syncOperation;
-(void)setSyncOperation:(VCSpotlightSyncOperation *)arg1 ;
-(WFDebouncer *)debouncer;
-(id<VCDatabaseProvider>)databaseProvider;
-(void)databaseDidChange:(id)arg1 modified:(id)arg2 inserted:(id)arg3 removed:(id)arg4 ;
-(id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2 ;
-(void)syncOperationFinishedWithRequestToRelaunch:(char)arg1 ;
-(void)syncWithModifiedObjects:(id)arg1 inserted:(id)arg2 removed:(id)arg3 ;
-(WFDatabaseResult *)workflows;
-(char)isFetchingClientState;
-(void)setIsFetchingClientState:(char)arg1 ;
-(char)hasAddedXPCEventHandlerObserver;
-(void)setHasAddedXPCEventHandlerObserver:(char)arg1 ;
@end


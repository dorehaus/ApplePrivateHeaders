/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/Versions/A/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TRIPaths, TRIXPCActivityManagementProtocol;
@class TRIExperimentDatabase, TRIActivationEventDatabase, TRIExperimentHistoryDatabase, TRINamespaceDatabase, TRITaskDatabase, TRIClient, TRIKVStore, TRIContentTracker, TRIDatabase;

@interface TRIServerContext : NSObject {

	char _useCKNative;
	id<TRIPaths> _paths;
	TRIExperimentDatabase* _experimentDatabase;
	TRIActivationEventDatabase* _activationEventDatabase;
	TRIExperimentHistoryDatabase* _experimentHistoryDatabase;
	TRINamespaceDatabase* _namespaceDatabase;
	TRITaskDatabase* _taskDatabase;
	TRIClient* _client;
	TRIKVStore* _keyValueStore;
	TRIContentTracker* _contentTracker;
	id<TRIXPCActivityManagementProtocol> _xpcActivityManager;
	TRIDatabase* _underlyingDatabase;

}

@property (nonatomic,readonly) TRIDatabase * underlyingDatabase;                                            //@synthesize underlyingDatabase=_underlyingDatabase - In the implementation block
@property (nonatomic,readonly) id<TRIPaths> paths;                                                          //@synthesize paths=_paths - In the implementation block
@property (nonatomic,readonly) TRIExperimentDatabase * experimentDatabase;                                  //@synthesize experimentDatabase=_experimentDatabase - In the implementation block
@property (nonatomic,readonly) TRIActivationEventDatabase * activationEventDatabase;                        //@synthesize activationEventDatabase=_activationEventDatabase - In the implementation block
@property (nonatomic,readonly) TRIExperimentHistoryDatabase * experimentHistoryDatabase;                    //@synthesize experimentHistoryDatabase=_experimentHistoryDatabase - In the implementation block
@property (nonatomic,readonly) TRINamespaceDatabase * namespaceDatabase;                                    //@synthesize namespaceDatabase=_namespaceDatabase - In the implementation block
@property (nonatomic,readonly) TRITaskDatabase * taskDatabase;                                              //@synthesize taskDatabase=_taskDatabase - In the implementation block
@property (nonatomic,readonly) TRIClient * client;                                                          //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) TRIKVStore * keyValueStore;                                                  //@synthesize keyValueStore=_keyValueStore - In the implementation block
@property (nonatomic,readonly) TRIContentTracker * contentTracker;                                          //@synthesize contentTracker=_contentTracker - In the implementation block
@property (nonatomic,__weak,readonly) id<TRIXPCActivityManagementProtocol> xpcActivityManager;              //@synthesize xpcActivityManager=_xpcActivityManager - In the implementation block
@property (assign,nonatomic) char useCKNative;                                                              //@synthesize useCKNative=_useCKNative - In the implementation block
-(id)init;
-(TRIClient *)client;
-(id<TRIPaths>)paths;
-(id<TRIXPCActivityManagementProtocol>)xpcActivityManager;
-(void)setXpcActivityManager:(id<TRIXPCActivityManagementProtocol>)arg1 ;
-(TRIKVStore *)keyValueStore;
-(TRINamespaceDatabase *)namespaceDatabase;
-(TRIExperimentDatabase *)experimentDatabase;
-(TRIContentTracker *)contentTracker;
-(TRIExperimentHistoryDatabase *)experimentHistoryDatabase;
-(TRIDatabase *)underlyingDatabase;
-(TRITaskDatabase *)taskDatabase;
-(TRIActivationEventDatabase *)activationEventDatabase;
-(void)logErrorMetric:(id)arg1 ;
-(id)initWithPaths:(id)arg1 client:(id)arg2 storageManagement:(id)arg3 xpcActivityManagement:(id)arg4 ;
-(void)_logInitErrorWithClient:(id)arg1 message:(id)arg2 ;
-(id)initWithPaths:(id)arg1 client:(id)arg2 storageManagement:(id)arg3 ;
-(char)useCKNative;
-(void)setUseCKNative:(char)arg1 ;
@end


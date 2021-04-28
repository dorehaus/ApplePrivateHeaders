/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/Versions/A/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NPTunnelDelegate.h>
#import <libobjc.A.dylib/NEAppProxyProviderContainerDelegate.h>

@protocol NSPManagerDelegate, OS_nw_endpoint;
@class NWPathEvaluator, NPKeyBag, NSDictionary, NSPConfiguration, NSPFlowDivert, NSMutableDictionary, NSArray, NSString, NSPAppRule, NSMutableArray, NSObject;

@interface NSPManager : NSObject <NPTunnelDelegate, NEAppProxyProviderContainerDelegate> {

	os_unfair_lock_s lock;
	char _disableIdleTimeout;
	char _isObserving;
	char _testFetchDaypass;
	unsigned _nextFlowID;
	unsigned _tunnelCount;
	NWPathEvaluator* _pathEvaluator;
	/*^block*/id _changeHandler;
	/*^block*/id _connectionInfoSetHandler;
	/*^block*/id _tunnelConnectedHandler;
	NPKeyBag* _keybag;
	NWPathEvaluator* _policyEvaluator;
	NSDictionary* _appRules;
	NPKeyBag* _inUseKeybag;
	NSPConfiguration* _configuration;
	NSPFlowDivert* _flowDivert;
	NSMutableDictionary* _flowInfoMap;
	NSArray* _currentAgents;
	NSMutableDictionary* _fallbackCounts;
	id<NSPManagerDelegate> _delegate;
	NSString* _signingIdentifier;
	NSPAppRule* _matchingAppRule;
	NSMutableArray* _knownFlows;
	/*^block*/id _pendingCancellationHandler;
	NSArray* _testLatencyMap;
	unsigned long long _testLatencyMapIndex;
	NSObject*<OS_nw_endpoint> _currentTunnelEndpoint;

}

@property (nonatomic,readonly) NWPathEvaluator * policyEvaluator;                          //@synthesize policyEvaluator=_policyEvaluator - In the implementation block
@property (retain) NSDictionary * appRules;                                                //@synthesize appRules=_appRules - In the implementation block
@property (retain) NPKeyBag * keybag;                                                      //@synthesize keybag=_keybag - In the implementation block
@property (retain) NPKeyBag * inUseKeybag;                                                 //@synthesize inUseKeybag=_inUseKeybag - In the implementation block
@property (retain) NSPConfiguration * configuration;                                       //@synthesize configuration=_configuration - In the implementation block
@property (retain) NSPFlowDivert * flowDivert;                                             //@synthesize flowDivert=_flowDivert - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * flowInfoMap;                            //@synthesize flowInfoMap=_flowInfoMap - In the implementation block
@property (assign,nonatomic) char isObserving;                                             //@synthesize isObserving=_isObserving - In the implementation block
@property (nonatomic,retain) NSArray * currentAgents;                                      //@synthesize currentAgents=_currentAgents - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * fallbackCounts;                       //@synthesize fallbackCounts=_fallbackCounts - In the implementation block
@property (assign,nonatomic,__weak) id<NSPManagerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * signingIdentifier;                               //@synthesize signingIdentifier=_signingIdentifier - In the implementation block
@property (retain) NSPAppRule * matchingAppRule;                                           //@synthesize matchingAppRule=_matchingAppRule - In the implementation block
@property (nonatomic,readonly) NSMutableArray * knownFlows;                                //@synthesize knownFlows=_knownFlows - In the implementation block
@property (nonatomic,copy) id pendingCancellationHandler;                                  //@synthesize pendingCancellationHandler=_pendingCancellationHandler - In the implementation block
@property (retain) NSArray * testLatencyMap;                                               //@synthesize testLatencyMap=_testLatencyMap - In the implementation block
@property (assign) char testFetchDaypass;                                                  //@synthesize testFetchDaypass=_testFetchDaypass - In the implementation block
@property (assign) unsigned long long testLatencyMapIndex;                                 //@synthesize testLatencyMapIndex=_testLatencyMapIndex - In the implementation block
@property (assign,nonatomic) unsigned nextFlowID;                                          //@synthesize nextFlowID=_nextFlowID - In the implementation block
@property (assign,nonatomic) unsigned tunnelCount;                                         //@synthesize tunnelCount=_tunnelCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_endpoint> currentTunnelEndpoint;              //@synthesize currentTunnelEndpoint=_currentTunnelEndpoint - In the implementation block
@property (nonatomic,readonly) NWPathEvaluator * pathEvaluator;                            //@synthesize pathEvaluator=_pathEvaluator - In the implementation block
@property (nonatomic,readonly) char currentNetworkHasProxies; 
@property (nonatomic,readonly) char isEnabled; 
@property (nonatomic,copy) id changeHandler;                                               //@synthesize changeHandler=_changeHandler - In the implementation block
@property (nonatomic,copy) id connectionInfoSetHandler;                                    //@synthesize connectionInfoSetHandler=_connectionInfoSetHandler - In the implementation block
@property (nonatomic,copy) id tunnelConnectedHandler;                                      //@synthesize tunnelConnectedHandler=_tunnelConnectedHandler - In the implementation block
@property (readonly) double timeIntervalSinceLastUsage; 
@property (assign) char disableIdleTimeout;                                                //@synthesize disableIdleTimeout=_disableIdleTimeout - In the implementation block
@property (readonly) char isFirstTunnel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(id<NSPManagerDelegate>)delegate;
-(void)setDelegate:(id<NSPManagerDelegate>)arg1 ;
-(char)isEnabled;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSPConfiguration *)configuration;
-(void)setConfiguration:(NSPConfiguration *)arg1 ;
-(void)setChangeHandler:(id)arg1 ;
-(id)changeHandler;
-(NWPathEvaluator *)pathEvaluator;
-(NSString *)signingIdentifier;
-(void)stopWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)isObserving;
-(double)timeIntervalSinceLastUsage;
-(void)setIsObserving:(char)arg1 ;
-(char)currentNetworkHasProxies;
-(char)shouldSetConfigurationToAppRule:(id)arg1 edgeSet:(id)arg2 ;
-(void)setConnectionInfo:(id)arg1 forIdentifier:(id)arg2 ;
-(id)getConnectionInfoForIdentifier:(id)arg1 ;
-(void)fetchStateForClient:(id)arg1 withPeerEndpoint:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)disableIdleTimeout;
-(void)setDisableIdleTimeout:(char)arg1 ;
-(NPKeyBag *)keybag;
-(void)setKeybag:(NPKeyBag *)arg1 ;
-(char)useTestLatencyMap;
-(unsigned long long)getTestLatencyRTT:(id)arg1 parameters:(networkParameters*)arg2 ;
-(char)isFirstTunnel;
-(void)tunnel:(id)arg1 flowDidFallbackWithReason:(long long)arg2 ;
-(void)sendUsageReport:(id)arg1 ;
-(void)tunnelDidConnect:(id)arg1 ;
-(void)tunnelIsReady:(id)arg1 ;
-(void)tunnelDidCancel:(id)arg1 ;
-(id)instantiateFlowWithTunnel:(id)arg1 inputProtocol:(nw_protocol*)arg2 ;
-(id)instantiateTunnelWithEndpoint:(id)arg1 parameters:(id)arg2 ;
-(id)createTransformsForEndpoint:(id)arg1 parameters:(id)arg2 ;
-(char)useTestDaypass;
-(void)resetTestLatencyMapIndex:(unsigned long long)arg1 ;
-(NSDictionary *)appRules;
-(void)setAppRules:(NSDictionary *)arg1 ;
-(void)setMatchingAppRule:(NSPAppRule *)arg1 ;
-(id)createAppRuleMapWithRules:(id)arg1 ;
-(NSPAppRule *)matchingAppRule;
-(NSPFlowDivert *)flowDivert;
-(void)setFlowDivert:(NSPFlowDivert *)arg1 ;
-(void)handlePolicyUpdate;
-(NPKeyBag *)inUseKeybag;
-(id)tunnelConnectedHandler;
-(void)setTunnelConnectedHandler:(id)arg1 ;
-(id)connectionInfoSetHandler;
-(id)createReplacementEndpointForEndpoint:(id)arg1 properties:(id)arg2 ;
-(id)getAppRuleMatchingParameters:(id)arg1 flowProperties:(id)arg2 ;
-(void)setInUseKeybag:(NPKeyBag *)arg1 ;
-(id)buildTestLatencyMap:(id)arg1 ;
-(void)container:(id)arg1 didStartWithError:(id)arg2 ;
-(void)container:(id)arg1 didFailWithError:(id)arg2 ;
-(void)container:(id)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)container:(id)arg1 didSetTunnelConfiguration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)waitForTunnelsToCancelWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startWithConfiguration:(id)arg1 appRules:(id)arg2 delegate:(id)arg3 ;
-(void)ingestTestLatencyMap:(id)arg1 local:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setConnectionInfoSetHandler:(id)arg1 ;
-(NWPathEvaluator *)policyEvaluator;
-(NSMutableDictionary *)flowInfoMap;
-(void)setFlowInfoMap:(NSMutableDictionary *)arg1 ;
-(NSArray *)currentAgents;
-(void)setCurrentAgents:(NSArray *)arg1 ;
-(NSMutableDictionary *)fallbackCounts;
-(NSMutableArray *)knownFlows;
-(id)pendingCancellationHandler;
-(void)setPendingCancellationHandler:(id)arg1 ;
-(NSArray *)testLatencyMap;
-(void)setTestLatencyMap:(NSArray *)arg1 ;
-(char)testFetchDaypass;
-(void)setTestFetchDaypass:(char)arg1 ;
-(unsigned long long)testLatencyMapIndex;
-(void)setTestLatencyMapIndex:(unsigned long long)arg1 ;
-(unsigned)nextFlowID;
-(void)setNextFlowID:(unsigned)arg1 ;
-(unsigned)tunnelCount;
-(void)setTunnelCount:(unsigned)arg1 ;
-(NSObject*<OS_nw_endpoint>)currentTunnelEndpoint;
-(void)setCurrentTunnelEndpoint:(NSObject*<OS_nw_endpoint>)arg1 ;
@end


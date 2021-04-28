/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/Versions/A/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriCore/SiriCoreSiriBackgroundConnectionDelegate.h>
#import <SiriCore/SiriCoreSiriConnection.h>
@class NSURL, NSError, NSString;


@protocol SiriCoreSiriConnection <NSObject>
@property (assign,nonatomic,__weak) id<SiriCoreSiriConnectionDelegate> delegate; 
@property (nonatomic,copy) NSURL * url; 
@property (assign,nonatomic) char prefersWWAN; 
@property (assign,nonatomic) char skipPeer; 
@property (assign,nonatomic) char useWiFiHint; 
@property (nonatomic,copy) NSError * skipPeerError; 
@property (assign,nonatomic) char forceReconnect; 
@property (nonatomic,copy) NSString * aceHost; 
@property (nonatomic,copy) NSString * languageCode; 
@property (assign,nonatomic) double timeout; 
@property (nonatomic,copy) NSString * assistantIdentifier; 
@property (nonatomic,copy) NSString * peerAssistantIdentifier; 
@property (nonatomic,copy) NSString * peerType; 
@property (nonatomic,copy) NSString * peerVersion; 
@property (nonatomic,copy) NSString * productTypePrefix; 
@property (assign,nonatomic) char usesProxyConnection; 
@property (assign,nonatomic) char deviceIsInWalkaboutExperimentGroup; 
@property (assign,nonatomic) char siriConnectionUsesPeerManagedSync; 
@property (nonatomic,retain) Class peerProviderClass; 
@property (nonatomic,copy) NSString * connectionId; 
@property (assign,nonatomic) char imposePolicyBan; 
@required
-(id<SiriCoreSiriConnectionDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSString *)languageCode;
-(NSURL *)url;
-(double)timeout;
-(void)start;
-(void)setUrl:(id)arg1;
-(void)setTimeout:(double)arg1;
-(void)setLanguageCode:(id)arg1;
-(NSString *)connectionId;
-(void)setConnectionId:(id)arg1;
-(void)barrier:(/*^block*/id)arg1;
-(void)setAssistantIdentifier:(id)arg1;
-(void)setPeerAssistantIdentifier:(id)arg1;
-(void)setAceHost:(id)arg1;
-(NSString *)assistantIdentifier;
-(NSString *)peerAssistantIdentifier;
-(NSString *)aceHost;
-(NSString *)peerType;
-(void)probeConnection;
-(void)setPrefersWWAN:(char)arg1;
-(char)useWiFiHint;
-(char)skipPeer;
-(char)prefersWWAN;
-(char)forceReconnect;
-(void)setUseWiFiHint:(char)arg1;
-(char)imposePolicyBan;
-(void)setSendPings:(char)arg1;
-(void)sendCommands:(id)arg1 errorHandler:(/*^block*/id)arg2;
-(void)setPeerType:(id)arg1;
-(NSString *)peerVersion;
-(void)setPeerVersion:(id)arg1;
-(NSString *)productTypePrefix;
-(void)setProductTypePrefix:(id)arg1;
-(char)usesProxyConnection;
-(void)setUsesProxyConnection:(char)arg1;
-(char)siriConnectionUsesPeerManagedSync;
-(void)setSiriConnectionUsesPeerManagedSync:(char)arg1;
-(Class)peerProviderClass;
-(void)setPeerProviderClass:(Class)arg1;
-(char)deviceIsInWalkaboutExperimentGroup;
-(void)setDeviceIsInWalkaboutExperimentGroup:(char)arg1;
-(void)setSkipPeer:(char)arg1;
-(void)setForceReconnect:(char)arg1;
-(void)setImposePolicyBan:(char)arg1;
-(void)sendCommand:(id)arg1 errorHandler:(/*^block*/id)arg2;
-(void)cancelSynchronously:(char)arg1 onQueue:(char)arg2 completion:(/*^block*/id)arg3;
-(void)getAnalysisInfo:(/*^block*/id)arg1;
-(void)getConnectionMetricsSynchronously:(char)arg1 completion:(/*^block*/id)arg2;
-(NSError *)skipPeerError;
-(void)setSkipPeerError:(id)arg1;

@end


@protocol OS_dispatch_queue, SiriCoreSiriConnectionDelegate, OS_dispatch_group;
@class NSURL, NSError, NSString, NSObject, NSMutableSet, SiriCoreSiriBackgroundConnection, NSMutableArray, NWPathEvaluator, SAConnectionPolicy;

@interface SiriCoreSiriConnection : NSObject <SiriCoreSiriBackgroundConnectionDelegate, SiriCoreSiriConnection> {

	NSObject*<OS_dispatch_queue> _queue;
	char _isCanceled;
	id<SiriCoreSiriConnectionDelegate> _delegate;
	NSURL* _url;
	char _prefersWWAN;
	NSString* _aceHost;
	NSString* _languageCode;
	double _timeout;
	char _sendPings;
	NSString* _assistantIdentifier;
	NSString* _peerAssistantIdentifier;
	NSString* _connectionId;
	char _isCanceledInternal;
	NSMutableSet* _pendingBackgroundConnections;
	NSMutableSet* _comatoseBackgroundConnections;
	NSMutableSet* _scheduledRoutes;
	SiriCoreSiriBackgroundConnection* _activeBackgroundConnection;
	NSObject*<OS_dispatch_group> _activeConnectionGroup;
	NSString* _peerType;
	NSString* _peerVersion;
	NSString* _productTypePrefix;
	char _usesProxyConnection;
	char _deviceIsInWalkaboutExperimentGroup;
	char _siriConnectionUsesPeerManagedSync;
	Class _peerProviderClass;
	NSMutableArray* _connMethodUsedHistory;
	char _imposePolicyBan;
	NWPathEvaluator* _evaluator;
	NSString* _savedURLHostForEvaluator;
	NSString* _savedPortForEvaluator;
	char _skipPeer;
	char _useWiFiHint;
	char _forceReconnect;
	NSError* _skipPeerError;
	SAConnectionPolicy* _connectionPolicy;

}

@property (nonatomic,copy) SAConnectionPolicy * connectionPolicy;                             //@synthesize connectionPolicy=_connectionPolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SiriCoreSiriConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSURL * url;                                                       //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) char prefersWWAN;                                                //@synthesize prefersWWAN=_prefersWWAN - In the implementation block
@property (assign,nonatomic) char skipPeer;                                                   //@synthesize skipPeer=_skipPeer - In the implementation block
@property (assign,nonatomic) char useWiFiHint;                                                //@synthesize useWiFiHint=_useWiFiHint - In the implementation block
@property (nonatomic,copy) NSError * skipPeerError;                                           //@synthesize skipPeerError=_skipPeerError - In the implementation block
@property (assign,nonatomic) char forceReconnect;                                             //@synthesize forceReconnect=_forceReconnect - In the implementation block
@property (nonatomic,copy) NSString * aceHost;                                                //@synthesize aceHost=_aceHost - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                                           //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) double timeout;                                                  //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) NSString * assistantIdentifier;                                    //@synthesize assistantIdentifier=_assistantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * peerAssistantIdentifier;                                //@synthesize peerAssistantIdentifier=_peerAssistantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * peerType;                                               //@synthesize peerType=_peerType - In the implementation block
@property (nonatomic,copy) NSString * peerVersion;                                            //@synthesize peerVersion=_peerVersion - In the implementation block
@property (nonatomic,copy) NSString * productTypePrefix;                                      //@synthesize productTypePrefix=_productTypePrefix - In the implementation block
@property (assign,nonatomic) char usesProxyConnection;                                        //@synthesize usesProxyConnection=_usesProxyConnection - In the implementation block
@property (assign,nonatomic) char deviceIsInWalkaboutExperimentGroup;                         //@synthesize deviceIsInWalkaboutExperimentGroup=_deviceIsInWalkaboutExperimentGroup - In the implementation block
@property (assign,nonatomic) char siriConnectionUsesPeerManagedSync;                          //@synthesize siriConnectionUsesPeerManagedSync=_siriConnectionUsesPeerManagedSync - In the implementation block
@property (nonatomic,retain) Class peerProviderClass;                                         //@synthesize peerProviderClass=_peerProviderClass - In the implementation block
@property (nonatomic,copy) NSString * connectionId;                                           //@synthesize connectionId=_connectionId - In the implementation block
@property (assign,nonatomic) char imposePolicyBan;                                            //@synthesize imposePolicyBan=_imposePolicyBan - In the implementation block
-(void)dealloc;
-(id)init;
-(id<SiriCoreSiriConnectionDelegate>)delegate;
-(void)setDelegate:(id<SiriCoreSiriConnectionDelegate>)arg1 ;
-(NSString *)languageCode;
-(id)initWithQueue:(id)arg1 ;
-(NSURL *)url;
-(double)timeout;
-(void)start;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(SAConnectionPolicy *)connectionPolicy;
-(NSString *)connectionId;
-(void)setConnectionId:(NSString *)arg1 ;
-(void)setConnectionPolicy:(SAConnectionPolicy *)arg1 ;
-(void)barrier:(/*^block*/id)arg1 ;
-(void)setAssistantIdentifier:(NSString *)arg1 ;
-(void)setPeerAssistantIdentifier:(NSString *)arg1 ;
-(void)setAceHost:(NSString *)arg1 ;
-(NSString *)assistantIdentifier;
-(NSString *)peerAssistantIdentifier;
-(NSString *)aceHost;
-(NSString *)peerType;
-(void)probeConnection;
-(id)analysisInfo;
-(void)setPrefersWWAN:(char)arg1 ;
-(char)useWiFiHint;
-(char)skipPeer;
-(char)prefersWWAN;
-(void)siriBackgroundConnection:(id)arg1 willStartWithConnectionType:(id)arg2 ;
-(char)forceReconnect;
-(void)siriBackgroundConnectionDidClose:(id)arg1 ;
-(void)siriBackgroundConnection:(id)arg1 didEncounterError:(id)arg2 analysisInfo:(id)arg3 ;
-(void)setUseWiFiHint:(char)arg1 ;
-(void)siriBackgroundConnection:(id)arg1 didOpenWithConnectionType:(id)arg2 routeId:(id)arg3 delay:(double)arg4 ;
-(void)siriBackgroundConnection:(id)arg1 willStartConnectionWithHTTPHeader:(id)arg2 ;
-(void)siriBackgroundConnection:(id)arg1 didReceiveAceObject:(id)arg2 ;
-(char)imposePolicyBan;
-(void)setSendPings:(char)arg1 ;
-(void)sendCommands:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)setPeerType:(NSString *)arg1 ;
-(NSString *)peerVersion;
-(void)setPeerVersion:(NSString *)arg1 ;
-(NSString *)productTypePrefix;
-(void)setProductTypePrefix:(NSString *)arg1 ;
-(char)usesProxyConnection;
-(void)setUsesProxyConnection:(char)arg1 ;
-(char)siriConnectionUsesPeerManagedSync;
-(void)setSiriConnectionUsesPeerManagedSync:(char)arg1 ;
-(Class)peerProviderClass;
-(void)setPeerProviderClass:(Class)arg1 ;
-(char)deviceIsInWalkaboutExperimentGroup;
-(void)setDeviceIsInWalkaboutExperimentGroup:(char)arg1 ;
-(void)setSkipPeer:(char)arg1 ;
-(void)setForceReconnect:(char)arg1 ;
-(void)setImposePolicyBan:(char)arg1 ;
-(id)_pathEvaluator:(id)arg1 port:(id)arg2 ;
-(id)_connectionInfoForRoute:(id)arg1 policy:(id)arg2 ;
-(void)_startBackgroundConnectionWithRoute:(id)arg1 policy:(id)arg2 ;
-(void)_scheduleBackgroundConnectionWithRoute:(id)arg1 delay:(double)arg2 policy:(id)arg3 ;
-(void)_accessPotentiallyActiveConnections:(/*^block*/id)arg1 ;
-(void)_waitForActiveConnection:(/*^block*/id)arg1 ;
-(void)_cancelSynchronously:(/*^block*/id)arg1 ;
-(id)_activeOrAnyPendingConnection;
-(void)_recordConnectionMethodForMetrics:(id)arg1 ;
-(void)_handleLastEventFromBackgroundConnection:(id)arg1 pendingConnectionExhaustionHandler:(/*^block*/id)arg2 ;
-(void)siriBackgroundConnection:(id)arg1 didEncounterIntermediateError:(id)arg2 ;
-(void)sendCommand:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)cancelSynchronously:(char)arg1 onQueue:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)getAnalysisInfo:(/*^block*/id)arg1 ;
-(void)getConnectionMetricsSynchronously:(char)arg1 completion:(/*^block*/id)arg2 ;
-(NSError *)skipPeerError;
-(void)setSkipPeerError:(NSError *)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface CWWiFiUIProxyClient : NSObject {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _queue;
	id _delegate;

}

@property (assign,nonatomic) id<CWWiFiUIProxyClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedWiFiUIProxyClient;
-(char)synchronizeCloudWiFiProfilesAndReturnError:(id*)arg1 ;
-(char)addCloudWiFiProfile:(id)arg1 authorization:(id)arg2 error:(out id*)arg3 ;
-(char)removeCloudWiFiProfileWithSSID:(id)arg1 authorization:(id)arg2 error:(out id*)arg3 ;
-(char)updateCloudWiFiProfile:(id)arg1 authorization:(id)arg2 error:(out id*)arg3 ;
-(char)queryIsWiFiCloudSyncEngineRunningAndReturnError:(id*)arg1 ;
-(id)queryUserWiFiKeychainPasswordWithSSID:(id)arg1 error:(out id*)arg2 ;
-(char)setUserWiFiKeychainPasswordWithSSID:(id)arg1 password:(id)arg2 error:(out id*)arg3 ;
-(char)deleteUserWiFiKeychainPasswordWithSSID:(id)arg1 error:(out id*)arg2 ;
-(void)userDidJoinWithConfiguration:(id)arg1 uuid:(id)arg2 ;
-(void)userDidConfirmJoin:(char)arg1 uuid:(id)arg2 ;
-(void)userDidDismissJoinUIWithUUID:(id)arg1 ;
-(void)displayWiFiRecommendationItem:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CWWiFiUIProxyClientDelegate>)delegate;
-(void)setDelegate:(id<CWWiFiUIProxyClientDelegate>)arg1 ;
-(void)startScanning;
-(void)stopScanning;
-(void)startMonitoringEvents;
-(void)didUpdateUIState:(unsigned long long)arg1 previous:(unsigned long long)arg2 ;
-(void)didFindScanResults:(id)arg1 ;
-(void)updatedWiFiConfiguration:(id)arg1 ;
-(id)queryDiagnosticsAndReturnError:(out id*)arg1 ;
-(char)queryWiFiDebugLoggingEnabled;
-(void)stopMonitoringEvents;
-(char)joinScanResult:(id)arg1 configuration:(id)arg2 authorization:(id)arg3 error:(out id*)arg4 ;
-(void)displayWiFiRecommendationUI;
-(char)setWiFiDebugLoggingEnabled:(char)arg1 authorization:(id)arg2 error:(out id*)arg3 ;
-(id)queryCachedScanResultsAndReturnError:(out id*)arg1 ;
-(unsigned long long)queryWiFiUIState;
-(void)didCompleteDiagnostics:(id)arg1 ;
-(void)showJoinUIWithScanResult:(id)arg1 previousError:(id)arg2 previousPassword:(id)arg3 supportsWiFiPasswordSharing:(char)arg4 remember:(char)arg5 uuid:(id)arg6 ;
-(void)didReceiveSharedPassword:(id)arg1 uuid:(id)arg2 ;
-(void)showSecurityMismatchUIWithScanResult:(id)arg1 uuid:(id)arg2 ;
-(void)showWPSUIWithScanResult:(id)arg1 pin:(id)arg2 uuid:(id)arg3 ;
-(void)showInfoUIWithTitle:(id)arg1 description:(id)arg2 uuid:(id)arg3 ;
-(void)showErrorUIWithScanResult:(id)arg1 uuid:(id)arg2 ;
-(void)dismissUIWithUUID:(id)arg1 ;
-(char)createIBSSNetworkWithConfiguration:(id)arg1 authorization:(id)arg2 error:(out id*)arg3 ;
-(id)createDiagnosticsReportWithAuthorization:(id)arg1 error:(out id*)arg2 ;
@end


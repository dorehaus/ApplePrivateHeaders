/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/Versions/A/AutoBugCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/DiagnosticsServiceInterface.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface DiagnosticsServiceImpl : NSObject <NSXPCListenerDelegate, DiagnosticsServiceInterface> {

	NSObject*<OS_dispatch_queue> queue;
	NSMutableDictionary* allowanceCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithQueue:(id)arg1 ;
-(void)shutdown;
-(void)endSession:(id)arg1 ;
-(void)getAutoBugCaptureConfiguration:(/*^block*/id)arg1 ;
-(void)snapshotWithSignature:(id)arg1 duration:(unsigned long long)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 wantsRemoteCase:(char)arg6 reply:(/*^block*/id)arg7 ;
-(void)startSessionWithSignature:(id)arg1 duration:(unsigned long long)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 wantsRemoteCase:(char)arg6 reply:(/*^block*/id)arg7 ;
-(void)addToSession:(id)arg1 event:(id)arg2 payload:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)addToSession:(id)arg1 events:(id)arg2 payload:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)addSignatureContentForSession:(id)arg1 key:(id)arg2 content:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)cancelSession:(id)arg1 ;
-(void)getDiagnosticPayloadsForSignatures:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getSessionStatisticsWithReply:(/*^block*/id)arg1 ;
-(void)getCasesListFromIdentifier:(id)arg1 count:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)resetDiagnosticCaseStorageWithReply:(/*^block*/id)arg1 ;
-(void)resetDiagnosticCaseUsageWithReply:(/*^block*/id)arg1 ;
-(void)resetAllWithReply:(/*^block*/id)arg1 ;
-(void)triggerRemoteSessionForSignature:(id)arg1 groupIdentifier:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)getExpertSystemsStatus:(/*^block*/id)arg1 ;
-(void)purgeAutoBugCaptureFilesWithSubPaths:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)uploadCasesWithIdentifiersToCloudKit:(id)arg1 ;
-(void)uploadRecentCases:(unsigned long long)arg1 ;
-(void)cloudKitUploadDecisionForCaseIdentifiers:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)listCaseSummariesWithIdentifiers:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)listCaseSummariesOfType:(id)arg1 fromIdentifier:(id)arg2 count:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)submitRecentCaseSummariesWithIdentifiers:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)submitRecentCaseSummariesWithCount:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)assertEntitlement:(id)arg1 entitlement:(id)arg2 private:(char)arg3 ;
-(char)_checkRateLimitForAllowance:(id)arg1 time:(id)arg2 ;
-(id)responseDictWithSuccess:(char)arg1 sessionId:(id)arg2 groupId:(id)arg3 additionalDict:(id)arg4 reasonCode:(long long)arg5 ;
-(id)responseDictWithSuccess:(char)arg1 reasonCode:(long long)arg2 ;
-(char)_checkRateLimitForConnection:(id)arg1 ;
-(char)validateSignature:(id)arg1 ;
-(void)abcEnabledAndReadyWithReply:(/*^block*/id)arg1 ;
-(id)responseDictWithSuccess:(char)arg1 sessionId:(id)arg2 ;
@end


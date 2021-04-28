/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/Versions/A/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DEDClientProtocol <NSObject>
@optional
-(long long)transportType;
-(void)didCancelSession:(id)arg1;

@required
-(void)pongSession:(id)arg1;
-(void)deviceSupportsDiagnosticExtensions:(id)arg1 session:(id)arg2;
-(void)didAdoptFilesWithError:(id)arg1 forSession:(id)arg2;
-(void)uploadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 session:(id)arg3;
-(void)didCommitSession:(id)arg1;
-(void)finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2 session:(id)arg3;
-(void)didGetState:(long long)arg1 info:(id)arg2 sessionID:(id)arg3;
-(void)hasCollected:(id)arg1 isCollecting:(id)arg2 withIdentifiers:(id)arg3 inSession:(id)arg4;
-(void)hasCollected:(id)arg1 isCollecting:(id)arg2 inSession:(id)arg3;

@end


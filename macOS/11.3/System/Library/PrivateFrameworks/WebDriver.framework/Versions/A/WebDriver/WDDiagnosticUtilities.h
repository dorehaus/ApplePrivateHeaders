/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebDriver.framework/Versions/A/WebDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WDDiagnosticFileLogger, NSMutableDictionary;

@interface WDDiagnosticUtilities : NSObject {

	WDDiagnosticFileLogger* _fileLoggerForGlobalDiagnostics;
	NSMutableDictionary* _fileLoggersPerSession;
	char _globalDiagnosticsEnabled;

}

@property (assign,nonatomic) char globalDiagnosticsEnabled;              //@synthesize globalDiagnosticsEnabled=_globalDiagnosticsEnabled - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)flushPendingWrites;
-(char)shouldLogDiagnosticMessages;
-(void)logHTTPRequest:(id)arg1 sessionIdentifier:(id)arg2 ;
-(void)logMessageForSession:(id)arg1 withFormat:(id)arg2 ;
-(void)setGlobalDiagnosticsEnabled:(char)arg1 ;
-(void)setDiagnosticsEnabled:(char)arg1 forSession:(id)arg2 ;
-(char)diagnosticsEnabledForSession:(id)arg1 ;
-(void)logInitiatingHTTPRequest:(id)arg1 sessionIdentifier:(id)arg2 ;
-(void)logHTTPResponse:(id)arg1 sessionIdentifier:(id)arg2 ;
-(void)logProtocolMessageSend:(id)arg1 sessionIdentifier:(id)arg2 ;
-(void)logProtocolMessageReceive:(id)arg1 sessionIdentifier:(id)arg2 ;
-(char)globalDiagnosticsEnabled;
@end


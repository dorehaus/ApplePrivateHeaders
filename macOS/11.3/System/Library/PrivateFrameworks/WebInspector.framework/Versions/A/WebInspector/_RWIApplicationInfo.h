/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/Versions/A/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _RWIRelayConnectionToApplication;

@interface _RWIApplicationInfo : NSObject {

	int _hostApplicationPID;
	char _proxy;
	char _hasRemoteDebugSession;
	char _hasUpdatedFromListing;
	int _pid;
	NSString* _bundleId;
	NSString* _name;
	_RWIRelayConnectionToApplication* _connection;
	NSString* _debuggerConnectionIdentifier;
	unsigned long long _debuggerAvailability;
	long long _automationAvailability;

}

@property (nonatomic,readonly) int pid;                                                  //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,copy) NSString * bundleId;                                          //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,copy) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (assign,getter=isProxy,nonatomic) char proxy;                                  //@synthesize proxy=_proxy - In the implementation block
@property (assign,nonatomic) _RWIRelayConnectionToApplication * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) NSString * debuggerConnectionIdentifier;                      //@synthesize debuggerConnectionIdentifier=_debuggerConnectionIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long debuggerAvailability;                    //@synthesize debuggerAvailability=_debuggerAvailability - In the implementation block
@property (nonatomic,readonly) long long automationAvailability;                         //@synthesize automationAvailability=_automationAvailability - In the implementation block
@property (nonatomic,readonly) char hasRemoteDebugSession;                               //@synthesize hasRemoteDebugSession=_hasRemoteDebugSession - In the implementation block
@property (nonatomic,readonly) char hasUpdatedFromListing;                               //@synthesize hasUpdatedFromListing=_hasUpdatedFromListing - In the implementation block
+(id)identifierForPID:(int)arg1 ;
-(char)isProxy;
-(NSString *)name;
-(_RWIRelayConnectionToApplication *)connection;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setConnection:(_RWIRelayConnectionToApplication *)arg1 ;
-(int)pid;
-(id)dictionaryRepresentation;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setProxy:(char)arg1 ;
-(long long)automationAvailability;
-(char)hasUpdatedFromListing;
-(id)initWithPID:(int)arg1 bundleId:(id)arg2 name:(id)arg3 isProxy:(char)arg4 connection:(id)arg5 debuggerAvailability:(unsigned long long)arg6 ;
-(char)updateFromListing:(id)arg1 ;
-(void)setHostApplicationPID:(int)arg1 ;
-(NSString *)debuggerConnectionIdentifier;
-(void)setDebuggerConnectionIdentifier:(NSString *)arg1 ;
-(unsigned long long)debuggerAvailability;
-(void)setDebuggerAvailability:(unsigned long long)arg1 ;
-(char)hasRemoteDebugSession;
@end


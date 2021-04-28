/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/Versions/A/ModuleBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LAAgentProxyXPC.h>
#import <libobjc.A.dylib/LARemoteContextResolver.h>

@class NSMapTable;

@interface AgentProxy : NSObject <LAAgentProxyXPC, LARemoteContextResolver> {

	char _hasDisabledFUS;
	char _daemonProxy;
	unsigned _uid;
	int _pid;
	NSMapTable* _contextsByUuid;
	NSMapTable* _contextsByHash;

}

@property (nonatomic,readonly) char daemonProxy;                         //@synthesize daemonProxy=_daemonProxy - In the implementation block
@property (nonatomic,readonly) int pid;                                  //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSMapTable * contextsByUuid;              //@synthesize contextsByUuid=_contextsByUuid - In the implementation block
@property (nonatomic,readonly) NSMapTable * contextsByHash;              //@synthesize contextsByHash=_contextsByHash - In the implementation block
@property (nonatomic,readonly) char hasDisabledFUS;                      //@synthesize hasDisabledFUS=_hasDisabledFUS - In the implementation block
@property (nonatomic,readonly) unsigned uid;                             //@synthesize uid=_uid - In the implementation block
+(id)systemDaemon;
+(id)daemonInstance;
+(void)setSystemDaemon:(id)arg1 ;
+(id)agentProxyInSystemDaemon;
+(id)proxyInSystemDaemon;
-(void)queryUuid:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)remoteAuthenticationInProgressWithPriority:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(NSMapTable *)contextsByUuid;
-(NSMapTable *)contextsByHash;
-(void)dealloc;
-(id)description;
-(id)initWithXPCConnection:(id)arg1 ;
-(int)pid;
-(unsigned)uid;
-(id)tables;
-(char)daemonProxy;
-(id)_serverDescription;
-(id)remoteContextForUuid:(id)arg1 ;
-(id)remoteContextForAcmExternalizedFormHash:(unsigned long long)arg1 ;
-(char)hasDisabledFUS;
-(void)setFUSDisabled:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)registerContextWithUuid:(id)arg1 ownership:(id)arg2 description:(id)arg3 originalUuid:(id)arg4 originalAcmHash:(unsigned long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)registerAcmExternalizedFormHash:(unsigned long long)arg1 uuid:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/Versions/A/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCStoreServer, NSURL, NSDictionary;

@interface TBPersistenceRemoteStoreServer : NSObject {

	NSXPCStoreServer* _xpcStoreServer;
	NSURL* _storeURL;
	NSURL* _modelURL;
	NSDictionary* _serverOptions;

}

@property (nonatomic,retain) NSXPCStoreServer * xpcStoreServer;              //@synthesize xpcStoreServer=_xpcStoreServer - In the implementation block
@property (nonatomic,retain) NSURL * storeURL;                               //@synthesize storeURL=_storeURL - In the implementation block
@property (nonatomic,retain) NSURL * modelURL;                               //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,retain) NSDictionary * serverOptions;                   //@synthesize serverOptions=_serverOptions - In the implementation block
-(void)startListening;
-(NSURL *)modelURL;
-(void)setModelURL:(NSURL *)arg1 ;
-(id)initWithStoreURL:(id)arg1 modelURL:(id)arg2 options:(id)arg3 ;
-(NSURL *)storeURL;
-(NSDictionary *)serverOptions;
-(void)setXpcStoreServer:(NSXPCStoreServer *)arg1 ;
-(NSXPCStoreServer *)xpcStoreServer;
-(void)setStoreURL:(NSURL *)arg1 ;
-(void)setServerOptions:(NSDictionary *)arg1 ;
@end


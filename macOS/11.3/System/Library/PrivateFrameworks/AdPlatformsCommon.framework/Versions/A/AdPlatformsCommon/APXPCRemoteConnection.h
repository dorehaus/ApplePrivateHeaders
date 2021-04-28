/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/Versions/A/AdPlatformsCommon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSXPCConnection, NSString, APUnfairLock;

@interface APXPCRemoteConnection : NSObject {

	int _numClients;
	NSMutableArray* _delegates;
	NSXPCConnection* _xpcConnection;
	NSString* _machService;
	APUnfairLock* _unfairLock;

}

@property (assign,nonatomic) int numClients;                               //@synthesize numClients=_numClients - In the implementation block
@property (nonatomic,retain) NSMutableArray * delegates;                   //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSString * machService;                     //@synthesize machService=_machService - In the implementation block
@property (nonatomic,readonly) APUnfairLock * unfairLock;                  //@synthesize unfairLock=_unfairLock - In the implementation block
+(id)connectionForMachService:(id)arg1 ;
+(id)sharedConnectionFor:(id)arg1 ;
+(id)connectionFor:(id)arg1 ;
+(void)addSharedConnection:(id)arg1 forMachService:(id)arg2 ;
+(id)sharedConnections;
+(void)removeSharedConnectionForMachService:(id)arg1 ;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)connectionInterrupted;
-(id)initWithDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(NSMutableArray *)delegates;
-(void)setDelegates:(NSMutableArray *)arg1 ;
-(void)connectionInvalidated;
-(NSString *)machService;
-(APUnfairLock *)unfairLock;
-(void)invalidateForDelegate:(id)arg1 ;
-(void)increaseConnectionCount;
-(void)decreaseConnectionCount;
-(int)numClients;
-(void)setNumClients:(int)arg1 ;
@end


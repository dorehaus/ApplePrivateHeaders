/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Network.framework/Versions/A/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NWRemoteConnectionActorDelegate;
@class NSObject, NSMutableDictionary;

@interface NWRemoteConnectionActor : NSObject {

	NSObject*<NWRemoteConnectionActorDelegate> _delegate;
	NSMutableDictionary* _connections;
	NSMutableDictionary* _browsers;

}

@property (__weak) NSObject*<NWRemoteConnectionActorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableDictionary * connections;                                //@synthesize connections=_connections - In the implementation block
@property (retain) NSMutableDictionary * browsers;                                   //@synthesize browsers=_browsers - In the implementation block
-(void)updatePathForConnection:(id)arg1 ;
-(void)sendData:(id)arg1 forConnection:(id)arg2 ;
-(void)updateEndpointsForBrowser:(id)arg1 ;
-(void)scheduleReadsOnConnection:(id)arg1 ;
-(char)receiveRemoteCommand:(id)arg1 ;
-(NSObject*<NWRemoteConnectionActorDelegate>)delegate;
-(void)setDelegate:(NSObject*<NWRemoteConnectionActorDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSMutableDictionary *)connections;
-(void)setConnections:(NSMutableDictionary *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSMutableDictionary *)browsers;
-(void)setBrowsers:(NSMutableDictionary *)arg1 ;
@end

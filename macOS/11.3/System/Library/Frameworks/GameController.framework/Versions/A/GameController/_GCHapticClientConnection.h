/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/_GCIPCRemoteIncomingConnection.h>

@interface _GCHapticClientConnection : _GCIPCRemoteIncomingConnection

@property (nonatomic,retain) id<CHHapticServerInterface> server; 
-(void)setServer:(id<CHHapticServerInterface>)arg1 ;
-(id<CHHapticServerInterface>)server;
-(id)initWithConnection:(id)arg1 fromProcess:(id)arg2 ;
@end


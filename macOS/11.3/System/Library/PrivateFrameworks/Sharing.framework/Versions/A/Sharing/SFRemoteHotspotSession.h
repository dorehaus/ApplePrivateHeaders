/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFRemoteHotspotClient.h>
#import <libobjc.A.dylib/SFCompanionXPCManagerObserver.h>

@protocol SFRemoteHotspotSessionDelegate, SFRemoteHotspotProtocol;
@class NSString;

@interface SFRemoteHotspotSession : NSObject <SFRemoteHotspotClient, SFCompanionXPCManagerObserver> {

	char _browsing;
	id<SFRemoteHotspotSessionDelegate> _delegate;
	id<SFRemoteHotspotProtocol> _connectionProxy;

}

@property (assign) char browsing;                                            //@synthesize browsing=_browsing - In the implementation block
@property (retain) id<SFRemoteHotspotProtocol> connectionProxy;              //@synthesize connectionProxy=_connectionProxy - In the implementation block
@property (__weak) id<SFRemoteHotspotSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)xpcManagerConnectionInterrupted;
-(void)setConnectionProxy:(id<SFRemoteHotspotProtocol>)arg1 ;
-(id<SFRemoteHotspotProtocol>)connectionProxy;
-(id)init;
-(id<SFRemoteHotspotSessionDelegate>)delegate;
-(void)setDelegate:(id<SFRemoteHotspotSessionDelegate>)arg1 ;
-(void)setBrowsing:(char)arg1 ;
-(void)stopBrowsing;
-(char)browsing;
-(void)startBrowsing;
-(void)enableHotspotForDevice:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updatedFoundDeviceList:(id)arg1 ;
-(void)enableRemoteHotspotForDevice:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end


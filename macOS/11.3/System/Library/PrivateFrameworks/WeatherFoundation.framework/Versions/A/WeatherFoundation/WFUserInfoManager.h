/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/Versions/A/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFUserInfoManagerDelegate, OS_dispatch_queue;
@class NSUbiquitousKeyValueStore, NSObject;

@interface WFUserInfoManager : NSObject {

	NSUbiquitousKeyValueStore* _encryptedStore;
	id<WFUserInfoManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _ubiquitousKVSCommunicationsQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> ubiquitousKVSCommunicationsQueue;              //@synthesize ubiquitousKVSCommunicationsQueue=_ubiquitousKVSCommunicationsQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                                 //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,readonly) NSUbiquitousKeyValueStore * encryptedStore;                               //@synthesize encryptedStore=_encryptedStore - In the implementation block
@property (nonatomic,retain) id<WFUserInfoManagerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)init;
-(id<WFUserInfoManagerDelegate>)delegate;
-(void)setDelegate:(id<WFUserInfoManagerDelegate>)arg1 ;
-(void)synchronize;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)encryptedStoreChanged:(id)arg1 ;
-(NSUbiquitousKeyValueStore *)encryptedStore;
-(void)readUserIdentifierAndNotify;
-(NSObject*<OS_dispatch_queue>)ubiquitousKVSCommunicationsQueue;
-(void)setUbiquitousKVSCommunicationsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

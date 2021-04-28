/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMDMessageStore, NSString, NSTimer, NSMutableSet, IMTimingCollection;

@interface IMDMessageFromStorageController : NSObject {

	unsigned long long _pendingReadReceiptFromStorageCount;
	IMDMessageStore* _messageStore;
	NSString* _serviceName;
	NSTimer* _storageTimer;
	NSMutableSet* _messagesReceivedDuringStorage;
	IMTimingCollection* _timingComingBackFromStorage;
	unsigned long long _messagesProcessedComingBackFromStorage;
	id __broadcasterForTesting;
	double _storageTimerInterval;
	double _storageTimerUpdateInterval;
	double _lastMessageStorageTimerInterval;

}

@property (nonatomic,retain) IMDMessageStore * messageStore;                                         //@synthesize messageStore=_messageStore - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                                                 //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSTimer * storageTimer;                                                 //@synthesize storageTimer=_storageTimer - In the implementation block
@property (nonatomic,retain) NSMutableSet * messagesReceivedDuringStorage;                           //@synthesize messagesReceivedDuringStorage=_messagesReceivedDuringStorage - In the implementation block
@property (nonatomic,retain) IMTimingCollection * timingComingBackFromStorage;                       //@synthesize timingComingBackFromStorage=_timingComingBackFromStorage - In the implementation block
@property (assign,nonatomic) unsigned long long messagesProcessedComingBackFromStorage;              //@synthesize messagesProcessedComingBackFromStorage=_messagesProcessedComingBackFromStorage - In the implementation block
@property (nonatomic,retain) id _broadcasterForTesting;                                              //@synthesize _broadcasterForTesting=__broadcasterForTesting - In the implementation block
@property (assign,nonatomic) double storageTimerInterval;                                            //@synthesize storageTimerInterval=_storageTimerInterval - In the implementation block
@property (assign,nonatomic) double storageTimerUpdateInterval;                                      //@synthesize storageTimerUpdateInterval=_storageTimerUpdateInterval - In the implementation block
@property (assign,nonatomic) double lastMessageStorageTimerInterval;                                 //@synthesize lastMessageStorageTimerInterval=_lastMessageStorageTimerInterval - In the implementation block
@property (assign,nonatomic) unsigned long long pendingReadReceiptFromStorageCount;                  //@synthesize pendingReadReceiptFromStorageCount=_pendingReadReceiptFromStorageCount - In the implementation block
+(id)iMessageStorageController;
+(id)SMSStorageController;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(IMDMessageStore *)messageStore;
-(void)setMessageStore:(IMDMessageStore *)arg1 ;
-(id)broadcaster;
-(id)initWithMessageStore:(id)arg1 ;
-(double)storageTimerUpdateInterval;
-(void)_updateStorageTimerWithInterval:(double)arg1 ;
-(double)storageTimerInterval;
-(double)lastMessageStorageTimerInterval;
-(void)noteLastItemProcessedWithError:(unsigned long long)arg1 ;
-(void)_submitStorageMetricsWithError:(unsigned long long)arg1 ;
-(void)_storageTimerFired;
-(unsigned long long)pendingReadReceiptFromStorageCount;
-(void)setPendingReadReceiptFromStorageCount:(unsigned long long)arg1 ;
-(void)_postMessagesFromStorage:(id)arg1 ;
-(char)isAwaitingStorageTimer;
-(void)noteSuppressedMessageUpdate:(id)arg1 ;
-(void)noteItemFromStorage:(id)arg1 ;
-(void)noteLastItemFromStorage:(id)arg1 ;
-(void)noteLastItemProcessed;
-(void)incrementPendingReadReceiptFromStorageCount;
-(void)decrementPendingReadReceiptFromStorageCount;
-(NSTimer *)storageTimer;
-(void)setStorageTimer:(NSTimer *)arg1 ;
-(NSMutableSet *)messagesReceivedDuringStorage;
-(void)setMessagesReceivedDuringStorage:(NSMutableSet *)arg1 ;
-(IMTimingCollection *)timingComingBackFromStorage;
-(void)setTimingComingBackFromStorage:(IMTimingCollection *)arg1 ;
-(unsigned long long)messagesProcessedComingBackFromStorage;
-(void)setMessagesProcessedComingBackFromStorage:(unsigned long long)arg1 ;
-(id)_broadcasterForTesting;
-(void)set_broadcasterForTesting:(id)arg1 ;
-(void)setStorageTimerInterval:(double)arg1 ;
-(void)setStorageTimerUpdateInterval:(double)arg1 ;
-(void)setLastMessageStorageTimerInterval:(double)arg1 ;
@end


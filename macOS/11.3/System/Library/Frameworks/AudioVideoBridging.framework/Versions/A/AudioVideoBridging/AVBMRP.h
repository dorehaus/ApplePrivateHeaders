/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class IOKService, IOKNotificationPort, IOKInterestNotification, NSString, AVBInterface, NSObject, IOKConnection;

@interface AVBMRP : NSObject {

	IOKService* _service;
	IOKNotificationPort* _notificationPort;
	IOKInterestNotification* _interestNotification;
	NSString* _interfaceName;
	AVBInterface* interface;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	IOKConnection* _connection;

}

@property (__weak) AVBInterface * interface; 
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,readonly) IOKConnection * connection;                                     //@synthesize connection=_connection - In the implementation block
+(id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2 ;
+(id)iokitMatchingDictionaryForInterfaceName:(id)arg1 ;
+(id)IOClassName;
-(IOKConnection *)connection;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)initWithInterface:(id)arg1 ;
-(id)commonInit;
-(AVBInterface *)interface;
-(void)setInterface:(AVBInterface *)arg1 ;
-(id)initWithInterfaceName:(id)arg1 ;
-(void)serviceTerminated;
-(void)callbackWithArgs:(unsigned long long*)arg1 argCount:(unsigned)arg2 ;
-(char)sendPreregisteredAttributes;
-(id)localAttributes;
-(id)remoteAttributes;
@end


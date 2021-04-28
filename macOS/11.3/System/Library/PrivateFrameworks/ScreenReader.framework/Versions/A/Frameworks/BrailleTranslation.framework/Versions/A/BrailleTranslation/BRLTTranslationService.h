/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenReader.framework/Versions/A/Frameworks/BrailleTranslation.framework/Versions/A/BrailleTranslation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSXPCConnection, NSObject;

@interface BRLTTranslationService : NSObject {

	char _invalid;
	char _interrupted;
	NSString* _serviceIdentifier;
	/*^block*/id _invalidationHandler;
	NSXPCConnection* _queue_connection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSXPCConnection * queue_connection;              //@synthesize queue_connection=_queue_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,getter=isInvalid,nonatomic) char invalid;                   //@synthesize invalid=_invalid - In the implementation block
@property (assign,nonatomic) char interrupted;                                //@synthesize interrupted=_interrupted - In the implementation block
@property (nonatomic,readonly) NSString * serviceIdentifier;                  //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (getter=isLoopback,nonatomic,readonly) char loopback; 
@property (nonatomic,copy) id invalidationHandler;                            //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
+(id)connections;
+(id)serviceForIdentifier:(id)arg1 ;
+(id)serviceForIdentifier:(id)arg1 loopback:(char)arg2 ;
+(id)connectionForServiceIdentifier:(id)arg1 ;
+(id)connectionForLoopbackService:(id)arg1 ;
-(id)description;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)invalidationHandler;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)interrupted;
-(NSString *)serviceIdentifier;
-(NSXPCConnection *)queue_connection;
-(char)isInvalid;
-(void)setInterrupted:(char)arg1 ;
-(void)setInvalid:(char)arg1 ;
-(void)setQueue_connection:(NSXPCConnection *)arg1 ;
-(char)isLoopback;
-(void)brailleForText:(id)arg1 parameters:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)textForBraille:(id)arg1 parameters:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(id)initWithServiceIdentifier:(id)arg1 connection:(id)arg2 ;
-(void)_queue_resume;
-(void)_queue_loadBundle;
-(void)_queue_invalidate;
-(id)_queue_serviceProxy;
@end


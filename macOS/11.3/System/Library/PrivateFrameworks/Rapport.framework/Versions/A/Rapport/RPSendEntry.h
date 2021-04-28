/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Versions/A/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSData, NSString, NSDictionary, NSObject, NSNumber;

@interface RPSendEntry : NSObject {

	unsigned _xid;
	unsigned _xpcID;
	/*^block*/id _completion;
	NSData* _eventData;
	NSString* _eventID;
	NSDictionary* _options;
	unsigned long long _queueTicks;
	NSString* _requestID;
	NSDictionary* _request;
	/*^block*/id _responseHandler;
	NSObject*<OS_dispatch_source> _timer;
	NSNumber* _xidObj;

}

@property (nonatomic,copy) id completion;                                      //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) NSData * eventData;                                 //@synthesize eventData=_eventData - In the implementation block
@property (nonatomic,copy) NSString * eventID;                                 //@synthesize eventID=_eventID - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                             //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long queueTicks;                    //@synthesize queueTicks=_queueTicks - In the implementation block
@property (nonatomic,copy) NSString * requestID;                               //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) NSDictionary * request;                             //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                 //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;              //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) unsigned xid;                                     //@synthesize xid=_xid - In the implementation block
@property (nonatomic,retain) NSNumber * xidObj;                                //@synthesize xidObj=_xidObj - In the implementation block
@property (assign,nonatomic) unsigned xpcID;                                   //@synthesize xpcID=_xpcID - In the implementation block
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(NSString *)eventID;
-(NSDictionary *)request;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSData *)eventData;
-(id)completion;
-(void)setRequest:(NSDictionary *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(id)responseHandler;
-(void)setEventID:(NSString *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(unsigned)xpcID;
-(void)setXpcID:(unsigned)arg1 ;
-(void)setEventData:(NSData *)arg1 ;
-(unsigned long long)queueTicks;
-(void)setQueueTicks:(unsigned long long)arg1 ;
-(unsigned)xid;
-(void)setXid:(unsigned)arg1 ;
-(NSNumber *)xidObj;
-(void)setXidObj:(NSNumber *)arg1 ;
@end


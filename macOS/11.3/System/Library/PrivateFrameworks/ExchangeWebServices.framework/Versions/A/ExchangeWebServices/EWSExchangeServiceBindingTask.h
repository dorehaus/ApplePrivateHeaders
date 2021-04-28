/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SOAPParserDelegate.h>

@protocol EWSExchangeServiceBindingTaskDelegate;
@class NSMutableData, NSString, SOAPParser, NSConditionLock, NSError, EWSExchangeServiceBinding, EWSBaseRequestType, EWSServerVersionInfo, NSData;

@interface EWSExchangeServiceBindingTask : NSObject <SOAPParserDelegate> {

	NSMutableData* _loggingData;
	int _retryCount;
	char _logActivity;
	double _timeout;
	NSString* _schemaVersion;
	NSString* _clientRequestID;
	SOAPParser* _parser;
	NSConditionLock* _finishedConditionLock;
	NSError* _error;
	id<EWSExchangeServiceBindingTaskDelegate> _delegate;
	/*^block*/id _completionHandler;
	EWSExchangeServiceBinding* _binding;
	EWSBaseRequestType* _request;
	id _ewsResponse;
	EWSServerVersionInfo* _serverInfo;

}

@property (nonatomic,readonly) SOAPParser * parser;                                 //@synthesize parser=_parser - In the implementation block
@property (nonatomic,retain) NSConditionLock * finishedConditionLock;               //@synthesize finishedConditionLock=_finishedConditionLock - In the implementation block
@property (nonatomic,retain) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (__weak) id<EWSExchangeServiceBindingTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy) id completionHandler;                                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (__weak) EWSExchangeServiceBinding * binding;                             //@synthesize binding=_binding - In the implementation block
@property (retain) EWSBaseRequestType * request;                                    //@synthesize request=_request - In the implementation block
@property (copy,readonly) NSData * requestData; 
@property (retain) id ewsResponse;                                                  //@synthesize ewsResponse=_ewsResponse - In the implementation block
@property (assign) char logActivity;                                                //@synthesize logActivity=_logActivity - In the implementation block
@property (retain) EWSServerVersionInfo * serverInfo;                               //@synthesize serverInfo=_serverInfo - In the implementation block
@property (assign) double timeout;                                                  //@synthesize timeout=_timeout - In the implementation block
@property (copy) NSString * schemaVersion;                                          //@synthesize schemaVersion=_schemaVersion - In the implementation block
@property (copy) NSString * clientRequestID;                                        //@synthesize clientRequestID=_clientRequestID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<EWSExchangeServiceBindingTaskDelegate>)delegate;
-(void)setDelegate:(id<EWSExchangeServiceBindingTaskDelegate>)arg1 ;
-(NSError *)error;
-(void)failWithError:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(EWSExchangeServiceBinding *)binding;
-(double)timeout;
-(void)start;
-(void)cancel;
-(EWSBaseRequestType *)request;
-(NSString *)schemaVersion;
-(void)setTimeout:(double)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setBinding:(EWSExchangeServiceBinding *)arg1 ;
-(void)setRequest:(EWSBaseRequestType *)arg1 ;
-(NSData *)requestData;
-(SOAPParser *)parser;
-(void)handleData:(id)arg1 ;
-(void)setServerInfo:(EWSServerVersionInfo *)arg1 ;
-(EWSServerVersionInfo *)serverInfo;
-(void)setSchemaVersion:(NSString *)arg1 ;
-(id)runSynchronously:(id*)arg1 ;
-(void)completeWithResponse:(id)arg1 ;
-(NSString *)clientRequestID;
-(void)setClientRequestID:(NSString *)arg1 ;
-(void)setLogActivity:(char)arg1 ;
-(char)shouldRetryForOAuthTokenRefreshWithError:(id)arg1 ;
-(id)ewsResponse;
-(void)setFinishedConditionLock:(NSConditionLock *)arg1 ;
-(char)logActivity;
-(char)_shouldRetryFromParser:(id)arg1 error:(id*)arg2 ;
-(NSConditionLock *)finishedConditionLock;
-(id)_serverVersionInfoFromHeaders:(id)arg1 ;
-(double)_backOffTimeForFaultDetail:(id)arg1 ;
-(id)_exchangeServiceErrorFromSOAPError:(id)arg1 ;
-(void)setEwsResponse:(id)arg1 ;
-(void)soapParser:(id)arg1 didParseEnvelope:(id)arg2 ;
@end

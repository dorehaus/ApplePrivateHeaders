/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@class NSError, NSDictionary, NSData, NSURLRequest, NSMutableArray, NSURLSessionTask;

@interface AMSMockURLResponse : NSObject {

	char _performActualRequest;
	NSError* _error;
	unsigned long long _statusCode;
	NSDictionary* _headers;
	NSData* _body;
	NSURLRequest* _originalRequest;
	NSMutableArray* _responseHandlerBlocks;
	NSURLSessionTask* _runningTask;

}

@property (retain) NSMutableArray * responseHandlerBlocks;              //@synthesize responseHandlerBlocks=_responseHandlerBlocks - In the implementation block
@property (retain) NSURLSessionTask * runningTask;                      //@synthesize runningTask=_runningTask - In the implementation block
@property (retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
@property (assign) unsigned long long statusCode;                       //@synthesize statusCode=_statusCode - In the implementation block
@property (retain) NSDictionary * headers;                              //@synthesize headers=_headers - In the implementation block
@property (retain) NSData * body;                                       //@synthesize body=_body - In the implementation block
@property (assign) char performActualRequest;                           //@synthesize performActualRequest=_performActualRequest - In the implementation block
@property (readonly) NSURLRequest * originalRequest;                    //@synthesize originalRequest=_originalRequest - In the implementation block
+(id)responseWithError:(id)arg1 ;
+(id)responseFromActualResponse;
+(id)responseWithStatus:(unsigned long long)arg1 headers:(id)arg2 body:(id)arg3 ;
+(id)responseWithHARFile:(id)arg1 ;
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(unsigned long long)statusCode;
-(NSURLRequest *)originalRequest;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(NSURLSessionTask *)runningTask;
-(void)setRunningTask:(NSURLSessionTask *)arg1 ;
-(void)setStatusCode:(unsigned long long)arg1 ;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(SCD_Struct_AM8)handleReceivedRequest:(id)arg1 ;
-(void)stopRunningTasks;
-(void)setPerformActualRequest:(char)arg1 ;
-(char)performActualRequest;
-(NSMutableArray *)responseHandlerBlocks;
-(void)addResponseHandler:(/*^block*/id)arg1 ;
-(void)setResponseHandlerBlocks:(NSMutableArray *)arg1 ;
@end


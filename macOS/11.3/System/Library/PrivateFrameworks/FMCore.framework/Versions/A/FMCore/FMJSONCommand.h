/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/Versions/A/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCore/FMCommandBase.h>

@protocol OS_dispatch_queue;
@class NSError, NSDictionary, NSObject;

@interface FMJSONCommand : FMCommandBase {

	char __hasParsedResponseBody;
	NSError* _jsonResponseParseError;
	NSDictionary* __responseBodyDict;
	NSDictionary* __requestBodyDict;
	NSObject*<OS_dispatch_queue> _responseQueue;

}

@property (assign,nonatomic) char _hasParsedResponseBody;                             //@synthesize _hasParsedResponseBody=__hasParsedResponseBody - In the implementation block
@property (nonatomic,retain) NSDictionary * _responseBodyDict;                        //@synthesize _responseBodyDict=__responseBodyDict - In the implementation block
@property (nonatomic,retain) NSDictionary * _requestBodyDict;                         //@synthesize _requestBodyDict=__requestBodyDict - In the implementation block
@property (nonatomic,retain) NSError * jsonResponseParseError;                        //@synthesize jsonResponseParseError=_jsonResponseParseError - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> responseQueue;              //@synthesize responseQueue=_responseQueue - In the implementation block
@property (nonatomic,readonly) NSDictionary * jsonResponseDictionary; 
@property (nonatomic,readonly) NSDictionary * serverAlertInfo; 
-(void)set_hasParsedResponseBody:(char)arg1 ;
-(void)set_responseBodyDict:(NSDictionary *)arg1 ;
-(void)setJsonResponseParseError:(NSError *)arg1 ;
-(NSDictionary *)_requestBodyDict;
-(void)set_requestBodyDict:(NSDictionary *)arg1 ;
-(char)_hasParsedResponseBody;
-(NSDictionary *)_responseBodyDict;
-(NSDictionary *)serverAlertInfo;
-(id)init;
-(id)body;
-(id)headers;
-(void)sendRequest;
-(NSObject*<OS_dispatch_queue>)responseQueue;
-(void)setResponseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)jsonBodyDictionary;
-(NSDictionary *)jsonResponseDictionary;
-(NSError *)jsonResponseParseError;
@end


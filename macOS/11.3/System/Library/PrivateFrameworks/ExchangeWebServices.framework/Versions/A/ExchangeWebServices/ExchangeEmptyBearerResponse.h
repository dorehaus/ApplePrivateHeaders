/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError;

@interface ExchangeEmptyBearerResponse : NSObject {

	NSString* _authURI;
	long long _statusCode;
	NSError* _error;

}

@property (nonatomic,readonly) NSString * authURI;                //@synthesize authURI=_authURI - In the implementation block
@property (nonatomic,readonly) long long statusCode;              //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) NSError * error;                   //@synthesize error=_error - In the implementation block
+(id)log;
-(NSError *)error;
-(long long)statusCode;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
-(NSString *)authURI;
@end


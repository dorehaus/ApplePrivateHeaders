/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/Versions/A/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFHTTPRequest.h>

@class NSData, NSDictionary;

@interface HMFMutableHTTPRequest : HMFHTTPRequest

@property (assign,nonatomic) double timeoutInterval; 
@property (nonatomic,copy) NSData * body; 
@property (nonatomic,copy) NSDictionary * headerFields; 
-(void)setBody:(NSData *)arg1 ;
-(void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2 ;
-(id)responseWithStatusCode:(long long)arg1 ;
-(id)initWithInternalRequest:(id)arg1 ;
-(id)initWithURL:(id)arg1 method:(id)arg2 body:(id)arg3 timeoutInterval:(double)arg4 ;
@end

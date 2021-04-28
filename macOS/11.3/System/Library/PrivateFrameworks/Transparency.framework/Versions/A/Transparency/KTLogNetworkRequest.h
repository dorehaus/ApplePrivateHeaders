/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Versions/A/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/TransparencyNetworkRequest.h>

@class NSString, NSURL, NSData, NSUUID;

@interface KTLogNetworkRequest : TransparencyNetworkRequest {

	char _isGET;
	NSString* _application;
	NSURL* _url;
	NSData* _data;
	NSUUID* _uuid;
	double _timeout;

}

@property (retain) NSString * application;              //@synthesize application=_application - In the implementation block
@property (assign) char isGET;                          //@synthesize isGET=_isGET - In the implementation block
@property (retain) NSURL * url;                         //@synthesize url=_url - In the implementation block
@property (retain) NSData * data;                       //@synthesize data=_data - In the implementation block
@property (retain) NSUUID * uuid;                       //@synthesize uuid=_uuid - In the implementation block
@property (assign) double timeout;                      //@synthesize timeout=_timeout - In the implementation block
+(char)addAccountAuthentication:(id)arg1 error:(id*)arg2 ;
+(void)addDeviceAuthentication:(id)arg1 signature:(id)arg2 timestamp:(id)arg3 certs:(id)arg4 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSURL *)url;
-(NSString *)application;
-(double)timeout;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(void)setApplication:(NSString *)arg1 ;
-(void)setIsGET:(char)arg1 ;
-(char)isGET;
-(id)createGETRequestForURL:(id)arg1 timeout:(double)arg2 error:(id*)arg3 ;
-(void)createRequestForAuthentication:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initGETWithURL:(id)arg1 application:(id)arg2 ;
-(id)initPOSTWithURL:(id)arg1 data:(id)arg2 uuid:(id)arg3 application:(id)arg4 ;
-(id)createPOSTRequestForURL:(id)arg1 timeout:(double)arg2 contents:(id)arg3 authentication:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteCoreML.framework/Versions/A/RemoteCoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _MLNetworkOptions : NSObject {

	NSMutableDictionary* _networkOptions;
	long long _receiveTimeout;

}

@property (nonatomic,readonly) NSMutableDictionary * networkOptions;              //@synthesize networkOptions=_networkOptions - In the implementation block
@property (nonatomic,readonly) long long receiveTimeout;                          //@synthesize receiveTimeout=_receiveTimeout - In the implementation block
-(const char*)port;
-(id)initWithOptions:(id)arg1 ;
-(const char*)localPort;
-(unsigned long long)family;
-(NSMutableDictionary *)networkOptions;
-(const char*)psk;
-(char)useUDP;
-(char)useTLS;
-(char)useBonjour;
-(const char*)networkNameIdentifier;
-(const char*)localAddr;
-(long long)receiveTimeoutValue;
-(long long)receiveTimeout;
-(char)useAWDL;
@end

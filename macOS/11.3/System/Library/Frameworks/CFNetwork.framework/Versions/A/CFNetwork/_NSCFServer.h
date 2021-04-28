/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_tcp_listener;
@class NSString, NSDictionary, NSNumber, NSObject;

@interface _NSCFServer : NSObject {

	char _enableCoprocessorInterface;
	long long _type;
	long long _listenerPort;
	NSString* _interface;
	NSDictionary* _configuration;
	NSNumber* _listenerID;
	NSObject*<OS_tcp_listener> _listener;

}

@property (assign) long long type;                                                             //@synthesize type=_type - In the implementation block
@property (assign) long long listenerPort;                                                     //@synthesize listenerPort=_listenerPort - In the implementation block
@property (retain) NSString * interface;                                                       //@synthesize interface=_interface - In the implementation block
@property (retain) NSDictionary * configuration;                                               //@synthesize configuration=_configuration - In the implementation block
@property (getter=isCoprocessorInterfaceEnabled) char enableCoprocessorInterface;              //@synthesize enableCoprocessorInterface=_enableCoprocessorInterface - In the implementation block
+(char)startSocksServerWithPort:(long long)arg1 ;
+(id)adressesForInterface:(id)arg1 ;
+(char)stopAll;
-(id)initWithType:(long long)arg1 port:(long long)arg2 interface:(id)arg3 ;
-(void)setListenerPort:(long long)arg1 ;
-(char)isCoprocessorInterfaceEnabled;
-(void)dealloc;
-(id)init;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(char)start;
-(char)stop;
-(id)initWithType:(long long)arg1 ;
-(NSDictionary *)configuration;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSString *)interface;
-(void)setInterface:(NSString *)arg1 ;
-(id)initWithType:(long long)arg1 port:(long long)arg2 ;
-(void)setEnableCoprocessorInterface:(char)arg1 ;
-(long long)listenerPort;
@end


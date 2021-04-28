/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction;
@class NSObject, NSString;

@interface AMSKeepAlive : NSObject {

	NSObject*<OS_os_transaction> _transaction;
	NSString* _logKey;
	NSString* _name;
	long long _style;

}

@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (readonly) long long style;              //@synthesize style=_style - In the implementation block
+(void)keepAliveWithName:(id)arg1 style:(long long)arg2 block:(/*^block*/id)arg3 ;
+(id)keepAliveWithName:(id)arg1 style:(long long)arg2 ;
+(void)_accessAssertionCache:(/*^block*/id)arg1 ;
+(id)keepAliveWithFormat:(id)arg1 ;
+(id)keepAliveWithName:(id)arg1 ;
+(void)_handleAssertionExpiration;
-(void)dealloc;
-(NSString *)name;
-(void)invalidate;
-(id)initWithName:(id)arg1 ;
-(long long)style;
-(id)_cacheKey;
-(id)_assertionName;
-(id)initWithName:(id)arg1 style:(long long)arg2 ;
-(void)_takeOSTransaction;
-(void)_takeProcessAssertion;
-(void)_startLogTimer;
-(void)_removeProcessAssertion;
-(void)_removeOSTransaction;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebDriver.framework/Versions/A/WebDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebDriver/WebDriver-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface WDHTTPCookie : NSObject <NSCopying> {

	char _secure;
	char _httpOnly;
	char _session;
	NSString* _name;
	NSString* _value;
	NSString* _domain;
	NSString* _path;
	NSDate* _expirationDate;

}

@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                      //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * domain;                              //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy) NSString * path;                                //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                        //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,getter=isSecure,nonatomic) char secure;                  //@synthesize secure=_secure - In the implementation block
@property (assign,getter=isHTTPOnly,nonatomic) char httpOnly;              //@synthesize httpOnly=_httpOnly - In the implementation block
@property (assign,getter=isSession,nonatomic) char session;                //@synthesize session=_session - In the implementation block
+(id)defaultCookieWithName:(id)arg1 value:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(NSString *)domain;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)value;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)setSession:(char)arg1 ;
-(char)isSecure;
-(void)setSecure:(char)arg1 ;
-(char)isHTTPOnly;
-(void)setHttpOnly:(char)arg1 ;
-(id)toJSONPayload;
-(char)isSession;
-(char)isEqualToCookie:(id)arg1 ;
@end


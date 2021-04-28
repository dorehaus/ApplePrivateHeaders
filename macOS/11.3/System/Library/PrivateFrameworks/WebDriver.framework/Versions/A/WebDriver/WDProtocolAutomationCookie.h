/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebDriver.framework/Versions/A/WebDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface WDProtocolAutomationCookie : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * path; 
@property (assign,nonatomic) double expires; 
@property (assign,nonatomic) int size; 
@property (assign,nonatomic) char httpOnly; 
@property (assign,nonatomic) char secure; 
@property (assign,nonatomic) char session; 
@property (assign,nonatomic) long long sameSite; 
-(int)size;
-(NSString *)name;
-(NSString *)domain;
-(void)setName:(NSString *)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)value;
-(id)initWithPayload:(id)arg1 ;
-(void)setSize:(int)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(char)session;
-(void)setDomain:(NSString *)arg1 ;
-(void)setSession:(char)arg1 ;
-(char)secure;
-(double)expires;
-(void)setExpires:(double)arg1 ;
-(void)setSecure:(char)arg1 ;
-(void)setHttpOnly:(char)arg1 ;
-(void)setSameSite:(long long)arg1 ;
-(char)httpOnly;
-(long long)sameSite;
-(id)initWithProtocolObject:(id)arg1 ;
-(id)initWithName:(id)arg1 value:(id)arg2 domain:(id)arg3 path:(id)arg4 expires:(double)arg5 size:(int)arg6 httpOnly:(char)arg7 secure:(char)arg8 session:(char)arg9 sameSite:(long long)arg10 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/Versions/A/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface AMSUIWebJSRequest : NSObject <NSSecureCoding> {

	NSString* _logKey;
	NSDictionary* _options;
	NSString* _service;

}

@property (retain) NSString * logKey;                   //@synthesize logKey=_logKey - In the implementation block
@property (retain) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (readonly) NSString * service;                //@synthesize service=_service - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(NSString *)service;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(id)initWithServiceName:(id)arg1 logKey:(id)arg2 ;
@end


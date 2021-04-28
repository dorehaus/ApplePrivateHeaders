/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ABAccountConfiguration;
@class NSString, NSURL;

@interface ABIAMigrationAccount : NSObject {

	NSString* _identifier;
	id<ABAccountConfiguration> _config;
	Class _sourceClass;
	NSURL* _baseUrl;

}

@property (copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (retain,readonly) id<ABAccountConfiguration> config;              //@synthesize config=_config - In the implementation block
@property (readonly) Class sourceClass;                                     //@synthesize sourceClass=_sourceClass - In the implementation block
@property (copy,readonly) NSURL * baseUrl;                                  //@synthesize baseUrl=_baseUrl - In the implementation block
@property (copy,readonly) NSString * password; 
@property (readonly) char hasACAccountIdentifier; 
-(void)dealloc;
-(id)description;
-(NSString *)password;
-(NSString *)identifier;
-(id<ABAccountConfiguration>)config;
-(id)initWithBuilder:(id)arg1 ;
-(Class)sourceClass;
-(char)hasACAccountIdentifier;
-(NSURL *)baseUrl;
@end

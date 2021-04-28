/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUUID;

@interface CRKASMCertificateCommonName : NSObject {

	NSString* _userIdentifier;
	NSString* _prefix;
	NSUUID* _UUID;

}

@property (nonatomic,copy,readonly) NSString * prefix;                      //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,readonly) NSUUID * UUID;                               //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * userIdentifier;              //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue; 
+(id)commonNameWithString:(id)arg1 ;
-(id)description;
-(NSString *)stringValue;
-(NSString *)userIdentifier;
-(NSUUID *)UUID;
-(NSString *)prefix;
-(id)initWithPrefix:(id)arg1 userIdentifier:(id)arg2 ;
-(id)initWithPrefix:(id)arg1 userIdentifier:(id)arg2 UUID:(id)arg3 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSNumber, HMAccessoryCategory, NSArray;

@interface HMSetupAccessoryPayload : NSObject <HMFObject, NSMutableCopying, NSCopying, NSSecureCoding> {

	char _supportsIP;
	char _supportsWAC;
	char _supportsBTLE;
	char _paired;
	NSString* _setupCode;
	NSURL* _setupPayloadURL;
	NSString* _setupID;
	NSNumber* _categoryNumber;
	NSString* _productNumber;
	NSNumber* _threadIdentifier;
	NSString* _accessoryName;
	long long _communicationProtocol;

}

@property (nonatomic,copy) NSURL * setupPayloadURL;                               //@synthesize setupPayloadURL=_setupPayloadURL - In the implementation block
@property (nonatomic,copy) NSString * setupID;                                    //@synthesize setupID=_setupID - In the implementation block
@property (nonatomic,copy) NSNumber * categoryNumber;                             //@synthesize categoryNumber=_categoryNumber - In the implementation block
@property (nonatomic,copy) NSString * productNumber;                              //@synthesize productNumber=_productNumber - In the implementation block
@property (assign,nonatomic) char supportsIP;                                     //@synthesize supportsIP=_supportsIP - In the implementation block
@property (assign,nonatomic) char supportsWAC;                                    //@synthesize supportsWAC=_supportsWAC - In the implementation block
@property (assign,nonatomic) char supportsBTLE;                                   //@synthesize supportsBTLE=_supportsBTLE - In the implementation block
@property (assign,getter=isPaired,nonatomic) char paired;                         //@synthesize paired=_paired - In the implementation block
@property (nonatomic,copy) NSNumber * threadIdentifier;                           //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,readonly) long long communicationProtocol;                   //@synthesize communicationProtocol=_communicationProtocol - In the implementation block
@property (nonatomic,copy,readonly) NSString * setupCode;                         //@synthesize setupCode=_setupCode - In the implementation block
@property (nonatomic,copy,readonly) HMAccessoryCategory * category; 
@property (nonatomic,copy,readonly) NSString * accessoryName;                     //@synthesize accessoryName=_accessoryName - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)shortDescription;
+(id)_setupPayloadURLFromSetupPayloadURLString:(id)arg1 ;
+(char)isSetupPayloadURL:(id)arg1 ;
+(char)isSetupPayloadURLString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMAccessoryCategory *)category;
-(NSString *)shortDescription;
-(NSString *)accessoryName;
-(void)setPaired:(char)arg1 ;
-(void)setThreadIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)threadIdentifier;
-(NSString *)privateDescription;
-(char)isPaired;
-(void)setProductNumber:(NSString *)arg1 ;
-(NSString *)productNumber;
-(NSArray *)attributeDescriptions;
-(char)supportsIP;
-(char)supportsWAC;
-(char)supportsBTLE;
-(NSString *)setupCode;
-(NSString *)setupID;
-(NSNumber *)categoryNumber;
-(NSURL *)setupPayloadURL;
-(void)setCategoryNumber:(NSNumber *)arg1 ;
-(id)initWithSetupPayloadURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithHAPSetupPayloadURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithSetupCode:(id)arg1 communicationProtocol:(long long)arg2 ;
-(void)setSetupPayloadURL:(NSURL *)arg1 ;
-(void)setSupportsIP:(char)arg1 ;
-(void)setSupportsBTLE:(char)arg1 ;
-(void)setSupportsWAC:(char)arg1 ;
-(void)setSetupID:(NSString *)arg1 ;
-(id)initWithHAPSetupCode:(id)arg1 ;
-(long long)communicationProtocol;
-(id)initWithSetupPayloadURLString:(id)arg1 error:(id*)arg2 ;
-(id)initWithSetupCode:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSSet, NSArray;

@interface HMPerson : NSObject <HMFObject, NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSString* _name;
	NSSet* _personLinks;

}

@property (copy) NSUUID * UUID;                                                   //@synthesize UUID=_UUID - In the implementation block
@property (copy) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (copy) NSSet * personLinks;                                             //@synthesize personLinks=_personLinks - In the implementation block
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)UUID;
-(NSString *)shortDescription;
-(void)setUUID:(NSUUID *)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(NSString *)privateDescription;
-(NSArray *)attributeDescriptions;
-(NSSet *)personLinks;
-(void)setPersonLinks:(NSSet *)arg1 ;
@end

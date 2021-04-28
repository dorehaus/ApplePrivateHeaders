/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNKeyDescriptor_Private.h>

@class NSArray, NSString;

@interface CNTestSmartFetcher : NSObject <CNKeyDescriptor_Private> {

	NSArray* _requiredKeys;
	NSArray* _optionalKeys;

}

@property (nonatomic,readonly) NSArray * requiredKeys;              //@synthesize requiredKeys=_requiredKeys - In the implementation block
@property (nonatomic,readonly) NSArray * optionalKeys;              //@synthesize optionalKeys=_optionalKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)requiredKeys;
-(id)_cn_requiredKeys;
-(void)_cn_executeGetterForRepresentedKeys:(/*^block*/id)arg1 ;
-(id)_cn_optionalKeys;
-(id)_cn_ignorableKeys;
-(NSArray *)optionalKeys;
-(id)initWithRequiredKeys:(id)arg1 optionalKeys:(id)arg2 ;
@end

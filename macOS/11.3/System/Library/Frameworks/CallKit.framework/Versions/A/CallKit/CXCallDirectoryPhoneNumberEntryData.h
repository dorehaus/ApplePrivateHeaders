/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CXCallDirectoryEntryData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface CXCallDirectoryPhoneNumberEntryData : NSObject <CXCallDirectoryEntryData, NSSecureCoding> {

	NSData* _phoneNumberData;

}

@property (nonatomic,retain) NSData * phoneNumberData;                     //@synthesize phoneNumberData=_phoneNumberData - In the implementation block
@property (nonatomic,readonly) const long long* phoneNumbers; 
@property (nonatomic,readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(NSString *)description;
-(id)init;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const long long*)phoneNumbers;
-(NSData *)phoneNumberData;
-(long long)phoneNumberAtIndex:(unsigned long long)arg1 ;
-(void)setPhoneNumberData:(NSData *)arg1 ;
@end


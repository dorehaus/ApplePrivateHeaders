/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemPolicy.framework/Versions/A/SystemPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface SPKernelExtensionHistoryItem : NSObject <NSSecureCoding> {

	char isNotarized;
	char isDeprecated;
	char isUnsupported;
	char isCodeless;
	NSString* path;
	NSString* bundleID;
	NSString* teamID;
	NSString* cdHash;
	NSDate* lastUsed;

}

@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) NSString * teamID; 
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSString * cdHash; 
@property (nonatomic,readonly) char isNotarized; 
@property (nonatomic,readonly) char isDeprecated; 
@property (nonatomic,readonly) char isUnsupported; 
@property (nonatomic,readonly) char isCodeless; 
@property (nonatomic,readonly) NSDate * lastUsed; 
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)path;
-(NSString *)bundleID;
-(NSString *)teamID;
-(char)isNotarized;
-(char)isDeprecated;
-(NSDate *)lastUsed;
-(char)isUnsupported;
-(NSString *)cdHash;
-(char)isCodeless;
-(id)initWithPath:(id)arg1 teamID:(id)arg2 bundleID:(id)arg3 cdHash:(id)arg4 isNotarized:(char)arg5 isDeprecated:(char)arg6 isUnsupported:(char)arg7 isCodeless:(char)arg8 lastUsed:(id)arg9 ;
@end

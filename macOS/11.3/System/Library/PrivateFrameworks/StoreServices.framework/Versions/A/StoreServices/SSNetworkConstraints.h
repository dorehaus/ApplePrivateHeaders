/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface SSNetworkConstraints : NSObject <NSSecureCoding, SSXPCCoding, NSCopying> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _sizeLimits;

}

@property (getter=isAnyNetworkTypeEnabled,readonly) char anyNetworkTypeEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)_newModernNetworkConstraintsWithArray:(id)arg1 ;
+(id)_newLegacyNetworkConstraintsWithDictionary:(id)arg1 ;
+(void)_addNetworkConstraintsToDictionary:(id)arg1 forNetworkType:(long long)arg2 legacyDictionary:(id)arg3 ;
+(id)networkConstraintsForDownloadKind:(id)arg1 fromBag:(id)arg2 ;
+(id)newNetworkConstraintsByDownloadKindFromURLBag:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setSizeLimit:(long long)arg1 forNetworkType:(long long)arg2 ;
-(long long)_sizeLimitForNetworkType:(long long)arg1 ;
-(void)_disableAllNetworkTypes;
-(char)isAnyNetworkTypeEnabled;
-(char)hasSizeLimitForNetworkType:(long long)arg1 ;
-(long long)sizeLimitForNetworkType:(long long)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setSizeLimit:(long long)arg1 forNetworkType:(long long)arg2 ;
-(void)setSizeLimitsWithStoreConstraintDictionary:(id)arg1 ;
-(id)_copySizeLimits;
-(void)setAllNetworkTypesDisabled;
-(void)disableCellularNetworkTypes;
@end


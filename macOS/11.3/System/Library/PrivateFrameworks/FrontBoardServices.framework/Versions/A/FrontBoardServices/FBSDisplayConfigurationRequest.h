/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/Versions/A/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FBSDisplayConfigurationRequest : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying, NSMutableCopying, NSSecureCoding> {

	long long _overscanCompensation;
	CGSize _nativePixelSize;
	double _refreshRate;
	long long _hdrMode;

}

@property (nonatomic,readonly) long long overscanCompensation;              //@synthesize overscanCompensation=_overscanCompensation - In the implementation block
@property (nonatomic,readonly) CGSize nativePixelSize;                      //@synthesize nativePixelSize=_nativePixelSize - In the implementation block
@property (nonatomic,readonly) double refreshRate;                          //@synthesize refreshRate=_refreshRate - In the implementation block
@property (nonatomic,readonly) long long hdrMode;                           //@synthesize hdrMode=_hdrMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)hdrMode;
-(double)refreshRate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(long long)overscanCompensation;
-(CGSize)nativePixelSize;
@end


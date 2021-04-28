/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/Versions/A/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TRITaskQueuingOptions : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _duplicateTaskResolution;

}

@property (nonatomic,readonly) unsigned long long duplicateTaskResolution;              //@synthesize duplicateTaskResolution=_duplicateTaskResolution - In the implementation block
+(void)load;
+(char)supportsSecureCoding;
+(id)optionsWithDuplicateTaskResolution:(unsigned long long)arg1 ;
+(id)defaultOptionsWithIgnoreDuplicates;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isEqualToOptions:(id)arg1 ;
-(id)initWithDuplicateTaskResolution:(unsigned long long)arg1 ;
-(unsigned long long)duplicateTaskResolution;
-(id)copyWithReplacementDuplicateTaskResolution:(unsigned long long)arg1 ;
-(void)_swizzledEncodeWithCoder:(id)arg1 ;
@end


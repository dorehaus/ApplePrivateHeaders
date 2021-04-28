/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HMSupportedAccessoryDiagnostics : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _supportedTypes;
	long long _supportedFormat;
	unsigned long long _supportedOptions;

}

@property (nonatomic,readonly) unsigned long long supportedTypes;                //@synthesize supportedTypes=_supportedTypes - In the implementation block
@property (nonatomic,readonly) long long supportedFormat;                        //@synthesize supportedFormat=_supportedFormat - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedOptions;              //@synthesize supportedOptions=_supportedOptions - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)supportedOptions;
-(unsigned long long)supportedTypes;
-(id)initWithSupportedTypes:(unsigned long long)arg1 format:(long long)arg2 options:(unsigned long long)arg3 ;
-(long long)supportedFormat;
@end

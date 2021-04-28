/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface MKServerFormattedStringParameters : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _variableOverides;
	SCD_Struct_MK58 _options;

}

@property (nonatomic,readonly) SCD_Struct_MK58 options;                           //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * variableOverides;              //@synthesize variableOverides=_variableOverides - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_MK58)options;
-(id)initWithOptions:(SCD_Struct_MK58)arg1 variableOverrides:(id)arg2 ;
-(char)isEqualToServerFormattedStringParameters:(id)arg1 ;
-(NSDictionary *)variableOverides;
-(id)initWithInstructionsDistanceDetailLevel:(long long)arg1 variableOverrides:(id)arg2 ;
@end


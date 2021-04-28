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

@protocol GEOServerFormattedString;
@class MKServerFormattedStringParameters;

@interface MKServerFormattedString : NSObject <NSCopying, NSSecureCoding> {

	id<GEOServerFormattedString> _geoServerString;
	MKServerFormattedStringParameters* _parameters;

}

@property (nonatomic,readonly) id<GEOServerFormattedString> geoServerString;                     //@synthesize geoServerString=_geoServerString - In the implementation block
@property (nonatomic,copy,readonly) MKServerFormattedStringParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(char)supportsSecureCoding;
+(id)attributesForServerFormatStyle:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MKServerFormattedStringParameters *)parameters;
-(char)isEqualToServerFormattedString:(id)arg1 ;
-(id)multiPartAttributedStringWithAttributes:(id)arg1 ;
-(id)initWithGeoServerString:(id)arg1 parameters:(id)arg2 ;
-(id)_parametersByScrubbingUnusedOverrideVariablesFromParameters:(id)arg1 geoServerString:(id)arg2 ;
-(id<GEOServerFormattedString>)geoServerString;
-(id)_attributesByTokenForFormatStyles:(id)arg1 ;
@end

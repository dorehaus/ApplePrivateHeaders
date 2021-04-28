/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetricKit.framework/Versions/A/MetricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MXMetaData, NSString, NSMeasurementFormatter;

@interface MXDiagnostic : NSObject <NSSecureCoding> {

	MXMetaData* _metaData;
	NSString* _applicationVersion;
	NSMeasurementFormatter* _measurementFormatter;

}

@property (retain) NSMeasurementFormatter * measurementFormatter;              //@synthesize measurementFormatter=_measurementFormatter - In the implementation block
@property (retain) MXMetaData * metaData;                                      //@synthesize metaData=_metaData - In the implementation block
@property (readonly) NSString * applicationVersion;                            //@synthesize applicationVersion=_applicationVersion - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(MXMetaData *)metaData;
-(void)setMetaData:(MXMetaData *)arg1 ;
-(NSString *)applicationVersion;
-(id)toDictionary;
-(id)JSONRepresentation;
-(NSMeasurementFormatter *)measurementFormatter;
-(void)setMeasurementFormatter:(NSMeasurementFormatter *)arg1 ;
-(id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 ;
@end


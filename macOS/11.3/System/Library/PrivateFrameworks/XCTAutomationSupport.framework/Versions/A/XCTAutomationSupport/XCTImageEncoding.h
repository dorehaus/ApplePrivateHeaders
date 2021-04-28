/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XCTAutomationSupport.framework/Versions/A/XCTAutomationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface XCTImageEncoding : NSObject <NSSecureCoding> {

	NSString* _uniformTypeIdentifier;
	double _compressionQuality;

}

@property (nonatomic,copy,readonly) NSString * uniformTypeIdentifier;              //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
@property (nonatomic,readonly) double compressionQuality;                          //@synthesize compressionQuality=_compressionQuality - In the implementation block
+(char)supportsSecureCoding;
+(double)minimumCompression;
+(double)maximumCompression;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)compressionQuality;
-(NSString *)uniformTypeIdentifier;
-(id)initWithUniformTypeIdentifier:(id)arg1 compressionQuality:(double)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <CoreHAP/HAPNumberParser.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface HMDVideoResolution : HAPNumberParser <NSSecureCoding, NSCopying> {

	NSNumber* _imageWidth;
	NSNumber* _imageHeight;
	unsigned long long _resolutionType;

}

@property (nonatomic,copy,readonly) NSNumber * imageWidth;                     //@synthesize imageWidth=_imageWidth - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * imageHeight;                    //@synthesize imageHeight=_imageHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long resolutionType;              //@synthesize resolutionType=_resolutionType - In the implementation block
+(char)supportsSecureCoding;
+(id)arrayWithResolutions:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)imageWidth;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSNumber *)imageHeight;
-(unsigned long long)resolutionType;
-(id)initWithTLVData:(id)arg1 ;
-(id)initWithResolution:(unsigned long long)arg1 ;
-(void)_extractWidthAndHeight;
@end


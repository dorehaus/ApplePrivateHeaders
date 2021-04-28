/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PAImaging/PAImaging-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PAImageType : NSObject <NSCopying> {

	unsigned long long _quality;
	unsigned long long _variant;

}
+(void)initialize;
+(id)original;
+(id)thumbnail;
+(id)master;
+(id)preview;
+(id)typeForQuality:(unsigned long long)arg1 variant:(unsigned long long)arg2 ;
+(id)descriptionForQuality:(unsigned long long)arg1 ;
+(id)renderedVersion;
+(id)originalThumbnail;
+(id)originalGeometry;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(unsigned long long)variant;
-(unsigned long long)quality;
-(id)_initWithQuality:(unsigned long long)arg1 variant:(unsigned long long)arg2 ;
-(id)thumbnailType;
-(id)previewType;
-(id)masterType;
-(id)renderedVersionType;
-(id)qualityShortDescription;
-(char)isEqualToImageType:(id)arg1 ;
@end

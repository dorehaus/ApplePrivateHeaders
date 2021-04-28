/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL;


@protocol GEOMapItemPhoto <NSObject>
@property (nonatomic,readonly) NSString * author; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) NSString * licenseDescription; 
@property (nonatomic,readonly) NSURL * licenseURL; 
@property (nonatomic,readonly) char displayFullScreenPhotoGallery; 
@property (nonatomic,readonly) char useGallery; 
@property (nonatomic,readonly) NSString * uid; 
@property (nonatomic,readonly) double sizeRatio; 
@property (nonatomic,readonly) char highQuality; 
@property (nonatomic,readonly) char businessProvided; 
@property (nonatomic,readonly) NSString * backgroundJoeColor; 
@required
-(NSString *)uid;
-(NSString *)author;
-(id)bestPhotoForSize:(CGSize)arg1 allowSmaller:(char)arg2;
-(NSString *)caption;
-(NSString *)licenseDescription;
-(char)useGallery;
-(char)highQuality;
-(char)displayFullScreenPhotoGallery;
-(id)largestPhoto;
-(id)bestPhotoForSize:(CGSize)arg1 options:(id)arg2;
-(double)sizeRatio;
-(id)bestPhotoForFrameSize:(CGSize)arg1 displayScale:(double)arg2 options:(id)arg3;
-(NSURL *)licenseURL;
-(char)businessProvided;
-(NSString *)backgroundJoeColor;

@end


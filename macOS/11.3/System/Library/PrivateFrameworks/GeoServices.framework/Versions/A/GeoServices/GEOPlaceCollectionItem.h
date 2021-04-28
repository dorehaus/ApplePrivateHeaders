/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDPlaceCollectionItem, NSString, GEOMapItemIdentifier, NSArray, NSURL;

@interface GEOPlaceCollectionItem : NSObject {

	GEOPDPlaceCollectionItem* _placeCollectionItem;

}

@property (nonatomic,readonly) NSString * itemDescription; 
@property (nonatomic,readonly) GEOMapItemIdentifier * itemIdentifier; 
@property (nonatomic,readonly) NSArray * photos; 
@property (nonatomic,readonly) char supportsPhotoFallback; 
@property (nonatomic,readonly) NSURL * reviewUrl; 
-(id)description;
-(GEOMapItemIdentifier *)itemIdentifier;
-(NSArray *)photos;
-(id)initWithPlaceCollectionItem:(id)arg1 ;
-(NSString *)itemDescription;
-(char)supportsPhotoFallback;
-(NSURL *)reviewUrl;
@end

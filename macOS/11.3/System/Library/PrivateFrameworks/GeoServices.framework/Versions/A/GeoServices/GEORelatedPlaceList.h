/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDRelatedPlace, NSArray;

@interface GEORelatedPlaceList : NSObject {

	GEOPDRelatedPlace* _relatedPlace;

}

@property (nonatomic,readonly) NSArray * mapIdentifiers; 
@property (nonatomic,readonly) int type; 
-(int)type;
-(id)initWithRelatedPlace:(id)arg1 ;
-(NSArray *)mapIdentifiers;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOVenueFilterItem.h>

@protocol GEOVenueFilterItem
@property (nonatomic,readonly) id<GEOVenueIdentifier> filterID; 
@property (nonatomic,readonly) id<GEOVenueLabel> label; 
@property (nonatomic,readonly) char describesParentVenue; 
@required
-(id<GEOVenueLabel>)label;
-(id<GEOVenueIdentifier>)filterID;
-(char)describesParentVenue;

@end


@protocol GEOVenueIdentifier, GEOVenueLabel;
@interface GEOVenueFilterItem : NSObject <GEOVenueFilterItem> {

	id<GEOVenueIdentifier> _filterID;
	id<GEOVenueLabel> _label;
	char _describesParentVenue;

}

@property (nonatomic,readonly) id<GEOVenueIdentifier> filterID;              //@synthesize filterID=_filterID - In the implementation block
@property (nonatomic,readonly) id<GEOVenueLabel> label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) char describesParentVenue;                    //@synthesize describesParentVenue=_describesParentVenue - In the implementation block
-(id)init;
-(id<GEOVenueLabel>)label;
-(id)initWithLabel:(id)arg1 filterID:(id)arg2 ;
-(id<GEOVenueIdentifier>)filterID;
-(char)describesParentVenue;
-(id)initWithFilterElementInfo:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOCoarseLocationData : NSObject {

	unique_ptr<gloria::DB, std::__1::default_delete<gloria::DB>>* _db;
	vector<unsigned char, std::__1::allocator<unsigned char>> _availableZoomLevels;

}
-(id)init;
-(id)initWithFileURL:(id)arg1 ;
-(id)snappedLocationForLocation:(id)arg1 ;
-(char)_populateAvailableZoomRange;
@end


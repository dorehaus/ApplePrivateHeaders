/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHResourceChooserAsset;
@class NSSortDescriptor, NSManagedObjectContext, NSArray, NSMutableArray;

@interface PHResourceChooserList : NSObject {

	id<PHResourceChooserAsset> _asset;
	/*^block*/id _itemHandler;
	/*^block*/id _endOfListHandler;
	long long _hintDataCurrentOffset;
	long long _hintDataNextItemOffset;
	char _finishedPresentingFromHints;
	char _didObserveThumbnailStoreKey;
	NSSortDescriptor* _sortDescriptor;
	NSManagedObjectContext* _context;
	NSArray* _nonHintResources;
	NSArray* _unvisitedNonHintResources;
	unsigned long long _lastPresentedFullResourceIndex;
	char _finishedPresentingFromFetchedResources;
	NSMutableArray* _visitedKeys;
	unsigned long long _enumerationDirection;

}
-(id)init;
@end
